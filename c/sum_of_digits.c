/*
Objective

In order to get the last digit of a number, we use modulo operator \%. When the number is modulo divided by 10 we get the last digit. 

To find first digit of a number we divide the given number by  until number is greater than . At the end we are left with the first digit. 

Task

In this challenge, you have to input a five digit number and print the sum of digits of the number. 

Input Format

The input contains a single five digit number, .

Constraints


Output Format

Print the sum of the digits of the five digit number.

Sample Input 0

10564
Sample Output 0

16

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n, sum=0, temp;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.

    while (n!=0)
    {
        temp = n % 10;
        sum += temp;
        n /= 10;
    }
    printf("%d", sum);
    return 0;
}

