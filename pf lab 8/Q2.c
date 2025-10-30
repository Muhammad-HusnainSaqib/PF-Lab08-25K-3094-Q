#include <stdio.h>
int main(){
    int pics[2][12] = {
    {12, 10, 15, 8, 5, 20, 25, 30, 10, 5, 8, 15},
    {10, 12, 18, 9, 6, 22, 28, 35, 12, 7, 9, 16}
    };
    
    int i,j;
    for(i = 0; i < 2; i++){
        for(j = 0;j < 12;j++){
         printf("Year %d,Month %d: %d photos\n", i+1,j+1,pics[i][j]);   
        }
    }
    return 0;
}
