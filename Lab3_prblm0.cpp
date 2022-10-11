#include<iostream>
using namespace std;
int main(){


int a[4][4];
   cout<<"Enter the element of matrix:"<<endl;
   for (int i=0;i<4;i++){
    for(int j=0;j<4;j++){
        cin>>a[i][j];
    }
    }
    cout<<"Mtrix:"<<endl;
    for(int i=0;i<4;i++){
       for(int j=0;j<4;j++){
        cout<<"  "<<a[i][j];
       }
       cout<<endl<<endl;
    }
    return 0;
}
