#include <stdio.h>
int main(){
    int img[4][4] = {
    {1, 0, 1, 0},
    {0, 1, 0, 1},
    {1, 1, 0, 0},
    {0, 0, 1, 1}};
    
    int i,j,count=0;
    for (i = 0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%2d", img[i][j]);
            if(img[i][j] == 1){
                count++;
            }
        }
        printf("\n");
    }
    
    printf("\n");
    for (i = 0;i<4;i++){
        for(j=0;j<4;j++){
            if(img[i][j] == 1){
                img[i][j] = 0;
            }
            else{
                img[i][j] = 1;
            }
            printf("%2d", img[i][j]);
        }
        printf("\n");
    }
    
    
    printf("White in orignal are %d ",count);
    
    
    
    
    return 0;
}
