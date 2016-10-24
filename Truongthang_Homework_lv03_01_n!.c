#include <stdio.h>
int main()
{
int i,n,S=1;

printf("\nNhap gia tri can tinh:");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
    S=S*i;

}

printf("Ket qua:%d",S);
}


