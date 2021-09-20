#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;

#define ff(a,b) for(int i = a;i<=b;i++)
#define nmax 1000000001

bool isPrime(ll n)
{
    if(n < 2) return false;
    ff(2,sqrt(n)) if(n%i==0) return false;
    return true;
}





int main()
{
    ll n;
    cin >> n;
    cout<<boolalpha<<isPrime(n);
}
