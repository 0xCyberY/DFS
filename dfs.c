#include<stdio.h>
   int a[10][10], s[10], n;
void dfs(int u)
{
   int v;
   s[u]=1; // Mark u as visited
   //printf("%d ",u) ;
   if(u!=v)
	printf("%d ", u);
	for(v=0; v<n;v++)
		if(a[u][v]==1 && s[v]==0)
			dfs(v);
}
void main()
{
   int source,i,j;
   printf("Enter the number of nodes/vertices: \n");
   scanf("%d",&n);
   printf("Enter the Adjacency Matrix: \n");
   for(i=0;i<n;i++)
	for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
		for(source=0;source<n;source++)
		{
			for(i=0;i<n;i++)
			s[i]=0;
			printf("\n The nodes reachable from %d are :",source);
			dfs(source);
		}

}
