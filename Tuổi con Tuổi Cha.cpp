/*Nhập vào tuổi cha và tuổi con hiện nay sao cho tuổi cha lớn hơn 2 lần tuổi con. 
Tìm xem bao nhiêu năm nữa tuổi cha sẽ bằng đúng 2 lần tuổi con
 (ví dụ 30 và 12, sau 6 năm nữa tuổi cha là 36 gấp đôi tuổi con là 18).*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int cha, con, nam=0;
    cout<<"Nhap tuoi Cha: ";cin>>cha;
    cout<<"Nhap tuoi Con: ";cin>>con;
    if(cha<con){
    cout<<"Vui long nhap tuoi Cha lon hon Con it nhat 2 lan";
    return 0;}
    else
    while (con*2!=cha)
    {
        nam++;
        cha++;
        con++;
    }
    cout << "Sau: "<<nam<<" nam thi tuoi Cha gap 2 lan tuoi Con";
    return 1;
}