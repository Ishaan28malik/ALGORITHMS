#include<stdio.h>
void prim (int weight[ ][SIZE])‏
{
	int i, j, k, min, lowWeight[SIZE], closest[SIZE];
	for (i = 1; i < SIZE; ++i)	
	{						
		lowWeight[i] = weight[0][i];  closest[i] = 0;		  
	}   

	for (i = 1; i < SIZE; ++i) 
	{		
		k = 1;  min = lowWeight[1];
		for (j = 2; j < SIZE; ++j)‏
			if (lowWeight[j] < min)‏
			{‏
				min = lowWeight[j];  k = j;  
			}
		
		prıntf(“(%d,  %d)/n”, k, closest[k]);	
		lowWeight[k] = INFINITY;
		
		for (j = 1; j < SIZE; ++j)‏			
			if ((weight[k][j] < lowWeight[j])) && (lowWeight[j] < INFINITY))‏
			{
				lowWeight[j] = weight[k][j];  closest[j] = k;  
			}
	}
}
