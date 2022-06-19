#include <stdio.h>

#include <conio.h>
void DOI(int x, int &y, int *z)
{ printf("\n Con truoc: %d %d %d", x, y, *z);
x=x+1; y=y+2; *z=*z+3;
printf("\n Con sau : %d %d %d", x, y, *z);
}
main()
{ int i=10, j=20, k=30;
printf("\n Chinh truoc: %d %d %d", i, j, k);
DOI(i, j, &k);
printf("\n Chinh sau : %d %d %d", i, j, k);
getch();
}
