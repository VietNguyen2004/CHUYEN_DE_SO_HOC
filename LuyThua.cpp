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

string multiply(string a,int  b)
{
    int s= a.size();
    int nho = 0;
    string result = "";
    fl(i , s-1  , 0)
    {
        int k = (a[i] - '0') * b  + nho;
        nho = k / 10;
        result = to_string(k % 10) + result;
    }
    if(nho) result = to_string(nho) + result;
    return result;
}

string mul(string a,string b)
{
    string result = "";
    int m = 0;
    fl(i,a.size()-1,0)
    {
        string add = multiply(b,(a[i] - '0'));
        ff(k,1,m) add += "0";
        result = sum(result,add);
        m ++;
    }
    return result;
}

string pow(int a,int b)
{
    if(b == 1) return to_string (a);
    if(b == 0) return "1";
    string k = pow(a,b/2);
    if(b&1)
        return multiply(mul(k,k),a);
    return mul(k,k);
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout<<pow(a,b);
}
