#include<bits/stdc++.h>
using namespace std;
bool ifdiv(int g, int a, int b){
	if(a%g==0 && b%g==0) return true;
	else return false;
}

int main()
 {
	/*int T;
	cin>>T;
	while(T)
	{*/
	    int a, b, cnt=1, g, flag=0;
		cin>>a>>b;
		g = __gcd(a, b);
	    map<int, int> m;
		cout<<cnt;
	    /*T--;
	}*/
	return 0;
}
