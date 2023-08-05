#include<iostream>
using namespace std;
int main()
{
     // Hollow Ractangle

         int r,c;
         cout<<"Enter number of rows and columns : "<<endl;
         cin>>r;
         cin>>c;
    for (int row = 0; row < r; row++)
    {
        if (row == 0 || row == (r-1))
        {
            for (int col = 0; col < c; col++)
            {
                cout << "* ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"* ";
             for (int col = 0; col < (c-2); col++)
            {
                cout << "  ";
            }
            cout<<"*";
            cout<<endl;
        }
    }
    return 0;
}