#include<stdio.h>


// The prime factors of 13195 are 5, 7, 13 and 29.
// What is the largest prime factor of the number 600851475143 ?


long long max_prime_factor(long long value)
{

    long long max_prime = -1;


    while(value % 2 == 0){
        max_prime = 2;
        value /= 2;
    }

    while(value % 3 == 0){

        max_prime = 3;
        value /= 3;
    }

    for(int i = 5; i*i <= value; i += 6){

        while(value % i == 0){
            max_prime = i;
            value /= i;
        }

        while(value % (i + 2) == 0){
            max_prime = i + 2;
            value /= (i + 2);
        }
    }


    if(value > 4)
        max_prime = value;


    
    return max_prime;

}


int main(){

    long long input;
    printf("Enter a value :");
    scanf("%lld", &input);
    printf("Max prime factor of %lld : %lld.", input, max_prime_factor(input));


    return 0;
}