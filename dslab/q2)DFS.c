#include<stdio.h>
int n,g[100][100],v[100],s;
void dfs(int s)
{
    int i;
    v[s]=1;
    printf("Visited Node = %d\n",s);
    for(i=0;i<n;i++){
        if(v[i]==0&&g[s][i]==1)
        {
            dfs(i);
        }
    }
}
int main()
{
    int i,j;
    printf("Enter the no of vertices\n");
    scanf("%d",&n);
    printf("Enter the adjacency Matrix : \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d=",j);
            scanf("%d",&g[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        v[i]=0;
    }
    printf("Enter the starting vertex");
    scanf("%d",&s);
    dfs(s);
}