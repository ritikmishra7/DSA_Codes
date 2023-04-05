/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int numOfRow;
    cin>>numOfRow;

    for(int row=0; row<numOfRow; row++) 
    {
        for(int col1=1; col1<=numOfRow-row; col1++)
        {
            cout<<col1<<" ";
        }

        for(int col2=0; col2<2*row; col2++)
        {
            cout<<"* ";
        }

        for(int col3=numOfRow-row; col3>=1; col3--)
        {
            cout<<col3<<" ";
        }

        cout<<endl;
    }
}