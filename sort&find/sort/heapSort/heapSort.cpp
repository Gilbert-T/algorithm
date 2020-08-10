//
// Created by gilbert on 8/10/20.
//
#include "heapSort.h"

heapSort::heapSort() : data_(NULL), length_(0){

}
heapSort::heapSort(std::shared_ptr<std::vector<int> > data, const heapSort::index_type length)
: data_(data), length_(length){

}
heapSort::~heapSort() {

}
heapSort::index_type heapSort::left(heapSort::index_type i) {
    return 2*i + 1;
}
heapSort::index_type heapSort::right(heapSort::index_type i) {
    return 2*i + 2;
}
void heapSort::swap(int &lhs, int &rhs) {
    int temp = lhs;
    lhs = rhs;
    rhs = temp;
}
void heapSort::maxHeap(const heapSort::index_type& index) {
    heapSort::index_type l = left(index);
    heapSort::index_type r = right(index);
    heapSort::index_type largest = 0;
    if(l <= length_ - 1 && (*data_)[l] > (*data_)[index])
        largest = l;
    else
        largest = index;
    if(r <= length_ - 1 && (*data_)[r] > (*data_)[largest])
        largest = r;
    if(largest != index){
        swap( (*data_)[index], (*data_)[largest]);
        maxHeap(largest);
    }
}
void heapSort::buildMaxHeap(void){
    for(int i = length_ / 2 - 1; i >= 0; --i){
        maxHeap(i);
    }
}
void heapSort::sort(void){
    buildMaxHeap();
    std::cout << std::endl;
    for(int i = length_ - 1; i >= 1; --i){
        swap( (*data_)[i], (*data_)[0]);
        length_ --;
        maxHeap(0);
    }
}


