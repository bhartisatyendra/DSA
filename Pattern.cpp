//  In this concept we use the outer loop and a inner loop that is nested to each other first outer loop print number of line you want print and inner loop print the 1 to j times again and agsin.
// WAP to print    ******
// ******
// ******
// ******
// ****** --->stars into five lines
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter how many lines you want to print star: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//        int m=5;
//        for(int j= 1;j<=m;j++){
//         cout<<"*";
//        }
//        cout<<endl;
//     }
//     return 0;
// }

// 2.WAP to print Square Pattern
//   1 2 3 4
//   1 2 3 4
//   1 2 3 4
//   1 2 3 4

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter how many lines you want to print?";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j <<" ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 3.WAP to print
//   A B C D
//   A B C D
//   A B C D
//   A B C D

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "How many lines you want to print: ";
//     cin >> n;
//     for (int i = 0; i <= n - 1; i++)
//     {
//         char ch = 'A';
//         for (int j = 0; j <= n - 1; j++)
//         {
//             cout << ch << " ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 4.WAP tom print Sqaure pattern

// 1 2 3
// 4 5 6
// 7 8 9

// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cout<<"Enter a numbers for lines print.";
// cin>>n;
// int num =1;
// for(int i =0;i<n;i++){
//     for(int j=0;j<n;j++){
//         cout<<num<<" ";
//         num++;
//     }
//     cout<<endl;
// }
// cout<<" Number After pattern : "<<num;
// return 0;
// }

// 5.WAP to print

// A B C
// D E F
// G H I
// J K L

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter how many lines you want print?";
//     cin >> n;
//     // char ch = 'a';
//     for (int i = 0; i < n; i++)
//     {
//     char ch = 'a';
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch<<" ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 6.WAP to print
//    *
//    * *
//    * * *
//    * * * *
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter how many lines you want to print:";
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// 7.WAP to print 
    // 1
    // 2 2 
    // 3 3 3 
    // 4 4 4 4 
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter how many lines you want to print: ";
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i+1;j++){
//             cout<<i+1<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }


// 8.WAP to print
    //   A 
    //   B B 
    //   C C C C 
    //   D D D D D 

// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cout<<"Enter how many lines you want to print: ";
// cin>>n;
// char ch='A';
// for(int i=0;i<n;i++){
//     for(int j=0;j<(i+1);j++){
//         cout<<ch <<" ";
//         ch++;
//     }
//     cout<<endl;
// }

//     return 0;
// }


// 9.WAP to print 
    // 1 
    // 1 2
    // 1 2 3 
    // 1 2 3 4 
// #include<iostream>
// using namespace std;

// int main(){
// int n;
// cout<<"Enter how many lines you want to print:";
// cin>>n;
// for(int i =0;i<n;i++){
//     for(int j=1;j<=i+1;j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }

//     return 0;
// }