#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
int mark[10000000+3];
void sieve(int n)
{
    int i, j, k, limit=sqrt(n*1.0)+2;
    mark[0]=mark[1]=1;
    prime.push_back(1);
    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }
    for(i=3; i<=n; i++)
    {
        if(mark[i]==0)
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=(2*i))
                    mark[j]=1;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    for(int i=0;i<=n;i++)
       {
           cout<<prime[i]<<" ";}
    return 0;
}
