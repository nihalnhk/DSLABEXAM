#include<stdio.h>
int n,g[20][20],v[20],a[20],f=-1,r=-1,s;
void bfs(int s)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(v[i]==0 && g[s][i]==1){
            r=r+1;
            a[r]=i;
            v[i]=1;
            printf("%d",i);
        }
    }
    f=f+1;
    if(f<=r){
        bfs(a[f]);
    }
}
int main(){
    int i,j;
    printf("Enter no of Vertices");
    scanf("%d",&n);
    printf("Enter Adjacency Matrix");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&g[i][j]);
    for(i=0;i<n;i++)
        v[i]=0;
    printf("Starting Vertex");
    scanf("%d",&s);
    f=r=0;
    a[r]=s;
    v[s]=1;
    printf("BFS traversal is %d",s);
    bfs(s);
    if(r!=n-1)
        printf("Not possible");

}
