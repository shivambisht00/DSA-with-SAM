// recursion : recursion is a technique in programining where a function callls itself in order to solve a problem .
// 1 Base case : the condition under which the recursion will stop.
// 2 Recursive relation :the recursive relation defineing a sequance where each term depends on one or more previous terms.
// 3 Recursive call : the function calls itself with modified arguments to approach the base case.

// factorial 5! = 5*4! => f(n) = n*f(n-1)

#include<iostream>
using namespace std;
 
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}



int main(){
    int n = 4;
    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}
