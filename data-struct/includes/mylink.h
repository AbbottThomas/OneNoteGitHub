#ifndef MYLINK_H
#define MYLINK_H
typedef struct SingleLink_s
{
    int data;
    struct SingleLink_s * next;  
}SingleLink_t;

void insert_node_begin(SingleLink_t* name , int new_data);
void print_link(SingleLink_t* name);
SingleLink_t* init_single_link(SingleLink_t* name);
void destroy_single_link(SingleLink_t*name);



#endif