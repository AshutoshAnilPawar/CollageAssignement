// Name : Ashutosh Anil Pawar
// Class : BCS1
// Roll Number : 42
// Program to pass array to function 
// Program to calculate the sum of array elements by passing to a function

#include<stdio.h> 
float calculateSum(float num[]); 

int main(){
   float result, num[] = {23,55, 56, 2, 3, 45}; 

    // num array is passed to calculateSum()
    result  =  calculateSum(num); 
    printf("Result  = %.2f", result); 
    return 0; 
}

float calculateSum(float num[]){
    float sum = 0.0; 

    for (int i =0; i<6; ++i){
        sum += num[i]; 
    }
    return sum;
}
