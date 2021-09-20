#include<iostream >
using namespace std;

typedef long long ll;
ll gcd(ll a,ll b)
{
    while(b)
    {
        swap(a,b);
        b %= a;
    }
    return a;
}

int main()
{
    cout<<gcd(1004838,143847);
}
