#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;

#define ff(a,b) for(int i = a;i<=b;i++)
#define nmax 1000000001

bool a[nmax];
ll n;
void print(bool a[],int l,int r)
{
    ff(l,r) if(a[i])cout<<i<<" ";
    cout<<endl;
}

void sangnt()
{
    ff(2,n) a[i] = true;

    ff(2,sqrt(n))
    {
        for(int j = i *i ;j<=n;j+=i)
        {
            a[j] = false;
        }
    }
}

int main()
{

    cin >> n;
    sangnt();
    print(a,1,n);
}
