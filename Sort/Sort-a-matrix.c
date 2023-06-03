#include <stdio.h>


void tri_bullet(int *tab, int max)
{
 int i;
     int temp;
 
   while(max>0)
   {
   	i=0;
   	   while(i<max-1)
   	   {
   	   	if(tab[i]>tab[i+1])
   	   	{
   	   		temp=tab[i];
   	   		tab[i]=tab[i+1];
   	   		tab[i+1]=temp;
   	   	}
   	   	i=i+1;
   	   }
   	   max=max-1;
   	}
	}
	
	
int main()
{
	int i;
	int matrix[3][3]={{1,2,3},{5,7,9},{6,5,9}};
	int array[9];
	int max=9;
	//transforme the values of the matrix in the array
	 for(i=0;i<9;i++)
	 {
	  array[i]=matrix[i/3][i%3];
	 }
	//Display the arr
	   for(i=0;i<9;i++)
	   {
	   	printf("array[%d]=%d \n",i,array[i]);
	   	
	   }
	   printf("\n");
	   for(i=0;i<9;i++)
	   {
	 tri_bullet(array,max);
	   printf("array[%d]=%d\n",i,array[i]);
	   }
	   return 0;
	}