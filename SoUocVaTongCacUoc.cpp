#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;

#define ff(i,a,b) for(int i = a; i <= b;i ++)
#define nmax 1000000001
ll n;
ll res = 1;
ll sum = 1;


int main()
{
    cin >> n;
    int k = 2;
    if(n < 2)
    {
        cout<<n <<endl<<n;
    }
    while(n != 1)
    {
       while(n %k != 0) k++;
       int chi_so=0;
       while(n %k == 0)
       {
           chi_so ++;
           n /= k;
       }
       res *= (chi_so + 1);
       sum *= (pow(k,chi_so+1) - 1)/(k-1);
    }
    cout<<res<<endl<<sum;
}
