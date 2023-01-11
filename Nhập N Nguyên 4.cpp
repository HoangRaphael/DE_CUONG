/*Viết chương trình nhập 1 số nguyên n, 1 số thực x. Lập trình tính:
S=x+2x+3x+4x+...+nx. Đưa kết quả S ra màn hình có 5 vị trí, 1 vị trí cho phần phân*/

#include <bits/stdc++.h>
using namespace std;
int main(){
   float n, s=0;
   float x;
   cout<<"Nhap N: "; cin>>n;
   cout<<"Nhap X: "; cin>>x;
   for(int i=1;i<=n;i++){
    s=s+i*x;
   }
   cout<<"Gia tri: "<<s;
return 0;
}