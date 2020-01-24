#include<bits/stdc++.h>
using namespace std;
int josephus(int n, int k)
{
   vector<int> v;
   for(int i=0; i<n; i++) v.push_back(i+1);
   int kill=k-1;
   if(v.size() == 1) return v[0];
   else while(v.size()!=1){
       v.erase(v.begin()+kill);
       kill = (kill+(k-1))/v.size();
   }
   return v[0];
}
/*int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}*/
int Combinations(int n, int r)
{
    if(r==0 || r==n) return 1;
	else return Combinations(n-1, r-1)+ Combinations(n-1, r);
}

int main()
 {
	//code
	int T;
	cin>>T;
	while(T)
	{	int A, X, n;
	    cin>>A>>X>>n;
	    for(int i=0;i<=n;i++)
	    {
	        cout<< Combinations(n,i)*pow(A,(n-i))*pow(X,i)<< " ";
	    }
	    cout<< endl;
	    T--;
	}
	return 0;
}
