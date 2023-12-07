#include<stdio.h>


// If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3,5,6 and 9 . 
//The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 100. 

int main(){

    int value;
    int sum = 0;
    printf("Enter a value:");
    scanf("%d", &value);


    for(int i = 0; i < value; ++i){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }

    printf("Sum of multilples 3 or 5 below %d = %d", value, sum);

}
