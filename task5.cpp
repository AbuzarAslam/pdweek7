
#include<iostream>
using namespace std;
int Triangle(int num);
main()
{

    int num;
    cout<<"Enter number of triangles...... ";
    cin >> num;
    if(num==1)
    {
      cout << "1";
    }
    else
    {
      int result = Triangle(num);
      cout<<result;
    }
    
}
   int Triangle(int num)
   {
      int i,j;
      for(i=1;i<=num;i=i)
      {
         for(j=i+1;j<=num;j++)
         {
           i = i+j;
         }      
      }
      return i;
   }
