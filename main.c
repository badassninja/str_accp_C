#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int i1,bytes_read,nbytes=100;
    double d1;
    char s1;

    // Read and save an integer, double, and String to your variables.
    scanf("%d", &i1 );
    scanf("%lf",&d1);
    scanf("%[^\n]s",s1);
    // Print the sum of both integer variables on a new line.
    printf("\n %d",i+i1);
    // Print the sum of the double variables on a new line.
    printf("\n %f", d+d1);
    // Concatenate and print the String variables on a new line
    printf("\n%s",s);
    printf("%s",s1);
    //puts(s1);
    //strcat(s,s1);
    // The 's' variable above should be printed first.
    return 0;
}

