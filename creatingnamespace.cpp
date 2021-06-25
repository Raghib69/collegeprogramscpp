#include<iostream>
using namespace std;
namespace first
{
    int num = 12;

}
namespace first
{
    int num1 = 24;

}
int main()
{
    cout<<"num of the namespace first = "<<first::num<<endl;
    cout<<"num1 of the namespace first = "<<first::num1;
    return 0;

}