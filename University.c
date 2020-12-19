#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 3
#define M 31
#define INCOME 93
int main(void){
int i,j,fev;

int a[N][M];
int b[INCOME];


    srand(time(NULL));
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            a[i][j] = rand()%351;
        }
    }

    printf("Income for month January:\n");
        for(j=0;j<M;j++){
            printf("%d ", a[0][j]);
    }
    puts("\n");

    
    printf("Income for month February:\n");
        for(j=0;j<M-2;j++){
            printf("%d ", a[1][j]);
    }
    puts("\n");

    printf("Income for month March:\n");
    for(j=0;j<M;j++){
            printf("%d ", a[2][j]);
    }
    puts("\n");

    //New table for 3 months income
    int sum;
    printf("Total income at 3 months:\n");
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            b[j] = a[i][j];
            sum = sum+b[j];
        }
    }
    printf("%d Euro", sum);
    puts("\n");
        int max=300;
        printf("Days with the highest income on march:\n");
        for(j=0;j<M;j++){
            if(a[2][j] > max){
                printf("%d/3/2020 = %d \n",j+1, a[2][j]);
            }
            
        }    
    return 0;
}
