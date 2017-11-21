#include <bits/stdc++.h>
using namespace std;
int arr[26];

int main(){
	string s;
	cin >> s;
	int l=s.size();
	int i,j;


	int fin=l;
	char ch;
	for(i=0;i<26;i++){
		int mx=0;
		ch=i+97;

		int prev=-1;
		for(j=0;(j<s.size());j++){
			if(s[j]==ch){

			if(j-prev>mx)
                mx=j-prev;
			prev=j;
		    }
		}
		if(l-prev>mx)
            mx=j-prev;

		if(mx!=0)
            fin=min(fin,mx);
	}

	cout<< fin ;
	return 0;

}
