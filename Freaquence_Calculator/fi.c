#include <stdio.h>
#define MAX_SIZE 100


int main()
{

    float fi[MAX_SIZE]; // Frequence
    float N = 0;        // sum of effectives
    float ni[MAX_SIZE]; // effectives
    int i, n;           // @i the counter , @n The number of effectives

    
    
        printf("Enter the number of effectives: "); // read number of effectives from use
        scanf("%d", &n);

        printf("Enter your ni: \n");
        for (i = 0; i < n; i++)
        {
            scanf("%f", &ni[i]); // read ni from user
            N += ni[i];
        }
        

        if (N <= 0)     // Make sure that N not = 0 or less
        {
            printf("Invalid Input");
            return 1;
        }
        printf("The freaquences are: \n"); // Prints the results
        for (i = 0; i < n; i++) // loop to do the calculation
        {
            fi[i] = (ni[i] *= 100) / N;
            
            printf("fi : %f\n", fi[i]);
        }        

        
    
  
        



    return 0;
}