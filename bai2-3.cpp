/*Viết chương trình tính:
S=1!+2!+3!+...n!; Với n là số nguyên được nhập từ bàn phím. Đưa kết quả S ra màn hình.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
float n, s=0, p=1;
cout<<"Nhap N: "; cin>>n;
for(int i=1;i<=n;i++){
    p=p*i;
    s=s+p;
}
cout<<"Gia tri: "<<s;
}
