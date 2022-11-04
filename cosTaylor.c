#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifdef M_PI
  #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875

int fatorial(int n) {
    int fat;
    for ( fat = 1; n > 1; n = n - 1)
    {
        fat = fat * n;  
    }

    return (fat);
}

int main(){
    int n, i;
    float x,cosx,b;
    scanf("%d %f", &n, &x);

    for ( i = 0; i <= n; i++)
    {
        cosx = (pow(-1, i)*((pow((x*M_PI),(2*i)))/(fatorial(2*i))));
        b += cosx;
    }
    printf("%.5f", b);
    

}
