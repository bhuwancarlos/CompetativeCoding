#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int t, c = 1;
	cin>>t;
	while(t--)
	{
	    int l, r, even, odd, ans, cnt=0, n = 1;
        cin>>l>>r;
        for(int i=l; i<=r; i++){
            even =0; odd=0;
            for(int j=1; j<=sqrt(i); j++){
                if(i%j==0){
                    if(i/j==j){
                        if(j%2==0) even++;
                        else odd++;
                    }
                    else {
                        if(j%2!=0) odd++;
                        else even++;
                        if((i/j)%2==0) even++;
                        else odd++;

                    }
                }
            }
            ans = abs(even-odd);
            if(ans<=2)  cnt++;
        }
        cout<<"Case #"<<c<<": "<<cnt<<'\n';
        c++;
	}
    return 0;
}

