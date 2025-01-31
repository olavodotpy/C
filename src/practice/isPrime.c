#include <stdio.h>
#include <stdbool.h>


bool isPrime(int n){

    if (n <= 1) {
        return false;
    }

    int divisors = 0; 
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors ++;
        }
    }

    return (divisors == 2); 
}

int main(void) {
    bool result = isPrime(5);

    printf(result ? "Is a prime\n" : "Is not a prime\n");
}