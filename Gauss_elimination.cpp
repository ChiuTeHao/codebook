#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
const int maxsize=100;
void Gauss_elimination(int matrix[][maxsize],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int x=i,y=j;
            while(matrix[y][i]!=0)
            {
                int mul=matrix[x][i]/matrix[y][i];
                for(int k=i;k<n;k++)
                    matrix[x][k]-=matrix[y][k]*mul;
                swap(x,y);
            }
            if(x!=i)
            {
                for(int k=0;k<n;k++)
                    swap(matrix[i][k],matrix[j][k]);
            }
        }
    }
}
int main()
{
}
