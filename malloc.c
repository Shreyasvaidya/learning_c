#include<stdio.h>
#include<stdlib.h>
int main(){
        int **array;
        array = (int**) malloc(4*sizeof(int*));
        for(int i = 0;i<4;i++){
                array[i] = malloc(5*sizeof(int));


        }
        for(int i=0;i<4;i++){
                for(int j=0;j<5;j++){
                        array[i][j] = i + j;
                }
        }
        for(int i=0;i<4;i++){
                for(int j=0;j<5;j++){
                        printf("%d ",array[i][j]);
                }
                printf("\n");
        }
        //freeing
        for(int i=0;i<4;i++){
                free(array[i]);
        }
        free(array);
        //lets see      
        printf("%d",array[0][0]);
        return 0;
}
~                                       
