void BS(const int *a,int *as)
{ 
int i,j,temp=0;
for(i=0;i<10;i++)
{

	for(j=0;j<10;j++)
	{
		if(as[j]>as[i])
		{
		temp=as[j];
		as[j]=as[i];
		as[i]=temp;		
		}	
	}
	}
} 
