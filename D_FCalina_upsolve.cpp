#include <bits/stdc++.h>

using namespace std;

int main() {
	long long N, Z, W, buf;

	vector<long long> a;

	cin >> N >> Z >> W;

	for (int i = 0 ; i < N  ; i++)
	 {
       cin>>buf;
		a.push_back(buf);

	}
	long long answer;

	cout<<a[N-1]<< " "<< a[N-2]<< " " << W<< " "<<a[0]<<endl;

	if (N > 1)
		{answer = max(abs(a[N - 2] - a[N - 1]), abs(a[N - 1] - W));}
	else
		{answer = abs(a[0] - W);}
	cout << answer << endl;
}
