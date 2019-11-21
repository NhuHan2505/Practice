// pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
typedef int *IntPtrType;

int main()
{
	//ptr_a, ptr_b là con trỏ
	//ptr_c là biến 
	IntPtrType ptr_a, ptr_b, *ptr_c;
	
	ptr_a = new int; //ptr_a là con trỏ kiểu int
	*ptr_a = 3; //3 là giá trị của con trỏ ptr_a
	ptr_b = ptr_a; //gán giá trị của ptr_a cho ptr_b (tức là 3)
	//in ra giá trị của con trỏ ptr_a và ptr_b là 3
	cout << *ptr_a << " " << *ptr_b << "\n";
	
	ptr_b = new int;// ptr_b là con trỏ kiểu int
	*ptr_b = 9; //gán giá trị tại địa chỉ ptr_b là 9
	//in ra giá trị của con trỏ ptr_a là 3 và giá trị của con trỏ ptr_b vừa gán là 9
	cout << *ptr_a << " " << *ptr_b << "\n";
	
	*ptr_b = *ptr_a; //gắn giá trị của con trỏ ptr_b bằng giá trị của con trỏ ptr_a
	//in ra giá trị của con trỏ ptr_a và ptr_b là 3
	//giá trị của con trỏ ptr_b thay đổi là 3 vì địa chỉ mà con trỏ ptr_b thay đổi
	cout << *ptr_a << " " << *ptr_b << "\n";
	
	delete ptr_a;
	ptr_a = ptr_b; //gán giá trị của biến ptr_b cho biến ptr_a mà giá trị của ptr_b là 3
	//in ra giá trị của ptr_a và ptr_b là 3
	cout << *ptr_a << " " << *ptr_b << "\n";
	
	//&ptr_a là địa chỉ của biến ptr_a
	ptr_c = &ptr_a; //gán giá trị địa chỉ của ptr_a cho ptr_C
	cout << *ptr_c << " " << **ptr_c << "\n";
	//*ptr_c là địa chỉ của biến ptr_a
	//**ptr_c là giá trị của biến con trỏ ptr_c trỏ tới
	
	delete ptr_a; //giải phóng con trỏ ptr_a đã cấp phát ở trên 
	//sau khi dùng hàm delete thì con trỏ vẫn giữ giá trị là địa chỉ mà nó new
	ptr_a = NULL;
	system("pause");
    return 0;
}

