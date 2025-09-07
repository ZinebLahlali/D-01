// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int maxi(int a, int b){
    int max;
    if(a<b){

        max = b;
    }

    return max;
};
int main() {
    int x, y;

    printf("entrer nombre 1: ");
    scanf("%d", &x);
    printf("entrernombre 2: ");
    scanf("%d", &y);

    printf("le maximum est: %d",maxi(x,y) );

    return 0;
}
