#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int lis[n];
    for(int i=0;i<n;i++)
    {
        lis[i]=1;
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if((arr[i]>arr[j]) && (lis[j]+1>lis[i]))
            {
                lis[i] = lis[j]+1;
            }
        }
        for(int k=0;k<n;k++)
        {
            cout<<lis[k]<<" ";
        }
        cout<<endl;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        if(lis[i]>ans)
        {
            ans = lis[i];
        }
    }
    int LIS[ans];
    int k = ans;
    for(int i=n-1;i>=0;i--)
    {
        if(lis[i]==ans)
        {
            LIS[ans-1] = arr[i];
            ans--;
        }
        if(ans==0)
        {
            break;
        }
    }
    cout << "L.I.S. is " << k << endl;
    cout << endl << "L.I.S. Sequence : " << endl;
    for(int i=0;i<k;i++)
    {
        cout<<LIS[i]<<" ";
    }
    return 0;
}
