//Nhập vào từ bàn phím 1 xâu ký tự. Đưa ra màn hình số ký tự(độ dài xâu ký tự) vừa nhập

#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int count=0;
    cout<<"Nhap xau: ";
    getline(cin,s);
    for(int i=1;i<=s.size();i++){
         count++;
    }
    cout<<"Xau co do dai "<<count<<" ky tu.";
}