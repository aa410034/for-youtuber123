#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,j,temp;
const int a[10]={5,10,8,7,3,4,1,6,2,9};
    printf("�Ƨǫe: ");
	for(i=0;i<10;i++)
	{
	printf("%3d ",a[i]);
}
    BS(&a,&a);
printf("�Ƨǫ�: "); 
	for(i=0;i<10;i++)
	{
	printf("%3d ",a[i]);
}
	return 0;
}
