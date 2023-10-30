#include<iostream>
#include<math.h>
using namespace std;
//f for prime 
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
//f for primeseries
  bool primesereis(int y)
{
    for(int i=2;i<=sqrt(y);i++){
        if(y%i==0){
            return false;
        }
    }
    return true;
}
//f for fibonacci
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
//f for factorial
void factoral (int y)
{
    int factorial=1;
    for (int i=2; i <= y;i++)
    {   
       factorial= factorial*i;
    }
    cout<<"Your factorial is: "<<factorial<<endl;
    
}
//f for sumseries
int sumseries(int x)

{
    int answer=0;
    for (int i = 1; i <=x; i++)
    {
        answer=answer+i;

    }
    return answer;
    
}
//f for d to binary
void binarytodecimal(int n)
{
    int ans=0;
    int x=1;
    while (n>0)
    {
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;

    }
    cout<<"your Binary number is : "<<ans<<endl;
    
}
    



int main()
{
    cout<<"<<<<< Welcome to mega function >>>>>"<<endl;
    cout<<"Select what you wants to do: "<<endl;
    cout<<"1.Prime number"<<endl;
    cout<<"2.Prime number series"<<endl;
    cout<<"3.Fibonacci series"<<endl;
    cout<<"4.Factorial"<<endl;
    cout<<"5.Sum of series"<<endl;
    cout<<"Number conversions"<<endl;
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
    case(5):
    cout<<"Enter number for sum series: "<<endl;
    cin>>n; 
    cout<<"Your sum is: "<<sumseries(n)<<endl;
    case(6):
    cout<<"Select your choice"<<endl;
    cout<<"1.Decimal to Binary"<<endl;
    cout<<"2.Binary to Deciamal"<<endl;





    int n;
    cin>>n;
    switch(n){
        case(2):
        int n;
        cout<<"Enter your Binary number: "<<endl;
        cin>>n;
        binarytodecimal(n);



    }

    


    }
    cout<<endl;




    main();
}