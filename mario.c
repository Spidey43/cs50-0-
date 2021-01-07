#include <cs50.h>
#include <stdio.h>

int main(void){
    int x;
    char e = ' ';
    do{
        x = get_int("Height: ");
    } while(x<1 || x>8);
    for (int i = 0; i < x; i++){
        for (int k = i+1; k < x; k++){
            printf("%c", e);
        }
        for (int j = i+1; j>0; j--){
            printf("#");
        }
        printf("\n");
    }
}
