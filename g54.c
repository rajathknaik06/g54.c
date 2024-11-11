/*In a simulation system used by a software engineering team, you need to track and display the simulated "memory addresses" associated with different variables.



This simulation includes three types of input data: an integer, a floating-point number, and a character. The goal is to print these simulated locker addresses before and after performing simple operations on the integer and character variables.

Input format :
The input consists of three separate lines.

Each line contains one value: an integer as i, a float as j, and a character as k respectively.

Output format :
The output consists of the following lines:



"Original locker address in i = <value of i>"

"Original locker address in j = <value of j (with two decimal places) >"

"Original locker address in k = <ASCII value of k>"

"New locker address in i = <value of i + 1>"

"New locker address in k = <ASCII value of k + 1>"*/


#include <stdio.h>

int main() {
    int i;
    float j;
    char k;

    // Read input values
    scanf("%d", &i);
    scanf("%f", &j);
    scanf(" %c", &k);

    // Print original locker addresses
    printf("Original locker address in i = %d\n", i);
    printf("Original locker address in j = %.2f\n", j);
    printf("Original locker address in k = %d\n", k);

    // Print new locker addresses after performing the operations
    printf("New locker address in i = %d\n", i + 1);
    printf("New locker address in k = %d\n", k + 1);

    return 0;
}

