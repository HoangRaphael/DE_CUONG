/*Viết chương trình:
- Khai báo 1 biến cấu trúc Sinhvien bao gồm: họ tên, điểm trung bình (ĐTB), xếp loại(XL)
- Nhập thông tin của 1 sinh viên bao với họ tên, ĐTB được nhập từ bàn phím
- Tính XL: nếu ĐTB>=9 thì xếp loại “Xuất sắc”, nếu 8<=ĐTB<9 thì xếp loại “Giỏi”, nếu 7<= ĐTB<8 thì xếp loại “Khá”, 
nếu 6<= ĐTB<7 thì xếp loại “Trung bình khá”,nếu 5<=ĐTB<6 xếp loại “Trung bình”, còn lại xếp loai yếu.
- In thông tin sinh viên vừa nhập ra màn hình*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string ten;
    float diem;
    string xeploai;
    cout<<"Nhap ten HS: ";
    getline(cin,ten);
    cout<<"Nhap diem: "; cin>>diem;
    cout<<endl;
    if(diem>=9){
        xeploai="Xuat sac";
    } else if(diem<=9&&diem>=8){
         xeploai="Gioi";
    } else if(diem<=8&&diem>=7){
         xeploai="Kha";
    } else if(diem<=7&&diem>=6){
         xeploai="TB Kha";
    } else if(diem<=6&&diem>=5){
         xeploai="Trung binh";
    } else {
         xeploai="Yeu";
    }
    cout<<"Ten: "<<ten<<endl;
    cout<<"Diem: "<<diem<<endl;
    cout<<"Xep loai: "<<xeploai;
}
