#include<stdio.h>
#include<stdlib.h>
#include"mylink.h"
#include "test.h"    //正确的,情形
// #include "./includes/test.h"

void main()
{
    int data;
    SingleLink_t* LL = NULL;
    hihi(); 
    LL = init_single_link(LL);
    printf("LL.data=%d\n",LL->data);
    while (data != 9999)
    {
        scanf("%d",&data);
        insert_node_begin(LL,data);
    }
    print_link(LL);
    destroy_single_link(LL);
    hihi();
    return  ;
}

