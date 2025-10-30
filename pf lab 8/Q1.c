#include <stdio.h>
int main(){
    int score[3][4] = {
    {85, 92, 78, 90},
    {88, 76, 95, 84},
    {90, 85, 88, 92}
    };
    float avg = 0;
    int sum = 0;
    int i,j;
    for(i = 0; i<3;i++){
        sum = 0;
        avg = 0;
        for(j = 0;j<4;j++){
            sum = sum + score[i][j];
        }
        avg = sum / j;
        printf("Avg of class %d is: %.2f\n",i+1,avg); 
    }
    
    
    
    
    
    
    
    return 0;
}
