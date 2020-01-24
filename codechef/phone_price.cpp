#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code9
	int t;
	cin>>t;
	while(t--){
		int n, m, q, a, b, cnt=0;
		cin>>n>>m>>q;
		int mat[n][m];
        memset(mat, 0, sizeof(mat[0][0]) * n * m);
		for(int i=0; i<q; i++) {
			cin>>a>>b;
			for(int k=0; k<n; k++){
				mat[k][b-1]++;
			}
			for(int k=0; k<m; k++){
				mat[a-1][k]++;
			}
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
                //cout<<mat[i][j]<<" ";
				if(mat[i][j]%2!=0) cnt++;
			}
            //cout<<endl;
		}
		cout<<cnt<<"\n";
	}
	return 0;
}
