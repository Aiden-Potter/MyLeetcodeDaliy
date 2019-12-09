#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
using namespace std;
//! 先排序，排序后直接比较是否相等，耗时和空间都很多
bool isAnagram1(string s, string t)
{
       if (s.size() != t.size()) {
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
}

//! 哈希表计数器，26位的计数器，如果他们每位都相同则
bool isAnagram2(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> umap;
        for (int i = 0; i < s.size(); ++i) {
            ++umap[s[i]];
            --umap[t[i]];
        }
        for (auto c : umap) {
            if (c.second != 0) {
                return false;
            }
        }
        return true;
    }
 //! 一样的哈希，不同的写法
bool isAnagram3(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<int, int> umap;
        for (char ch : s) {
            ++umap[ch];
        }
        for (char ch : t) {
            if (umap[ch] > 0) {
                --umap[ch];
            } else {
                return false;
            }
        }
        return true;
}
int main()
{
	int * a=new int[20];
	int * b=new int[26]();
	int i=5;
       int Array[i];
    cout << "Hello world!" << endl;
    return 0;
}
