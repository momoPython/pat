#include <iostream>
#include <cctype>
using namespace std;
int main() {
  string bad, should;
  getline(cin, bad);  //为了防止第一行是空的，不能用cin >> ,用getline(cin, ...)
  getline(cin, should);
  for (int i = 0, length = should.length(); i < length; i++) {
    if (bad.find(toupper(should[i])) != string::npos) continue;
	//查找字符串a是否包含子串b,不是用strA.find(strB) > 0 
	//而是 strA.find(strB) != string:npos
	//其中string:npos是个特殊值，说明查找没有匹配
    if (isupper(should[i]) && bad.find('+') != string::npos) continue;
    cout << should[i];
  }
  return 0;
}

