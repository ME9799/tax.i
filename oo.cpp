#include<iostream>

using namespace std;

int main()
{
 int pay;
 int sum;
 cout<<"please enter your income"<<endl;
 cin>>pay;
 
 
 if(pay<=10000)
 {
 sum=pay*0.25;
 }
 
 cout<<"your imcome tax is "<<sum<<endl;
}
