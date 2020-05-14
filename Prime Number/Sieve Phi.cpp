#include<bits/stdc++.h>
///...................................*****.................................................///
///        Author :  MD. Rakibul Islam ( mmdrakibul2912@gmail.com )                         ///
///                  Department of Computer Science                                         ///
///                  & Engineering,                                                         ///
///                  Comilla University , Bangladesh.                                       ///
///...................................*****.................................................///
using namespace std;
int phi[1000006], mark[1000006];
long long int M=1000006;
void sievephi()
{
    long long int i, j;
    for(i=1; i<=M; i++)
    {
        phi[i]=i;
    }
    phi[1]=1;
    mark[1]=1;
    for(i=2; i<=M; i++)
    {
        if(!mark[i])
        {
            for(j=i; j<=M; j+=i)
            {
                mark[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}
int main()
{
    long long int n, T, i, j, k, l, sum=0;
    cin>>T;
    sievephi();
    while(T--)
    {
        sum=0;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            sum+=phi[i];
        }
        cout<<sum*sum<<endl;
    }
    return 0;
}
