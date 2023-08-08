/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/

#include<iostream>
using namespace std;

int factorial(int num)
{
    int fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int binomialCoefficient(int num1,int num2)
{
  int nCr=factorial(num1)/(factorial(num2)*factorial(num1-num2));
  return nCr;
}

void pascalTriangle(int row)
{
   for(int i=0;i<row;i++)
   {
    for(int j=0;j<=i;j++)
    {
       cout<<binomialCoefficient(i,j)<<" ";
    }
    cout<<endl;
   }
}

int main()
{
    int row;
    cout<<"Enter the number of rows:";
    cin>>row;
    pascalTriangle(row);
   return 0;
}