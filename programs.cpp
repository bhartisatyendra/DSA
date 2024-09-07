// WAP to take input from user and print there sum

// #include<iostream>

// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter the value of a :";
//     cin>>a;
//     cout<<"Enter the value of b :";
//     cin>>b;
//     int sum = a+b;
//     cout<<"Sum of a and b is : "<<sum<<endl;
// }

// 2.WAP to check given character is lowercase or uppercase
// #include<iostream>
// using namespace std;

// int main(){
// char ch;
// cout<<"Enter a character: ";
// cin>>ch;
// if(ch>=65 && ch<=90){
//     cout<<"Uppercase";
// }else{
//     cout<<"Lowercase.";
// }
// return 0;
// }

// 3.WAP to print the sum of numbers from 1 o n;
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum =0;
// int i= 1;
// while(i<=n){
//     sum += i;
//     i++;
// }
//     for(int i= 1; i<=n;i++){
//         sum +=i;
//         if(i==5){
//             break;
//         }
//     }
//     cout<<"Sum of number is: "<<sum<<endl;
//     return 0;
// }

// 4.WAP to print odd number

// #include<iostream>

// using namespace std;

// int main(){
// int n =10;
// int oddSum=0;
// for(int i =1;i<=n;i++){
//     if(i%2 != 0){
// cout<<i;---->for print only odd numbers
//         oddSum += i;
//     }
// }
// cout<<"odd Sum ="<<oddSum<<endl;
// return 0;
// }

// 5.WAP to print the sum of even number from 1 to n.

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     int sumEven = 0;
//     for(int i=1;i<=n;i++){
//         if(i%2 ==0){
//             // cout<<i<< " "; --> to print even number
//             sumEven += i;
//         }
//     }
// cout<<"Sum of even number is ="<<sumEven<<endl;
//     return 0;
// }

// 6.WAP to print the sum of all numbers from 1 to N which is divisible by 3.

// #include<iostream>
// using namespace std;

// int main(){
// int n,sum=0;
// cout<<"Enter a number: ";
// cin>>n;
// for(int i=1;i<=n;i++){
//     if(i%3 == 0){
//         sum += i;
//     }
// cout<<endl;
// }
// cout<<"Sum of number is:"<<sum;
//     return 0;
// }

// 7.WAP to print factorial of given numbers.
// #include<iostream>
// using namespace std;

// int main(){
// int n,factorial=1;
// cout<<"Enter a number :";
// cin>>n;
// for(int i=1;i<=n;i++){
//     factorial *=i;
// }
// cout<<"Factorial of number is :"<<factorial;
// return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int factorial = 1;
//     int i = 1;
//     cout << "Enter a positive number: ";
//     cin >> n;
//     while (i <= n)
//     {
//         if (n < 0)
//         {
//             cout << "Error! factorial of negative number is does not exist.";
//         }
//         else
//         {
//             factorial *= i;
//             i++;
//         }
//     }
//     cout << "Factorial of " << n << "=" << factorial;

//     return 0;
// }

// -------------------Area of Square-----------

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a;
//     cout << "Enter the side of square: ";
//     cin >> a;
//     int area = a * a;
//     cout << "Area of square is " << area;
//     return 0;
// }

// ---------------Minimum of two number---

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a, b;
//     cout << "Enter first number: ";
//     cin >> a;
//     cout << "Enter second number :";
//     cin >> b;
//     if (a < b)
//     {
//         cout <<b <<" "<< "is greater than "<<" "<<a;
//     }
//     else
//     {
//         cout <<a <<" "<< "is greater than "<<" "<<b;
//     }
//     return 0;
// }

// ------------Is number is even or odd -----------
#include<iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
if(n%2==0){
    cout<<"Even number.";
}else{
    cout<<"Odd number.";
}
    return 0;
}