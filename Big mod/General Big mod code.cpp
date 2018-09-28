#include<bits/stdc++.h>
using namespace std;

int bigmod(int a)
{
    int n, m, l;
    if(a==0)
        return 1;

    if(a%2==0)
    {
        int c=bigmod(a, 7);
        return c*c%7;
    }
    else
        return (a*bigmod(a,7)) %7;

}


int main()
{
    int a;
    cin>>a;
    printf("%d",bigmod(a,7));

    return 0;
}
