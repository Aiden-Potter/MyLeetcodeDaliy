#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isPalindrome(string s) {
	vector<char> vc1, vc2;
	for (auto a : s)
	{
		if (a > 64 && a < 91)
		{
			vc1.push_back(a + 32);
			continue;
		}
		if (a > 96 && a < 123)
		{
			vc1.push_back(a);
			continue;
		}
		

	}
	for (int i = s.size() - 1; i >= 0; --i)
	{
		if (s[i] > 64 && s[i] < 91) {
			vc2.push_back(s[i] + 32);
			continue;
		}

		if (s[i] > 96 && s[i] < 123)
		{
			vc2.push_back(s[i]);
			continue;
		}

	}
	return vc1 == vc2;
}
int main()
{
	cout << isPalindrome("A man, a plan, a canal: Panama");
	system("pause");
	return 0;
}
