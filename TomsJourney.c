#include<stdio.h>
int a[5][5];
int m=0;
int p,q;
void tom(int i,int j,int tr)
{
	
	if(a[i][j]>1)
		tr=tr+a[i][j];
	if(i==(p-1) && j==(q-1))
		if(m<tr)
			m=tr;
	if(j<q)
		if((a[i][j+1])>0)
			tom(i,j+1,tr);
	if(i<p)
		if(a[i+1][j]>0)
			tom(i+1,j,tr);
	
}
int main()
{
	int i,j;
	printf("Enter order");
	scanf("%d%d",&p,&q);
	for(i=0;i<p;i++)
		for(j=0;j<q;j++)
			scanf("%d",&a[i][j]);
	tom(0,0,0);
	printf("\n\nTreasure Found %d",m);
	
}

