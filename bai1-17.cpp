//Viết chương trình nhập vào 1 xâu ký tự x và 1 ký tự y. Đếm xem trong xâu x có bao nhiêu ký tự y, đưa kết quả đếm ra màn hình

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0;
    cout<<"Nhap xau: ";
    getline(cin,s);
    for(int i=0;i<=s.size();i++){
        if(s[i]=='y')
         count++;
    }
    cout<<"Co: "<<count<<" chu y trong xau.";
}
