void BS(int *a)
{ 
int i,j,temp=0;
for(i=0;i<10;i++)
{

	for(j=0;j<10;j++)
	{
		if(a[j]>a[i])
		{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;		
		}	
	}
	}
} 
