#include<iostream>
using namespace std;
void Range1(int range);
void Range2(int range);
main()
{
    int range;
    cout << "Enter number of rows.....";
    cin >> range;
    Range1(range);
    Range2(range);  
}
   void Range1(int range)
   {
       for(int i=1;i<=range/2;i++)
       {
             int j,k;
             for( j=range/2;j>=i;j--)
             {
              cout<<" ";
             } 
             for(k=1;k<=j;k++)
             {
                 cout << "*";
             }
             cout << endl;   
       }
   }
   void Range2(int range)
   {
       for(int i=1;i<=range/2;i++)
       {
             int j,k;
             for( j=1;j<=i;j++)
             {
              cout << " ";
             } 
             for(k=range/2;k>=j;k--)
             {
                 cout << "*";
             }
             cout << endl;   
       } 
   }
