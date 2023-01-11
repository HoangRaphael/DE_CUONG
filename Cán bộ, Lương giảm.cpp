/*Viết chương trình:
- Khai báo 1 biến cấu trúc Canbo gồm: mcb, hoten, luong.
- Nhập một danh sách các cán bộ
- In danh sách cán bộ ra màn hình
- Sắp xếp danh sách giảm dần theo lương. In danh sách sau khi đã sắp xếp màn hình.
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    struct canbo{
        string hoten;
        int mcb, luong;
    };
    
    int n;
    cout << "Nhap so can bo: ";
    cin >> n;
    canbo cb[n];
    for (int i = 0; i < n; i++){
        cout <<i+1<<", Nhap Ho va Ten CB: ";
        cin.ignore(1);
        getline(cin, cb[i].hoten);
        fflush(stdin);
        cout << "   Nhap ma CB: ";
        cin >> cb[i].mcb;
        cout << "   Nhap Luong: ";
        cin >> cb[i].luong;
        cout<<"   -----------------"<<endl;
    } cout<<endl;
    for (int h = 0; h < n; h++) {
        for (int k = h + 1; k < n; k++) {
            if (cb[k].luong > cb[h].luong) {
                int temp = cb[k].luong;
                string tempn = cb[k].hoten;
                int tempm = cb[k].mcb;

                cb[k].luong = cb[h].luong;
                cb[k].hoten = cb[h].hoten;
                cb[k].mcb = cb[h].mcb;

                cb[h].luong = temp;
                cb[h].hoten = tempn;
                cb[h].mcb = tempm;
            }
        }
    }
    cout<<endl;
    cout<<"Sap xep theo luong giam dan: "<<endl;
    for (int j = 0; j < n;j++){
        cout << j+1<< ", Ho Va Ten : " << cb[j].hoten <<endl<<"   Ma CB: "<<cb[j].mcb<<endl<<"   * Luong: "<<cb[j].luong;
        cout<<endl<<"------------"<<endl;
    } 
}