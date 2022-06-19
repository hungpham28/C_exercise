#include<iostream>
using namespace std;

// Bài toán: Nh?p danh sách liên ket don các s? nguyên. Tìm giá tr? l?n nh?t trong danh sách

// ============== KHAI BÁO C?U TRÚC DANH SÁCH LIÊN K?T ÐON CÁC S? NGUYÊN ==============
// khai báo c?u trúc 1 cái node
struct node
{
	int data; // d? li?u ch?a trong 1 cái node 
	struct node *pNext; // con tr? dùng d? liên k?t gi?a các cái node v?i nhau
};
typedef struct node NODE; // thay th? struct node thành NODE

// khai báo c?u trúc c?a danh sách liên k?t don
struct list
{
	NODE *pHead; // node qu?n lí d?u danh sách
	NODE *pTail; // node qu?n lí cu?i danh sách
};
typedef struct list LIST; // thay th? struct list thành LIST

// ============== KH?I T?O C?U TRÚC DANH SÁCH LIÊN K?T ÐON CÁC S? NGUYÊN ==============
void KhoiTao(LIST &l)
{
	// cho 2 node tr? d?n NULL - vì danh sách liên k?t don chua có ph?n t?
	l.pHead = NULL;
	l.pTail = NULL;
}

// hàm kh?i t?o 1 cái node
NODE *KhoiTaoNODE(int x)
{
	NODE *p = new NODE; // c?p phát vùng nh? cho NODE p
	if (p == NULL)
	{
		cout << "\nKhong du bo nho de cap phat !";
		return NULL;
	}
	p->data = x; // truy?n giá tr? x vào cho data
	p->pNext = NULL; // d?u tiên khai báo node thì node dó chua có liên k?t d?n node nào h?t ==> con tr? c?a nó s? tr? d?n NULL
	return p; // tr? v? NODE p v?a kh?i t?o
}

// hàm thêm node p vào d?u danh sách liên k?t
void ThemVaoDau(LIST &l, NODE *p)
{
	/// danh sách dang r?ng
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p; // node d?u cung chính là node cu?i và là p
	}
	else
	{
		p->pNext = l.pHead; // cho con tr? c?a node c?n thêm là node p liên k?t d?n node d?u - pHead
		l.pHead = p; // c?p nh?t l?i pHead chính là node p
	}
}

// hàm thêm node p vào cu?i danh sách liên k?t
void ThemVaoCuoi(LIST &l, NODE *p)
{
	/// danh sách dang r?ng
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p; // node d?u cung chính là node cu?i và là p
	}
	else
	{
		l.pTail->pNext = p; // cho con tr? c?a pTail liên k?t v?i node p
		l.pTail = p; // c?p nh?t l?i p là node pTail
	}
}

// hàm xu?t danh sách liên k?t don
void XuatDanhSach(LIST l)
{
	// for(int i = 0; i < n; i++)
	for (NODE *k = l.pHead; k != NULL; k = k->pNext)
	{
		cout << k->data << " ";
	}
}

// hàm tìm giá tr? l?n nh?t trong danh sách
int TimMax(LIST l)
{
	int max = l.pHead->data; // gi? s? node d?u là node l?n nh?t
	// b?t d?u duy?t t? node th? 2 d? ki?m tra
	for (NODE *k = l.pHead->pNext; k != NULL; k = k ->pNext)
	{
		if (max < k->data)
		{
			max = k->data; // c?p nh?t l?i giá tr? max
		}
	}
	return max;
}

int main()
{
	LIST l;
	KhoiTao(l); // kh?i t?o danh sách liên k?t don


	int n;
	cout << "\nNhap so luong node can them: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cout << "\nNhap gia tri so nguyen: ";
		cin >> x;
		NODE *p = KhoiTaoNODE(x); // kh?i t?o 1 cái node s? nguyên
		ThemVaoCuoi(l, p); // thêm node p vào d?u danh sách liên k?t don 
	}
	cout << "\n\n\t DANH SACH LIEN KET DON\n";
	XuatDanhSach(l);

	cout << "\n\n\t GIA TRI LON NHAT: " << TimMax(l);
	system("pause");
	return 0;
}
