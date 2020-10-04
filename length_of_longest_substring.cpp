#include <bits/stdc++.h>
using namespace std;

bool diff(string str, int i, int j)
{

	vector<bool> went(100);

	for (int k = i; k <= j; k++) {
		if (went[str[k] - 'a'] == true)
			return false;
		went[str[k] - 'a'] = true;
	}
	return true;
}

int unique_sub_string(string str)
{
	int n = str.size();
	int res = 0;
	for (int i = 0; i < n; i++)
		for (int j = i; j < n; j++)
			if (diff(str, i, j))
				res = max(res, j - i + 1);
	return res;
}

int main()
{
    int n;
    cin>>n;
	string s;
	cin>>s;
	int length = unique_sub_string(s);
	cout << length;
	return 0;
}
