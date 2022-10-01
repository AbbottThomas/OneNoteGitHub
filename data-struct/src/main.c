#include<stdio.h>
#include<stdlib.h>
#include"mylink.h"
#include "test.h"    //正确的,情形
// #include "./includes/test.h"

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

void main()
{
    hihi();
    // test_link();
    return  ;


}

