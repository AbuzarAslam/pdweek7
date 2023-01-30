#include<iostream>
using namespace std;
main()
{
    int rows;
    cout << "Enter rows....";
    cin >> rows;
    for(int i=rows;i>=1;i--)
    {
        for(int j=i;j>=1;j--)
        {
        cout << "*";
        }
    cout << endl;
    }
}