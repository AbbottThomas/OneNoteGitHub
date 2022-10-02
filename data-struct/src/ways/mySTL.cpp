#include <iostream>
#include "mySTL.h"


void test_includes()
{
    cout<<"mySTL.cpp和mySTL.h都编译正常\n"<<endl;
    return;
}


void qucik_sort_by_stack(int A[],quick_sort_work work)
{
    int low = work.low;
    int high = work.high;
    int result;
    result = Partition(A,low,high);
    cout<<"结束: "<<result<<endl;
    return;
}