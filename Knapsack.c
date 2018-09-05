#include<stdio.h>
void KnapSack(int W,int v[],int n,int wt[]);
int Max(int x, int y)
{
	return (x>y)? x:y;
}
void KnapSack(int W,int v[],int n,int wt[])
	{
		int i,j;
		int V[n+1][W+1]; // V is the value table
		for(j = 0; j<= W; j++) {
		V[0][j] = 0;
	}
		for(i = 0; i <= n; i++) {
		V[i][0] = 0;
	}
		for(i = 1; i <= n; i++) {
		for(j = 1; j <= W; j++) {
			if(wt[i] <= j) {
				V[i][j] = Max(V[i-1][j], v[i] + V[i-1][j - wt[i]]);
			} else {
				V[i][j] = V[i-1][j];
			}
		}
	}
		printf("Max Value: %d\n", V[n][W]);
	}
int main(void)
{
	int n=4;
	int v[]={5, 10, 20, 60, 40};
	int wt[]={7, 3, 2, 4, 1};
	int W=6;
	KnapSack(W,v,n,wt);
	return 0;
}
