#include <iostream>
using namespace std;

int main()
{
   unsigned F;
   int a,b,c,d,e,f,g;
   float sum,average,Temp;
   cout<<"Enter the temp of monday in °C = ";
   cin>>a;
   cout<<"Enter the temp of teusday in °C = ";
   cin>>b;
   cout<<"Enter the temp of wed in °C = ";
   cin>>c;
   cout<<"Enter tge temp of thursday in°C = ";
   cin>>d;
   cout<<"Enter the temp of friday in °C = ";
   cin>>e;
   cout<<"Enter the temp of sat in °C = ";
   cin>>f;
   cout<<"Enter the temp of sun in °C = ";
   cin>>g;
    {
       sum = a+b+c+d+e+f+g;
       average = sum/7;
       Temp = average*2.12;
       cout<<"The temp is = "<<Temp<<"F"<<endl;
    }
}

