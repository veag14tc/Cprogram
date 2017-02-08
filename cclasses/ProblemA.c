//c-code to solve Ms.Greene problem 
#include<stdio.h>
#include<stdlib.h>
char arith_check(int a,int b,int c)
{
if((a+b)==c)
return '1';
else if((a-b)==c || (b-a)==c)
return '1';
else if((a*b)==c)
return '1';
else if( ( ((float)a/b)==c ) || ( ((float)b/a)==c ) )
return '1';
else 
return '0';
}
int main()
{
int a,b,c,no_of_test_cases,i;
char *check;
printf("\nINPUT:\n");
scanf("%d",&no_of_test_cases);
check=(char*)malloc(no_of_test_cases*sizeof(char));
for(i=1;i<=(no_of_test_cases);i++)
{
scanf("%d%d%d",&a,&b,&c);
check[i-1]=arith_check(a,b,c);
}
printf("\nOUTPUT:\n");
for(i=0;i<no_of_test_cases;i++)
{
if(check[i]=='1')
printf("Possible\n");
else
printf("Impossible\n");

}
printf("\n%d\n",sizeof(int));
}
