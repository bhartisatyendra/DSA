//  conditional program

// 1 .WAP to check whether yhe given nunmber is postive or negative

// #include <iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a number :";
//     cin >> n;
//     if (n >= 0)
//     {
//         cout << "Positive number.";
//     }
//     else
//     {
//         cout << "Negative number";
//     }
//     return 0;
// }

// 2.WAP to check age is above 18 or not if above 18 then you can vote if less than  18 then you cannot vote.

// #include<iostream>

// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter your age :";
//     cin>>age;
//     if(age>=18){
//         cout<<"You can vote ";
//     } else{
//         cout<<"You can not vote";
//     }

// return 0;
// }

// 3.WAP to check given number is even or odd

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     if(n%2 == 0){
//         cout<<"Even number.";
//     }else{
//         cout<<"Odd number.";
//     }
//     return 0;
// }

// 4.WAP to check grade of students

// #include<iostream>

// using namespace std;

// int main(){
//     int marks;
//     cout <<"Enter your marks: ";
//     cin>>marks;
//     if(marks>=90){
//         cout<<"A grade";
//     }else if(marks>=80 && marks<90){
//         cout<<"B grade";
//     }else{
//         cout<<"C grade";
//     }
//     return 0;
// }

// 5.WAP to check the  given character is lowercasew or uppercase.

// #include<iostream>

// using namespace std;

// int main(){
//     char ch;
//     cout<<"Enter a character :";
//     cin>>ch;
//     if('a'<=ch && ch<='z'){
//         cout<<"Lowercase";
//     }else{
//         cout<<"Uppercase";
//     }
//     return 0;
// }

// 6. Ternary operator

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, check;
//     cout << "Enter a number: ";
//     cin >> n;
//     check = n >= 0 ? "positive" : "negative";
//     cout << check;
//     return 0;
// }