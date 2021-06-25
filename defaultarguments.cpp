#include<iostream>
using namespace std;
void fun(int a, int b, int c=5, int d= 7)
{
cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
}
int main()
{
fun(4,6);
return 0;
}
