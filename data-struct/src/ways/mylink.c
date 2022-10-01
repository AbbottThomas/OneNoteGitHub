#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "mylink.h"
#define getVariableName(x)  (#x)


void insert_node_begin(SingleLink_t* name , int new_data)
{
    // SingleLink_t* temp = name->next;
    SingleLink_t* new_node = (SingleLink_t* )malloc(sizeof(SingleLink_t));
    new_node->data = new_data;
    new_node->next = name->next;
    name->next = new_node;
    return ;
}

SingleLink_t* init_single_link(SingleLink_t* name)
{

    name = (SingleLink_t* )malloc(sizeof(SingleLink_t));
    name->data = 666;
    name->next = NULL;
    return name;
}
void 

destroy_single_link(SingleLink_t*name)
{
    SingleLink_t* temp = NULL;
    SingleLink_t* move_name = name;
    do
    {
        temp = move_name->next;
        free(move_name);
        move_name = temp;
    } while (temp != NULL);
    printf("destoy ok\n");
    return ;
    
}
void print_link(SingleLink_t* name)
{
    SingleLink_t* temp = name->next; 
    if (temp == NULL)
    {
        printf("链表%s为空\n",getVariableName(name));
    }
    else
    {
        /* code */
        printf("链表%s: ",getVariableName(name));
        while (temp != NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
    return ;
}