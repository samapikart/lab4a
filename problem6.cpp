#include <iostream>
 +using namespace std;
 +
 +/*Program to print prime numbers between given interval.*/
 +int prime(int j)
 +{ 
 +  int count=0;
 +  int tnum=j;
 +  for(int i=2;i<tnum;i++)
 +  {
 +   if(tnum%i==0)
 +   count++;
 +  }
 +  return count;
 +}
 +int main()
 +{
 +  int num1=0,num2=0;
 +  cout<<"\nProgram to print prime numbers in a given interval.";
 +  cout<<"\nENTER THE LOWER LIMIT: ";
 +  cin>>num1;
 +  cout<<"\nENTER THE UPPER LIMIT: ";
 +  cin>>num2;
 +  int j=num1;
 +  cout<<endl<<endl;
 +  while(j<=num2)
 +  {
 +  int count1=prime(j);
 +  if(count1==0)
 +    cout<<"\n"<<j<<" is a prime number.";
 +  j++;
 +  }
 +  return 0;
 +
