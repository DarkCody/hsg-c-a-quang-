#include    <bits/stdc++.h>
#define LL  long long
using namespace std;
int main() {
    LL n, dem;
	cin>>n;
    dem=0;
    for(LL i=2;i*i<=n;++i)
    if (n%i==0){
        dem++;
        while (n%i==0) n/=i;
    }
    if (n>1) dem++;
    cout<<dem<<'\n';
}


 
