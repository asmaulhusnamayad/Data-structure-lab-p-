#include <iostream>

using namespace std;
 class student {
public:
    string name;
    int id;
    float cgpa;
    public: student (string a,int b,float c){
            name=a;
            id=b;
            cgpa=c;
    }
            public: student (){
            }
    void studentdetails(){
    cout<<"Name:"<<name<<endl;
     cout<<"ID:"<<id<<endl;
      cout<<"CGPA:"<<cgpa<<endl;
    }
};
int main(){
    student s1 ("Mayad",22,3.79);
    s1.studentdetails();
    return 0;
    }


