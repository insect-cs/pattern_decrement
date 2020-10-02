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

void pattern(int n) //the logic of pattern
{
   for (int i = n; i >= 1; --i)
    {
      for (int j = 1; j <= i; ++j)
      {
         printf("* ");
      }
      printf("\n");
   }
    
}
