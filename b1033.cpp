#include <iostream>
#include <cctype>
using namespace std;
int main() {
  string bad, should;
  getline(cin, bad);  //Ϊ�˷�ֹ��һ���ǿյģ�������cin >> ,��getline(cin, ...)
  getline(cin, should);
  for (int i = 0, length = should.length(); i < length; i++) {
    if (bad.find(toupper(should[i])) != string::npos) continue;
	//�����ַ���a�Ƿ�����Ӵ�b,������strA.find(strB) > 0 
	//���� strA.find(strB) != string:npos
	//����string:npos�Ǹ�����ֵ��˵������û��ƥ��
    if (isupper(should[i]) && bad.find('+') != string::npos) continue;
    cout << should[i];
  }
  return 0;
}

