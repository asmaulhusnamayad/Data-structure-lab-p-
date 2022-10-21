#include<iostream>
using namespace std;
class Student {
     public:
string name;
int id;
float cgpa;
int credit_completed;
public: Student (string n, int i,float c,int d){
          name=n;
          id=i;
          cgpa=c;
          credit_completed=d;
          }

          void studentinfo(){
         cout<<"Enter name:";
          cin>>name;
          cout<<"Enter ID:";
          cin>>id;
          cout<<"Enter CGPA:";
          cin>>cgpa;
          cout<<"Enter Credit_completed:";
          cin>>credit_completed;

          cout<<"student name:"<<name<<endl;
          cout<<"Student Id:"<<id<<endl;
          cout<<"Student CGPA:"<<cgpa<<endl;
          cout<<"Student credit_completed:"<<credit_completed<<endl;
          }
     };
     int main(){
         int student[5]={'a1','a2','a3','a4','a5'};

     Student a1("",0,0.0,0);
     Student a2("",0,0.0,0);
     Student a3("",0,0.0,0);
     Student a4("",0,0.0,0);
     Student a5("",0,0.0,0);
     a1.studentinfo();
     a2.studentinfo();
     a3.studentinfo();
     a4.studentinfo();
     a5.studentinfo();

     int  n=5, i,j, temp;
     float cgpa[n];
   for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-i-1); j++)
        {
            if(cgpa[j]>cgpa[j+1])
            {
                temp = cgpa[j];
                cgpa[j] = cgpa[j+1];
                cgpa[j+1] = temp;
            }
        }
    }
    cout<<"\nArray Sorted Successfully!\n";
    cout<<"\nThe New Array is: \n";
    for(i=0; i<n; i++)
        cout<<cgpa[i]<<" ";
    cout<<endl;


     return 0;
     }
