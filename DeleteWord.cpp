#include<stdio.h>
#include<conio.h>
#include<string.h>
void chuanHoa(char a[])
{
	int l = strlen(a);
	while (a[0] == ' ')
	{
		strcpy_s(&a[0], l, &a[1]);
		l--;
	}
	for (int i = 0; i < l; i++)
	{
		if (a[i] == ' ' && a[i + 1] == ' ')
		{
			strcpy_s(&a[i], l, &a[i + 1]);
			l--;
			i--;
		}
	}
	while (a[l - 1] == ' ')
	{
		strcpy_s(&a[l - 2], l, &a[l - 1]);
		l--;
	}
}
void xoaKiTu(char a[], int& n, int pos) {
    for (int i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    a[n - 1] = '\0';
    n--;
}

void xoaChuoi(char a[], int& n, char b[]) {
    for (int i = 0;strlen(a) >= strlen(b) && i <= strlen(a) - strlen(b); i++) {
        if (a[i] == b[0]) {
            bool flag = true;
            for (int j = 1; j < strlen(b); j++) {
                if (a[i + j] != b[j]) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                for (int h = 0; h < strlen(b); h++)
				{
                    xoaKiTu(a, n, i);
                }
                i--;
            }
        }
    }
}
void main()
{
    char a[100];
    char b[50];
	printf("Nhap chuoi: ");
	fflush(stdin);
	fgets(a, sizeof(a), stdin);
	chuanHoa(a);
	if (a[strlen(a) - 1] == '\n')
		a[strlen(a) - 1] = '\0';
	int l = strlen(a);
	printf("Nhap tu muon tim kiem va xoa: ");
	fflush(stdin);
	fgets(b, sizeof(b), stdin);
	chuanHoa(a);
	if (b[strlen(b) - 1] == '\n')
		b[strlen(b) - 1] = '\0';
	xoaChuoi(a,l, b);
	printf("%s", a);
	_getch();
}