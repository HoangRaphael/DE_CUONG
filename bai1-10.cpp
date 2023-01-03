//Nhập vào một số, in ra thứ tương ứng với số đó. Qui ước 2 là thứ hai, …, 8 là chủ nhật, các số khác là không hợp lệ.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap N: "; cin >> n;
 if(n<=1||n>8) cout<<"Mot tuan chi co 7 ngay tu Thu 2 den CN";
   else switch (n)
    {
        case 2:{
            cout << "Thu Hai";
            break;
        }
        case 3:{
            cout << "Thu Ba";
            break;
        }
        case 4:{
            cout << "Thu Tu";
            break;
        }
        case 5:{
            cout << "Thu Nam";
            break;
        }
        case 6:{
            cout << "Thu Sau";
            break;
        }
        case 7:{
            cout << "Thu Bay";
            break;
        }
        case 8:
        {
            cout << "Chu Nhat";
            break;
        }
    }
}