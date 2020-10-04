#include <bits/stdc++.h>
using namespace std;

bool Paranthes(string ex)
{
	stack<char> s;
	char x;

	for (int i = 0; i < ex.length(); i++) {
		if (ex[i] == '(' || ex[i] == '[' || ex[i] == '{') {

			s.push(ex[i]);
			continue;
		}

		if (s.empty())
			return false;

		switch (ex[i]) {
		case ')':

			x = s.top();
			s.pop();
			if (x == '{' || x == '[')
				return false;
			break;

		case '}':

			x = s.top();
			s.pop();
			if (x == '(' || x == '[')
				return false;
			break;

		case ']':


			x = s.top();
			s.pop();
			if (x == '(' || x == '{')
				return false;
			break;
		}
	}

	return (s.empty());
}

int main()
{
    int n;
    cin>>n;
	string s;
	cin>>s;

	if (Paranthes(s))
		cout << "VALID";
	else
		cout << "NOT VALID";
	return 0;
}
