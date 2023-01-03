/*Viết chương trình nhập vào điểm 3 môn Toán, Lý, Hóa của một học sinh. 
In ra điểm tổng và điểm trung bình cộng của học sinh đó với hai số lẻ thập phân.*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    float toan,ly,hoa;
    cout<<"Nhap diem Toan: ";cin>>toan;
    cout<<"Nhap diem Ly: ";cin>>ly;
    cout<<"Nhap diem Hoa: ";cin>>hoa;
    
    float tong=toan+ly+hoa;
    float tb=tong/3;

    cout<<"Tong diem 3 mon: "<<round(tong*100)/100<<endl;
    cout<<"Trung binh cong: "<<round(tb*100)/100;
    return 0;

}