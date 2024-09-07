// Reverse print the number like -----> 5 4 3 2 1

// #include<iostream>
// using namespace std;

// int main(){
// int n=4;
// for(int i=n;i>0;i--){
//     cout<<i<<endl;
// }

//     return 0;
// }

// -----------------------------------Reverse Pattern Questions--------------------------------

// 10.WAP to print
// 1
// 2 1
// 3 2 1
// 4 3 2 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter how many lines you want to print: ";
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j > 0; j--)
//         {
//             cout << j <<" ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 11.Floyd's Triangle Pattern
//  1
//  2 3
//  4 5 6
//  7 8 9 10

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter how many lines you want to print:";
//     cin >> n;
//     int num = 1;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 12.Inverted Triangle Pattern 

// 1 1 1 1
//   2 2 2
//     3 3
//       4

#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter how many number you want to print.";
cin>>n;
for(int i=0;i<n;i++){
    // for spaces
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    // for numbers
    for(int j=0;j<n-i;j++){
        cout<<i+1 <<" ";
    }
    cout<<endl;
}

    return 0;
}