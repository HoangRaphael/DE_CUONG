/*Viết chương trình quản lý danh sách sinh viên (gồm msv, hoten, namsinh) dùng mảng cấu trúc. Chương trình có khả năng:
a. Nhập một danh sách n sinh viên.
b. In danh sách sinh viên ra màn hình;*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    struct hocsinh{
        string hoten;
        int masv, namsinh;
    };
    
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;
    hocsinh hs[n];
    for (int i = 0; i < n; i++){
        cout <<i+1<<", Nhap Ho va Ten SV: ";
        cin.ignore(1);
        getline(cin, hs[i].hoten);
        fflush(stdin);
        cout << "   Nhap ma sv: ";
        cin >> hs[i].masv;
        cout << "   Nhap nam sinh: ";
        cin >> hs[i].namsinh;
        cout<<"   -----------------"<<endl;
    } cout<<endl;
    for (int j = 0; j < n;j++)
    {
        cout << j+1<< ", Ho Va Ten : " << hs[j].hoten <<endl<<"   Ma SV: "<<hs[j].masv<<endl<<"   Nam Sinh: "<<hs[j].namsinh;
        cout<<endl<<"------------"<<endl;
    } 
}