#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m;
		scanf("%d",&m);
		int h = 0;
		for(int j=0;j<m;j++){
			string s;
			cin>>s;
			for(int k=0;k<s.size();k++){
				h+=(s[k]-65)+j+k;
			}
		}
		printf("%d\n",h);
	}
	return 0;
}

