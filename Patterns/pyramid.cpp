/*

*
**
***
****
*****

*/

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int numOfRow;
    cin>>numOfRow;

    for(int row=1; row<=numOfRow; row++) 
    {
        for(int col=1; col<=row; col++) 
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}

/*
1
2 1
3 2 1
4 3 2 1 
5 4 3 2 1
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int numOfRow;
//     cin>>numOfRow;

//     for(int row=1; row<=numOfRow; row++) 
//     {
//         int number = row;
//         for(int col=1; col<=row; col++) 
//         {
//             cout<<number<<" ";
//             number--;
//         }
//         cout<<endl;
//     }

// }

// ALTERNATE WAY

/*

1
2 1 
3 2 1

*/


// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int numOfRow;
//     cin>>numOfRow;

//     for(int row=1; row<=numOfRow; row++) 
//     {
//         for(int col=1; col<=row; col++) 
//         {
//             cout<<row-col+1<<" ";
//         }
//         cout<<endl;
//     }

// }

/*
A
BB
CCC
*/



// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int numOfRow;
//     cin>>numOfRow;

//     for(int row=1; row<=numOfRow; row++) 
//     {
//         for(int col=1; col<=row; col++) 
//         {
//             cout<<char(row+64)<<" ";
//         }
//         cout<<endl;
//     }

// }


/*
A
B C
D E F
*/



// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int numOfRow;
//     cin>>numOfRow;

//     for(int row=1; row<=numOfRow; row++) 
//     {
//         for(int col=1; col<=row; col++) 
//         {
//             cout<<char((row+col-1)+64)<<" ";
//         }
//         cout<<endl;
//     }

// }

/*
D
C D
B C D
A B C D

*/


// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int numOfRow;
//     cin>>numOfRow;

//     for(int row=1; row<=numOfRow; row++) 
//     {
//         char start = char((numOfRow-row+1)+64);
//         for(int col=1; col<=row; col++) 
//         {
//             cout<<start<<" ";
//             start++;
//         }
//         cout<<endl;         
//     }

// }

/*

_ _ _ *
_ _ * *
_ * * *
* * * *

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int numOfRow;
//     cin>>numOfRow;

//     for(int row=1; row<=numOfRow; row++) 
//     {
//        for(int space=1; space<=numOfRow-row; space++) 
//        {
//         cout<<"  ";
//        }

//        for(int col=1; col<=row; col++) 
//        {
//         cout<<"* ";
//        }
//         cout<<endl;         
//     }

// }

/*

*
* *
* * *
* * * *

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int numOfRow;
//     cin>>numOfRow;

//     for(int row=1; row<=numOfRow; row++) 
//     {
//        for(int col=1; col<=numOfRow-row; col++) 
//        {
//         cout<<"*  ";
//        }
//         cout<<endl;         
//     }

// }


/*

        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int numOfRow;
//     cin>>numOfRow;

//     for(int row=1; row<=numOfRow; row++) 
//     {
//        for(int space=1; space<=numOfRow-row; space++) 
//        {
//             cout<<"  ";
//        }

//        for(int col1=1; col1<=row; col1++) 
//        {
//             cout<<col1<<" ";
//        }  

//        for(int col2=row-1; col2>=1; col2--) 
//        {
//             cout<<col2<<" ";
//        }      

//        cout<<endl;
//     }

// }


/*
    ALTERNATIVE METHOD
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int numOfRow;
//     cin>>numOfRow;

//     for(int row=1; row<=numOfRow; row++) 
//     {
//        for(int space=1; space<=numOfRow-row; space++) 
//        {
//             cout<<"  ";
//        }

//         int number = 1;
//        for(int col=1; col<=2*row-1; col++) 
//        {
//             cout<<number<<" ";
//             number<row ? number++ : number--;
//        }  

//        cout<<endl;
//     }

// }

/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1

*/

// #include<bits/stdc++.h>
// using namespace std;

// int main() 
// {
//     int numOfRow;
//     cin>>numOfRow;

//     for(int row=0; row<numOfRow; row++) 
//     {
//         for(int col1=1; col1<=numOfRow-row; col1++)
//         {
//             cout<<col1<<" ";
//         }

//         for(int col2=0; col2<2*row; col2++)
//         {
//             cout<<"* ";
//         }

//         for(int col3=numOfRow-row; col3>=1; col3--)
//         {
//             cout<<col3<<" ";
//         }

//         cout<<endl;
//     }
// }