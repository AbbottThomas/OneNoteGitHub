#include<iostream>
using namespace std;

class animals
{
private:

public:
    int amount;
    static int age;
    animals(int a=0):amount(a){};
    ~animals();
    static void print_age();
    void print_amount()
    {
        cout<<" 在成员函数中访问静态变量age\t";
        cout<<"amount:"<<amount;
        cout<<"\tage:"<<age<<endl;
    }
};
void animals::print_age()
{
    cout<<"in print_age\t";
    cout<<"age:"<<age<<endl;
    // cout<<"amount"<<amount:    
}
animals::~animals()
{

}

int animals::age = 0;

int main()
{
    animals::print_age();
    animals::age = 2;
    animals::print_age();
    animals tiger;
    tiger.age = 5;
    tiger.print_age();
    tiger.print_amount();
    return 0;
}