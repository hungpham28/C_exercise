#include<iostream>
using namespace std;

// B�i to�n: Nh?p danh s�ch li�n ket don c�c s? nguy�n. T�m gi� tr? l?n nh?t trong danh s�ch

// ============== KHAI B�O C?U TR�C DANH S�CH LI�N K?T �ON C�C S? NGUY�N ==============
// khai b�o c?u tr�c 1 c�i node
struct node
{
	int data; // d? li?u ch?a trong 1 c�i node 
	struct node *pNext; // con tr? d�ng d? li�n k?t gi?a c�c c�i node v?i nhau
};
typedef struct node NODE; // thay th? struct node th�nh NODE

// khai b�o c?u tr�c c?a danh s�ch li�n k?t don
struct list
{
	NODE *pHead; // node qu?n l� d?u danh s�ch
	NODE *pTail; // node qu?n l� cu?i danh s�ch
};
typedef struct list LIST; // thay th? struct list th�nh LIST

// ============== KH?I T?O C?U TR�C DANH S�CH LI�N K?T �ON C�C S? NGUY�N ==============
void KhoiTao(LIST &l)
{
	// cho 2 node tr? d?n NULL - v� danh s�ch li�n k?t don chua c� ph?n t?
	l.pHead = NULL;
	l.pTail = NULL;
}

// h�m kh?i t?o 1 c�i node
NODE *KhoiTaoNODE(int x)
{
	NODE *p = new NODE; // c?p ph�t v�ng nh? cho NODE p
	if (p == NULL)
	{
		cout << "\nKhong du bo nho de cap phat !";
		return NULL;
	}
	p->data = x; // truy?n gi� tr? x v�o cho data
	p->pNext = NULL; // d?u ti�n khai b�o node th� node d� chua c� li�n k?t d?n node n�o h?t ==> con tr? c?a n� s? tr? d?n NULL
	return p; // tr? v? NODE p v?a kh?i t?o
}

// h�m th�m node p v�o d?u danh s�ch li�n k?t
void ThemVaoDau(LIST &l, NODE *p)
{
	/// danh s�ch dang r?ng
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p; // node d?u cung ch�nh l� node cu?i v� l� p
	}
	else
	{
		p->pNext = l.pHead; // cho con tr? c?a node c?n th�m l� node p li�n k?t d?n node d?u - pHead
		l.pHead = p; // c?p nh?t l?i pHead ch�nh l� node p
	}
}

// h�m th�m node p v�o cu?i danh s�ch li�n k?t
void ThemVaoCuoi(LIST &l, NODE *p)
{
	/// danh s�ch dang r?ng
	if (l.pHead == NULL)
	{
		l.pHead = l.pTail = p; // node d?u cung ch�nh l� node cu?i v� l� p
	}
	else
	{
		l.pTail->pNext = p; // cho con tr? c?a pTail li�n k?t v?i node p
		l.pTail = p; // c?p nh?t l?i p l� node pTail
	}
}

// h�m xu?t danh s�ch li�n k?t don
void XuatDanhSach(LIST l)
{
	// for(int i = 0; i < n; i++)
	for (NODE *k = l.pHead; k != NULL; k = k->pNext)
	{
		cout << k->data << " ";
	}
}

// h�m t�m gi� tr? l?n nh?t trong danh s�ch
int TimMax(LIST l)
{
	int max = l.pHead->data; // gi? s? node d?u l� node l?n nh?t
	// b?t d?u duy?t t? node th? 2 d? ki?m tra
	for (NODE *k = l.pHead->pNext; k != NULL; k = k ->pNext)
	{
		if (max < k->data)
		{
			max = k->data; // c?p nh?t l?i gi� tr? max
		}
	}
	return max;
}

int main()
{
	LIST l;
	KhoiTao(l); // kh?i t?o danh s�ch li�n k?t don


	int n;
	cout << "\nNhap so luong node can them: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int x;
		cout << "\nNhap gia tri so nguyen: ";
		cin >> x;
		NODE *p = KhoiTaoNODE(x); // kh?i t?o 1 c�i node s? nguy�n
		ThemVaoCuoi(l, p); // th�m node p v�o d?u danh s�ch li�n k?t don 
	}
	cout << "\n\n\t DANH SACH LIEN KET DON\n";
	XuatDanhSach(l);

	cout << "\n\n\t GIA TRI LON NHAT: " << TimMax(l);
	system("pause");
	return 0;
}
