//Practice loops and comparisons

/*  Task1: Write a program that asks the user for a number and counts down to 1.Example Input: 5Example Output:text5
4
3
2
1
Blast off!   */

/* #include<stdio.h>
#include<iostream>
using namespace std;
int main(){
int i;
for(i=5;i>=1;i--){
    cout<<i<<endl;
}
cout<<"Hurrayyyyyyyyyy!!!"<<endl;
return 0;
} */


/* Question 2: Sum of First N NumbersTask: 
Write a program that takes a number n from the user and calculates the sum of all numbers from 1 up to n.
Example Input: 4 (Calculates 1 + 2 + 3 + 4)
Example Output: The total sum is: 10 */

#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int i,n,sum=0;
    cout<<"Enter number :";
    cin>>n;
    for(i=1;i<=n;i++){
    sum=sum+i; }
        cout<<"sum of "<<n<<" is: "<<sum<<endl;
    return 0;
}


/* Task: Write a program that prints all the even numbers between 1 and 20.
Expected Output: 2 4 6 8 10 12 14 16 18 20 */

/* #include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=2;i<=20;i=i+2){
        cout<<(i)<<endl;
    }
    return 0;
} */