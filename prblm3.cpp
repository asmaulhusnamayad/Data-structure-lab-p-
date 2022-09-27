#include<iostream>

using namespace std;

int main()
{
    int i,m,x[20]={1,4,6,3,6,9,1};

  cout<<"Stored Integers in Array : "<<endl;

  for(i=0;i<7;i++)
  {
  cout<<" "<<x[i]<<" ";
  }
  cout<<"\n";
  cout<<"Duplicate Values in Given Array are : "<<endl;
  for(i=0; i<7; i++)
   {
    for(m=i+1;m<7;m++)
    {
    if(x[i]==x[m])
    {
    cout<<" "<<x[i]<<" ";
    }
   }
   }
  return 0;
 }
