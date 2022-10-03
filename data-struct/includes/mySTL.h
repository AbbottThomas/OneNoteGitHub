#ifndef MYSTL_H
#define MYSTL_H
#include <vector>
#include <queue>
#include <list>
#include <stack>
#include <deque>
#include <iostream>
#define SIZE 10
using namespace std;

// extern "C" int Partition(int A[],int low,int high); 
// extern "C"
// {
// #include "SortPackage.h"
//  }
#include "SortPackage.h"


void test_includes();

struct quick_sort_work
{
    int low, high;
    quick_sort_work(int x, int y):low(x),high(y){}
};

// void qucik_sort_by_stack(int A[],quick_sort_work work);
void qucik_sort_by_stack(int A[],stack<quick_sort_work>& work_quque);






template <class T>    //底层实现默认为deququ,可以改为其他的???
class myStack
{
private:
    T *arr;
    int top;
    int capacity;
public:
    myStack(int top, int size=SIZE );  // 默认实参放末尾,可以赋值
    ~myStack()
    { 
        cout<<"调用~myStack\n"<<endl;
        delete [] arr;
        cout<<"成功调用~myStack\n"<<endl;
    }
    void push(T);
    T pop();
    T peek();

    int size();
    bool isEmpty();
    bool isFull();
};
template <class T>
myStack<T>::myStack(int top_vaule , int size):top(top_vaule),capacity(size){arr = new T[size];}      //类模板的参数列表,和参数的表示定义
// {
//     top = top_vaule;
//     capacity = size;
//     arr = new T[size];
// }
template <class T>
void myStack<T>::push(T t)
{
    if(isFull())
    {
        cout<<"Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    cout<< "Inserting "<< t <<endl;
    arr[++top] = t;              //++top,是先+1,再用top值,top++是先用top值再+1
}
template <class T>
T myStack<T>::peek()
{
    if (!isEmpty())
    {
        return arr[top];
    }
    else
    {
        exit(EXIT_FAILURE);
    }
    
    
}
template <class T>
T myStack<T>::pop()
{
    if(isEmpty())
    {
        cout<<"Underflow\nProgram Teminated\n";
        exit(EXIT_FAILURE);
    }
    cout<<"Removing "<<peek()<<endl;
    return arr[top--];
}
template <class T>
bool myStack<T>::isEmpty(){return top <= -1 ;}
template <class T>
bool myStack<T>::isFull(){return size() == capacity;}
template <class T>
int myStack<T>::size(){return top + 1;}




#endif