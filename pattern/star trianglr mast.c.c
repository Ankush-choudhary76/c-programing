#include<stdio.h>
int main (){
int n ;
printf("enter a number  : ");
scanf("%d",&n);
for (int i = 1; i<=n ; i++){
    for(int k = 1;k<=n-i;k++){
        printf(" ");
    }
        int a =1;
  for (int j=1 ;j<=i;j++){
           int d = a+64; // d= 65
char ch = (char)d;       // ch = (char)65 -> ch = 'a'
        printf("%c",ch);
         a++;
  }

    printf("\n");


}

return 0 ;
}