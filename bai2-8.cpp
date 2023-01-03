//Viết chương trình đọc một xâu ký tự, sau đó chỉ ra rằng chuỗi đó có đối xứng hay không?

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s, s1="";
    cout<<"Nhap xau: ";
    getline(cin,s);
    for (int i=s.size()-1; i>=0; i--)
        s1=s1+s[i];
    if (s1==s)
        cout << "La xau doi xung";
    else
        cout << "ko la xau doi xung";
    return 0;
}