// reverse a digit
// input  = 120 
//output = 21
#include <iostream>

int reversedigit(int n){
    int result = 0;
    while( n != 0){
        int lastval = n % 10;
        n /= 10;

        // handle 32 bit digit overflow
        
        result = result * 10 + lastval;
    }
    return result;
}

int main(){
    int num = 120;
    int result = reversedigit(num);
    std::cout << result << std::endl;

    return 0;
}