/**
    Bismillahir Rahmanir Rahim
    Md. Rakibul Islam
    Dept. of CSE, CoU
    **/
#include<bits/stdc++.h>
#define SQR(n) (n*n)
#define CHR getchar()
#define NL printf("\n")
#define PI 2.0*acos(0.0)
#define ll              long long int
#define ull             unsigned long long int
#define sc              scanf
#define gcd(a,b)        __gcd(a,b)
#define lcm(a,b)        ((a)*(b))/gcd(a,b)
#define pf              printf
#define MOD             1000000007
#define mx              123456789
#define Max(a,b) ((a>b)?a:b)
#define Min(a,b) ((a<b)?a:b)
#define ff first
#define D double
#define sz size()
#define ss second
#define PB push_back
#define MP make_pair
#define all(a) a.begin(),a.end()

#define _Max(a,b,c) Max(a,Max(b,c))
#define _Min(a,b,c) Min(a,Min(b,c))

#define BitCnt(a) __builtin_popcountll(a)
#define MEM(a,val) memset(a,val,sizeof(a))
using namespace std;
int main()
{
        int n;
    cin>>n;
    int a[1000],b[1000],cnt=0,cnt1=0,i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        {
            a[cnt]=i;
            b[cnt1]=n/i;
            cnt++;
            cnt1++;
        }
    }
    if(i*i==n)
    {
        a[cnt]=i;
        cnt++;
    }
    for(i=0;i<cnt;i++)
    {
        cout<<a[i]<<" ";
    }
    for(i=cnt1-1;i>=0;i--)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}
