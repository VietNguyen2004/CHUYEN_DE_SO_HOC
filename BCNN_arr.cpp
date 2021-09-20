ll lcn(ll  a,ll  b)
{
    return a * b/ gcd(a,b);
}
int main()
{
    int n;
    cin >> n;
    int x;
    int bcnn = 1;
    for(int i =1;i <= n;i++)
    {
        cin >> x;
        bcnn = lcn(bcnn,x);

    }
    cout<<bcnn;
}
