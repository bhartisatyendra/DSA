// Loops --> for,while,do-while











//-------------- While-loop-->Jab tak condition is true tab tak loop run kreaga aur apne aap ko update karega---------------

// 1.WAP to pint numbers from 1 to 5

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     // int count = 1; --> we use i instead of count for intialization of variable
//     int i=1; 
//     while (i <= n)
//     {
//         cout << i <<" ";
//         // count++; when we remove update code then it goes into infinity loop so it is necessary to update the condition 
//         i++;
//     }
//     cout<<endl;
//     return 0;
// }



// ----------------for loops------------------------------------------------

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     for(int i=1 ; i<=n; i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     return 0;
// }


// -------------do-while loop----------------------------------

#include<iostream>
using namespace std;

int main(){
    int n =10;

int i=1;
do  {
    cout<<i<<" ";
    i++;
}while(i<=n);
cout<<endl;
return 0;
}