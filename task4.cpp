#include<iostream>
using namespace std;
void Range(int range);
main()
{
   int range;
   cout << "Enter range.... ";
   cin >> range;
   Range(range);
}
void Range(int range)
{
   for(int i=1;i<=range;i++)
   {
          for(int j=i;j<=i;j++)
          {
             if(j%4==0)
             {
                j = j*10;
             }
             cout <<j << " " ;
          } 
   }

}
