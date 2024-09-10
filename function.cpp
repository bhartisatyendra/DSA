// function is the block of code which perform some spcific task
// 1.#include <iostream>
// using namespace std;

// int printHello()
// {
//     cout << "Hello\n";
//     return 3;
// }
// int main()
// {

//     // cout<<printHello(); it print the function after that it print the return type value
//     printHello();
//     // int value=printHello();
//     // cout<<"value is"<<value;
//     return 0;
// }

// ----------------------------------function with parameter and return typees------------

// 2. WAF to calculate the sum of two numbers as well as calculate the minimum of two numbers
// #include<iostream>
// using namespace std;

// int add(int a,int b){
//      int sum = a+b;
//      return sum;
// }

// int miniTwoNumbers(int a ,int b){
//     if(a<b){
//         return a;
//     }else{
//         return b;
//     }
// }

// int main(){
//      cout<<"Sum of two numbers is: "<<add(35,56)<<endl;
//      cout<<"Smallest number is: "<<miniTwoNumbers(3,6);
//     return 0;
// }

// 3.WAF to calculate the sum of numbers from 1 to n.
#include <iostream>

using namespace std;

int SumN(int n)
{
    int Sum = 0;
    for (int i = 1; i <= n; i++)
    {
        Sum += i;
    }
    return Sum;
}

int main()
{
    int num;
    cout << "Enter a nunmber: ";
    cin >> num;
    cout << "Sum of numbers from 1 to " << num << " " << "is: " << SumN(num) << endl;
    return 0;
}