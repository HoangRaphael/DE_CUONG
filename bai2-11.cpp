/*Viết chương trình thực hiện:
a. Nhập một chuỗi từ bàn phím
b. Đếm số lần xuất hiện ký tự chữ cái trong chuỗi đó.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0;
    cout<<"Nhap xau: ";
    getline(cin,s);
    for(int i=0;i<=s.size();i++){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
        count++;
    }
    cout<<"Trong xau co "<<count<<" lan xuat hien ky tu chu cai.";
}