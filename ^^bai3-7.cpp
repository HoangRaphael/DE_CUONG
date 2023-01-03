/*Viết chương trình nhập vào một dãy các số thực theo thứ tự tăng, nếu nhập sai quy cách thì yêu cầu nhập lại. In dãy số sau khi đã nhập xong.
Ví dụ: Ta nhập A[1]=2,A[2]=4,A[3]=1 thì máy yêu cầu nhập lại vì A[3] phải lớn hơn A[2]*/

#include <bits/stdc++.h>
using namespace std;

bool find_index(int a[], int num_elements, int value){
	int i;
	for(int i = 0; i < num_elements; i++)
	{
		if(a[i] == value)
		{
			return true;
		}
	}
	return false;
}

void nhap(int a[], int &n)
{
	cout << "Nhap N:  ";
	cin >> n;
	int temp;
	for(int i=0;i<n;i++){
		cout<<"Nhap A["<<i<<"]: ";
		cin >> temp;
		if(find_index(a, i, temp) == true)
		{
			cout << "Gia tri bi trung vui long nhap lai"<<endl;
			i--;
		}
		else
		{
			a[i] = temp;
		}
	}

}

int main()
{
	int a[100];
	int n;
	nhap(a, n);
	return 0;
}