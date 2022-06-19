#include<bits/stdc++.h>
void bt1()
{
	int a,b;
	float f;
	printf("nhap so a: ");
	scanf("%d",&a);
	printf("nhap so b: ");
	scanf("%d",&b);
	if (a+b>0) {
		f=pow(a+b,1.0/3)+log(a+b)/log(5);
		printf("f=%lf",f);
	}
	else printf("Khong hop le");
}
void bt2()
{
	double delta,a,b,c,x1,x2,x;
	printf("nhap 2 so a va b va c\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if (a ==0) printf("Khong phai phuong trinh bac 2");
	else
	{ 
	if (delta >0)
	{
		x1=(-b+sqrt(delta))/(2*a);
		
		x2=(-b-sqrt(delta))/(2*a);
		
		printf("nghiem cua pt la %lf va %lf\n",x1,x2);
	}
	else if (delta <0) printf("phuong trinh vo nghiem");
		else
		{	
			x=-b/(2*a);
			printf("phuong trinh co nghiem kep la %lf",x);}
	}	
}

int main()
{
	char operation;
	go_here:
	printf("Chon bai tap muon giai , nhap la so 1 hay 2 : ");
	scanf("%c",&operation);
	fflush(stdin);
	switch (operation)
	{
		case '1':
			{bt1();break;}
		case '2':
			{bt2();break;}
		default: 
		{
			printf("khong hop le? Ban muon tiep tuc hay muon thoat?\nneu thoat nhan 0 nguoc lai nhan 1 de tiep tuc: ");
			char excep;
			scanf("%c",&excep);
			fflush(stdin);
			if (excep=='1') goto go_here;
			else printf("Da thoat!");
		}
	}
}
