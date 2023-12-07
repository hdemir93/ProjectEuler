#include<stdio.h>


// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?


long long max_prime_factor(long long n)
{

    long long max_prime = -1;


    while(n % 2 == 0){
        max_prime = 2;
        n /= 2;
    }

    while(n % 3 == 0){

        max_prime = 3;
        n /= 3;
    }

    for(int i = 5; i*i <= n; i += 6){

        while(n % i == 0){
            max_prime = i;
            n /= i;
        }

        while(n % (i + 2) == 0){
            max_prime = i + 2;
            n /= (i + 2);
        }
    }


    if(n > 4)
        max_prime = n;


    
    return max_prime;

}


int main(){

    long long value;
    printf("Enter a value :");
    scanf("%lld", &value);
    printf("Max prime factor of %lld : %lld.", value, max_prime_factor(value));


    return 0;
}