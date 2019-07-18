#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Key_arr[]={232 ,232,52234,3242,234234};
    int rand_a,rand_b,large_prime=7919,Table_size=100;

    cout<<"Enter Table size \n";
    //cin>>Table_size;
    int Hash_arr[Table_size];
    int randA_arr[Table_size],randB_arr[Table_size];
    cout<<"Enter Key set \n";
    for(int i=0;i<5;i++)
    {
        //cin>>Key_arr[i];
        randA_arr[i]=rand()%large_prime+1;
        randB_arr[i]=rand()%large_prime;
        Hash_arr[i]=((randA_arr[i]*Key_arr[i] +randB_arr[i]) %large_prime )%Table_size;
    }
    for(int i=0;i<5;i++)
    {
        cout<<"Hash Arr[" <<i<< "]: ";
        cout<<Hash_arr[i]<<" \n";
    }
}
