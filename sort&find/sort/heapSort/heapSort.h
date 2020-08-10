//
// Created by gilbert on 8/10/20.
//

#ifndef HEAPSORT_HEAPSORT_H
#define HEAPSORT_HEAPSORT_H

#include <iostream>
#include <vector>
#include <memory>
class heapSort{
public:
    typedef uint32_t index_type;
    heapSort();
    heapSort(std::shared_ptr<std::vector<int> > data, const index_type length);
    ~heapSort();
    index_type right(index_type i);
    index_type left(index_type i);
    void buildMaxHeap(void);
    void maxHeap(const index_type& index);
    void sort(void);
private:
    void swap(int& lhs, int& rhs);
    heapSort(const heapSort &rhs);
    heapSort&operator=(const heapSort &rhs);
    std::shared_ptr<std::vector<int> > data_;
    index_type length_;
};
#endif //HEAPSORT_HEAPSORT_H
