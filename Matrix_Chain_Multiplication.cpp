#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5,j,q,min,M[5][5];
    int p[5] = {5,4,6,2,7};
    memset(M,0,sizeof(M));
    for(int d=1;d<n-1;d++)
    {
        for(int i=1;i<n-d;i++)
        {
            j = i+d;
            min = 1000;
            for(int k=i;k<j;k++)
            {
                q = M[i][k]+M[k+1][j]+(p[i-1]*p[k]*p[j]);
                if(q<min)
                {
                    min = q;
                }
            }
            M[i][j] = min;
        }
    }
    cout<<M[1][n-1]<<endl;
}
