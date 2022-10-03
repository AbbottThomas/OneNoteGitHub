#include <iostream>
#include "mySTL.h"


void test_includes()
{
    cout<<"mySTL.cpp和mySTL.h都编译正常\n"<<endl;
    return;
}


// void qucik_sort_by_stack(int A[],quick_sort_work work)
// {
//     int low = work.low;
//     int high = work.high;
//     int result;
//     result = Partition(A,low,high);
//     cout<<"结束: "<<result<<endl;
//     return;
// }
void qucik_sort_by_stack(int A[],stack<quick_sort_work>& work_quque)
{
    quick_sort_work work = work_quque.top();
    int low = work.low;
    int high = work.high;
    int result;
    result = Partition(A,low,high);
    work_quque.pop();
    // cout<<"end: "<<result<<endl;
    if (low < result)
    {
        work_quque.emplace(low,result - 1);
        // cout<<"low "<<low<<"\tresult"<<result<<endl;
    }
    if (result < high)
    {
        work_quque.emplace(result + 1,high);
        // cout<<"result "<<result<<"\thigh"<<high<<endl;

    }
     
    return;

}