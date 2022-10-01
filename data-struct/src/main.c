#include<stdio.h>
#include<stdlib.h>
#include"mylink.h"
#include "test.h"    
// #include "./includes/test.h"  //只要tasks.json包含了,怎么写都行
#include "SortPackage.h"

void test_link()
{
    
    int data;
    SingleLink_t* LL = NULL;
    LL = init_single_link(LL);
    printf("LL.data=%d\n",LL->data);
    while (data != 9999)
    {
        scanf("%d",&data);
        insert_node_begin(LL,data);
    }
    print_link(LL);
    destroy_single_link(LL);
    return;
}

void test_sort()
{
    int A[10] = {3,2,4,1,5,9,8,7,0,6};
    QuickSort(A,0,9);
    int data = -1;
    printf("Sort 完毕\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d, ",A[i]);
    }
    printf("\n");
    // while (data != 9999)
    // {
    //     scanf("%d",&data);
    //     if (data <= 9)
    //     {
    //         printf("A[%d]=%d\n",data,A[data]);
    //     }
         

    // }
    
    return;
}


void main()
{
    hihi();
    // test_link();
    test_sort();
    return  ;


}

