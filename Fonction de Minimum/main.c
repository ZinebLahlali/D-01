// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int mini(int a, int b){
    int min;
    if(a<b){

        min = a;
    }

    return min;
};
int main() {
    int x, y;

    printf("entrer nombre 1: ");
    scanf("%d", &x);
    printf("entrernombre 2: ");
    scanf("%d", &y);

    printf("le minimum est: %d",mini(x,y));

    return 0;
}
