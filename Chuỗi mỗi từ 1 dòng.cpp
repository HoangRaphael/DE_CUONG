/*Viết chương trình thực hiện:
a. Nhập vào từ bàn phím một chuỗi.
b. In chuỗi đã được nhập theo các từ, mỗi từ một dòng.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
char n[500];
cout<<"Nhap chuoi ky tu: ";
cin.getline(n,500);
for(int i=0;i<strlen(n);i++){
     cout<<n[i];
     if(n[i]==' ')
     cout<<endl;
   }
 }