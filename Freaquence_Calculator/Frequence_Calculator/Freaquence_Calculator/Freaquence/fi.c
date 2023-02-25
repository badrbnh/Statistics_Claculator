#include <stdio.h>
#define MAX_SIZE 100


int main()
{

    float fi[MAX_SIZE];
    float N;
    float ni[MAX_SIZE];
    char resp;
    int i, n;

    
    
        printf("Enter the number of effectives: "); // read number of effectives from use
        scanf("%d", &n);

        printf("Enter your xi: \n");
        for (i = 0; i < n; i++)
        {
            scanf("%f", &ni[i]); // read xi from user
        }
        
        printf("Enter your N: \n"); // read the total of xi from user
        scanf("%f", &N);

        if (N <= 0)
        {
            printf("Invalid Input");
            return 1;
        }
        for (i = 0; i < n; i++)
        {
            fi[i] = (ni[i] *= 100) / N;
            printf("fi : %f\n", fi[i]);
        }        

        
    
  
        



    return 0;
}