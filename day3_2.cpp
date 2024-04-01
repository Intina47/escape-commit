/**
 * Fizz Buzz Problem states that given an integer n, 
 * for every integer i <= n, 
 * the task is to print “FizzBuzz” if i is divisible by 3 and 5,  (15)
 * “Fizz” if i is divisible by 3, 
 * “Buzz” if i is divisible by 5 or i (as a string) 
 * if none of the conditions are true.
*/
#include <iostream>
using namespace std;

void FizzBuzz(int n){
    for(int i=1; i<=n; ++i){
        if((i%15)==0){
            cout << "FIZZBUZZ" <<endl;
        }else if((i%3) == 0 && (i%5) != 0){
            cout << "FIZZ" <<endl;
        }else if((i%5) == 0 && (i%3) != 0){
            cout << "BUZZ" <<endl;
        }else{
            cout << i <<endl;
        }
    }
}

int main(){
    int num = 15;
    FizzBuzz(num);

    return 0;
}