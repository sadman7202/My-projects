#include<iostream>
#include<math.h>
using namespace std;
void prime (int x)
{
   int i; 
   for(i=2;i<x;i++){
    if(x%i==0){
     cout<<"Non prime"<<endl;   
     break;
    }
  }
  if(i==x){
    cout<<"Prime number"<<endl;
  }
}
  bool primesereis(int y)
{
    for(int i=2;i<=sqrt(y);i++){
        if(y%i==0){
            return false;
        }
    }
    return true;
}
void fibonacci(int x)
{
    int t1=0,t2=1,nextn;
    for (int i = 0; i <=x; i++)
    {
       cout<<t1<<endl;
       nextn=t1+t2;
       t1=t2;
       t2=nextn;
    }
}
void factoral (int y)
{
    int factorial=1;
    for (int i=2; i <= y;i++)
    {   
       factorial= factorial*i;
    }
    cout<<"Your factorial is: "<<factorial<<endl;
    
}

    



int main()
{
    cout<<"Select what you wants to do: "<<endl;
    cout<<"1.Prime number"<<endl;
    cout<<"2.Prime number series"<<endl;
    cout<<"3.Fibonacci series"<<endl;
    cout<<"4.Factorial"<<endl;
    int i,a,b,n,p;
    cout<<"Enter your choice: ";
    cin>>n;
    switch(n){
    case(1):
    cout<<"Enter your number:";
    cin>>p;
    prime(p);
    break;

    case(2):
    cout<<"Enter first and last number: ";
    cin>>a>>b;
    for ( i = a; i <=b; i++)
    {
        if(primesereis(i)){
            cout<<i<<endl;
        }
    }
    
    break;

    case(3):
    cout<<"Enter term for fibonacci: ";
    cin>>n;
    fibonacci(n);
    break;

    case(4):
    cout<<"Enter number for factorail: "<<endl;     
    cin>>n;
    factoral(n);


    }




    main();
}