/*Viết chương trình nhập một chuỗi ký tự từ bàn phím, xuất ra màn hình 
mã Ascii của từng ký tự có trong chuỗi.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
char n[500];
cout<<"Nhap chuoi ky tu: ";
cin.getline(n,500);
for(int i=0;i<strlen(n);i++){
     cout<<n[i]<<" : "<<int(n[i])<<endl;
   }
 }