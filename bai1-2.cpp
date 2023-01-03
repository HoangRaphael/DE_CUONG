/*Viết chương trình nhập vào kích thước dài, rộng của hình chữ nhật, 
tính và in ra màn hình chu vi và diện tích của hình chữ nhật đó.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,b;
    cout<<"Nhap chieu dai: "; cin>>a;
    cout<<"Nhap chieu rong: "; cin>>b;
    float chuvi = (a+b)*2;
    float dientich = a*b;
    cout<<"Chu vi HCN: "<<chuvi<<endl;
    cout<<"Dien tich HCN: "<<dientich;
    return 0;
}