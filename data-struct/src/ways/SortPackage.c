#include "SortPackage.h"
#include <stddef.h>

void swap(int *a , int *b )
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int Partition(int A[],int low,int high)
{
    int pivot = A[low];
    while (low < high)
    {
        while (low < high && A[high] >= pivot)
        {
            --high;
        }
        // if(A[high] < pivot) swap(A[low],A[high]);  注意,A[number]为数值, A + number才是指针的移动
        //  if(A[high] < pivot) swap(A + low,A + high);  //正确的
        A[low] = A[high];//费位的极致利用
        while( low < high && A[low] < pivot)
        {
            ++low;
        }
        // if(A[low] >= pivot)swap(A[high],A[low]);
        // if(A[low] >= pivot)swap(A + high,A + low);
        A[high] = A[low];
        
    }
        A[low] = pivot;
        return low;
    
}

void QuickSort(int A[],int low , int high)
{
    if (low < high)
    {
       int pivotpos =  Partition(A,low,high);
       QuickSort(A,low,pivotpos -1);
       QuickSort(A,pivotpos+1,high);
    }
    return;
}

//用栈代替递归
//退出条件, 一次工作需要的函数和操作, 一次工作需要保存的数据 ,有点像深度优先
// 对一个操作,生成的两组数保存到栈里,存两个单位
// 
void QuickSort2(int A[] , int low , int high)
{
    return;
}