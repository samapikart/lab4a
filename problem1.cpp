
 +#include <iostream>
 +using namespace std;
 +
 +/*PROGRAM TO CUBE OF ANY NUMBER USING FUNCTION*/
 +float cube(float a)
 +{
 +  float cub=a*a*a;
 +  return cub;
 +}
 +int main()
 +{
 +  cout<<"PROGRAM TO CUBE OF ANY NUMBER USING FUNCTION";
 +  float num;
 +  cout<<"\n \nEnter a number: ";
 +  cin>>num;
 +  float cube1=cube(num);
 +  cout<<"\nThe cube of the number is: "<<cube1;
 +  return 0;
 +}
