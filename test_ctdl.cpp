#include <stdio.h>
#include <conio.h>
#include <string.h>
main()
{ struct SVIEN
{ char ht[15];
float cc;
int ns, t;
};
SVIEN *p;
p=new SVIEN;

printf("\n Nhap ho ten:"); fflush(stdin); gets((*p).ht);
printf("\n Nhap chieu cao:"); scanf("%f", &(*p).cc);
printf("\n Nhap nam sinh:"); scanf("%d", &(*p).ns);
(*p).t=2012-(*p).ns;
printf("\n Ban %s , cao %7.2f m , %7d tuoi", (*p).ht, (*p).cc,
(*p).t);
delete p;
getch();
}
