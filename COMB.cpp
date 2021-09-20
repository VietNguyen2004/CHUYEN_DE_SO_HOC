#include<iostream>
#include<math.h>
using namespace std;
typedef long long ll;

#define ff(i,a,b) for(int i = a; i <= b;i ++)
#define fl(i,a,b) for(int i = a;i>=b;i--)
#define nmax 1000000001
ll n;


string sum(string a, string b)
{
	int carry = 0;
	string c = "";
	while(a.size() < b.size()) a= "0" + a;
	while(b.size() < a.size()) b= "0" + b;
	fl(i,a.size()-1,0)
	{
		int x = a[i] - '0';
		int y = b[i] - '0';
		int s = x + y + carry;
		carry = s/10;
		c = to_string(s%10) + c;
	}
	if(carry) c = "1" + c;
	return c;
}



string c[2000][2000]  = {};
string Comb(int n,int k)
{
    if(c[n][k] != "") return c[n][k];
    if(k == n || k == 0) c[n][k] = "1";
    else c[n][k] = sum(Comb(n-1,k-1), Comb(n-1,k));
    return c[n][k];
}
int main()
{
    int n,k;
    cin >> n >>k;
    cout<<Comb(n,k);

}
