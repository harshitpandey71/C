#include<stdio.h>

int main (){
 
    int marks [10] = {30,40,56,59,60,90,39,59,37,90,};

    for(int i=0; i<10; i++){
        if(marks[i]<35){
            printf("%d", i);
        }
    }

return 0;
}