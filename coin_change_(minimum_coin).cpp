#include<bits/stdc++.h>
using namespace std;
#define inf 100000
int main()
{
    int coin_numbers,money;
    cout<<"Enter coin numbers and value"<<endl;
    cin>>coin_numbers>>money;
    int coins[coin_numbers];
    for(int i=0;i<coin_numbers;i++)
    {
        cin>>coins[i];
    }
    int matrix[coin_numbers][money+1];
    for(int i=0;i<coin_numbers;i++)
    {
        for(int j=0;j<money+1;j++)
        {
            matrix[i][j] = inf;
        }
    }
    for(int i=0;i<coin_numbers;i++)
    {
        matrix[i][0]=0;
    }
    for(int i=0;i<coin_numbers;i++)
    {
        for(int j=0;j<money+1;j++)
        {
            if(j<coins[i])
            {
                if(i-1>=0)
                {
                    matrix[i][j] = matrix[i-1][j];
                }
            }
            else
            {
                if(i-1>=0)
                {
                    matrix[i][j] = min(matrix[i-1][j],matrix[i][j-coins[i]]+1);
                }
                else
                    matrix[i][j] = matrix[i][j-coins[i]]+1;
            }
        }
    }
    for(int i=0;i<coin_numbers;i++)
    {
        for(int j=0;j<money+1;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
       vector <int> ans;
        for(int j=money,i=coin_numbers-1;matrix[i][j] != 0;)
        {

            if( j-coins[i]>=0 && matrix[i][j] == matrix[i][j-coins[i]]+1)
            {
                ans.push_back(coins[i]);
                j = j-coins[i];
            }
            else
                i--;
        }
     for(int i=0;i<ans.size();i++)
     {
         cout<<ans[i]<<" ";
     }
}
