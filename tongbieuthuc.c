#include<stdio.h>
#include<conio.h>
int i, n;
int sum = 0;
int i = 1;
void tongbieuthuc()
{
   
    while(i <= n)
    {
        sum = sum + i * i;
        i++;
    }
    
    printf("\nTong 1*1 + 2*2 + ... + n*n la: %d", sum);
}
int main(){
 
    printf("Nhap n: ");
    scanf("%d", &n);
    tongbieuthuc();
    return 0;
    
}