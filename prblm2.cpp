#include<iostream>



using namespace std;



int main()
{
   int Array_1[6]={1,4,6,3,6,9};
   int Array_2[6]= {5,3,7,1,2,6};
   int Array_3[6];
   int i, j, k=0, x, tot;






   for(i=0; i<10; i++)
   {
      for(j=0; j<10; j++)
      {
         if(Array_1[i]==Array_2[j])
         {
            tot = 0;
            for(x=0; x<k; x++)
            {
               if(Array_1[i]==Array_3[x])
                  tot++;
            }
            if(tot==0)
            {
               Array_3[k] = Array_1[i];
               k++;
            }
         }
      }
   }




   cout<<"Common elements are : ";
   for(i=0; i<k; i++){
      cout<<Array_3[i]<<" ";
      if (k==0){



       cout<<"No Common Elements Found"<<endl;



     }



  }
   cout<<endl;
   return 0;
}
