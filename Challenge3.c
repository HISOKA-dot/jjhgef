#include <stdio.h>

int main() {

    float yard, kilometer;  // wanch n9der nb9a nkhedm jst double variable dima hut chamil 
    
    printf("\nwelcome to the distance converer\n--------------------------------\n \ngive me the kilometers for the distance : ");
    scanf("%f", &kilometer);

   yard = kilometer * 1093.61;


    if(yard >= 1) {
       printf("the distance in yards is : %.5f,\n", yard);

    }
    else {
          printf("the distance in yard is : %.5f,\n", yard);
    } 
return 0;    
}