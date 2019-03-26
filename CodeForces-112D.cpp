#include<bits/stdc++.h>
using namespace std;
#define mac 100000
int arr[100005];
int main()
{
    int arr[100005];
    int x,y,n,flag;
    long long int cnt=0;
    int temp,temp1;
    for(int i=1; i<=mac; i++)
        arr[i]=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>x>>y;
        flag=sqrt(x);
        for(int j=1; j<=flag; j++)
        {
            if(x%j==0)
            {
                temp=j;
                temp1=x/j;
                if((i-arr[temp])>y  || y==0)
                {
                    cnt++;
                }
                if(temp!=temp1)
                {
                    if((i-arr[temp1])>y || y==0)
                    {
                        cnt++;
                    }
                }
                arr[temp]=i;
                arr[temp1]=i;
            }
        }
        cout<<cnt<<endl;
        cnt=0;
    }
}
