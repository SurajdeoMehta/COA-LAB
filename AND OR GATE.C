AND OR GATE IMPLEMENTATION


#include <stdio.h>

int main() {
    int a[5]={0,1,1,1,0};
    int b[5]={1,1,0,1,0};
    int res1,res2;
    for(int i=0;i<5;i++)
    {
        res1=a[i]&b[i];
       res2=a[i]|b[i];
        printf("\n %d and %d= %d",a[i],b[i],res1);
       printf("\n %d or %d =%d",a[i],b[i],res2);
    }

    return 0;
}
