#include<stdio.h>
int findContentChildren(int* g, int gSize, int* s, int sSize) 
{
    int i,j,count=0;
    for(i=0;i<gSize;i++)
    {
        for(j=0;j<sSize;j++)
        {
            if(s[j]>=g[i])
            {
                count++;
                i++;
            
            	if(i<gSize)
                	continue;
            	else
                	return count;
	    }
        }
    }
    return count;
}
int main()
{
	int gsize,ssize;
	printf("Enter the size of array:\n");
	scanf("%d%d",&gsize,&ssize);
	int g[gsize],s[ssize];
	int i;
	for(i=0;i<gsize;i++)
		scanf("%d",&g[i]);
	for(i=0;i<ssize;i++)
		scanf("%d",&s[i]);
	printf("%d\n",findContentChildren(g,gsize,s,ssize));
}
