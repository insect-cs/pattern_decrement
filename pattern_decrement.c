//input= 5
//output

//*****
//****
//***
//**
//*
#include<stdio.h>
void pattern(int n);
int main(){
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}

void pattern(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n-i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}
