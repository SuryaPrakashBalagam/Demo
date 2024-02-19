#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}
int sub(int x, int y)
{
    return x-y;
}

int main()
{
    std::cout<<"Hello World"<<std::endl;
    cout<<"Globe"<<endl;
    int addres = add(10,20);
    int subres = sub(30,5);
    cout<<addres<<endl;
    cout<<subres<<endl;

    return 0;
}