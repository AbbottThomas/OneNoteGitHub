#include<iostream>    //添加上c_cpp编译器信息,不填tasks信息后,可以正常显示
#include "test.h"    
#include"testplus.h"
#include"mySTL.h"
#include <string>
using namespace std;   // 不加的话,cout不能正常用


void test_mystack()
{
    myStack<string>mystack1(-1);
    mystack1.push("A");
    mystack1.push("B");
    cout<<"mystack1.size: "<<mystack1.size()<<endl;
    cout<<"mystack1.peek:"<<mystack1.peek()<<endl;
    cout<<"mystack1.peek:"<<mystack1.peek()<<endl;
    // mystack1.~myStack();   
    //错误 , 因为到主函数到return 0的时候,会跳到初始化位置,自动调用析构函数.如果加上,就是会出现段错误
    // 在小函数里,退出也会自动调用析构函数

}

void test_qucik_sort_by_stack()
{
    int A[10] = {5,3,1,4,2,0,6,9,7,8}; 

    stack<quick_sort_work> temp_workspace_deque;
    temp_workspace_deque.emplace(0,9);
    while (!temp_workspace_deque.empty())
    {
        quick_sort_work work = temp_workspace_deque.top();
        qucik_sort_by_stack(A,temp_workspace_deque);
        
    }
     
    // QuickSort(A,0,9);
    cout<<"测试A: ";
    for (int i = 0; i < 10; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    // cout <<"Hello World!\n";
    hihi();
    hihiCplus(); 
    test_includes();
    // test_mystack();
    test_qucik_sort_by_stack();
    



    return 0;
}