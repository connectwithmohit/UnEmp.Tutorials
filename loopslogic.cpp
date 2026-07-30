/* FizzBuzz Challenge: Print numbers from 1 to 50. If divisible by 3, print "Fizz". 
If divisible by 5, print "Buzz". If divisible by both 3 and 5, print "FizzBuzz". */

// #include<stdio.h>
// #include<iostream>
// using namespace std;
// int main(){
//     int i;
//     for(int i=1;i<=50;i++){
//     if (i % 3 == 0 && i % 5 == 0){
//         cout<<"fizzbuzz"<<endl;
//     }
//     else if(i%3==0){
//         cout<<"fizz "<<endl;
//     } 
//     else if(i%5==0){
//         cout<<"buzz"<<endl;}
//     else{
//        cout<<i <<endl;
//     }   
//     }
//         return 0;
    
//     }

/* Write a program that takes a number n from the user and calculates its factorial. 
 (Example: If input is 5, output should be 5 * 4 * 3 * 2 * 1 = 120) */

//  #include<stdio.h>
//  #include<iostream>
//  using namespace std;
//  int main(){
//      int N;
//      long long Factorial=1;
//      cout<<"Enter number: ";
//      cin>>N;
//      for(int i=1;i<=N;++i){
//       (Factorial=Factorial*i);
//      }
//      cout<<N<<" Factorial value is:"<<Factorial;
//      return 0;
//  }

/* Task: Write a program that takes a multi-digit number (e.g., 1234) 
from the user and prints it in reverse order (e.g., 4321) */

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
   int num, reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> num;
    while (num != 0) {
        remainder = num % 10;    
        reversedNumber = reversedNumber * 10 + remainder; 
        num /= 10;                     
    }

    cout << "Reversed Number = " << reversedNumber << endl;

    return 0;
   
}
    