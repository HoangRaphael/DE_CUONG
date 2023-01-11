//Viết chương trình nhập 3 số nguyên từ bàn phím và đưa ra màn hình tổng và trung bình cộng của 3 số đó.

#include <bits/stdc++.h>
using namespace std;
int main(){
    float a,b,c;
    cout<<"Nhap A: ";cin>>a;
    cout<<"Nhap B: ";cin>>b;
    cout<<"Nhap C: ";cin>>c;
    cout<<"Tong: "<<a+b+c<<endl<<"Trung binh cong: "<<(a+b+c)/3<<endl;
    return 0;
}