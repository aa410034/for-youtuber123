#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) 
{
int i,j,temp;
 const int  a[10]={5,10,8,7,3,4,1,6,2,9};
    printf("排序前: ");
	for(i=0;i<10;i++)
	{
	printf("%3d ",a[i]);
}
    BS(&a,&a);
printf("排序後: "); 
	for(i=0;i<10;i++)
	{
	printf("%3d ",a[i]);
}
	return 0;
}

