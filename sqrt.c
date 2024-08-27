#include<stdio.h>

double Mysqrt(int x){
    double r = x;
    while(r*r-x > 0.1 || r*r-x < -0.1){
        r = (r+x/r)/2;
    }
    return r;
}
int Myround(double x){
    return (int)(x);
}
int main()
{
    int x;
    scanf("%d", &x);
    printf("%lf \n", Mysqrt(x));
    printf("%d \n", Myround(Mysqrt(x)));
    
}