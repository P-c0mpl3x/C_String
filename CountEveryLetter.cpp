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
void demKiTu(char a[])
{
	int dem[256] = { 0 };
	if (a == NULL)
		printf("Chuoi khong ton tai!");
	for (int i = 0; i < strlen(a);i++)
	{
		if (a[i] != ' ')
			dem[a[i]]++;
	}
	for (int i = 0; i <= 256;i++)
	{
		if (dem[i] > 0)
			printf("\nKi tu '%c' xuat hien %d lan", i, dem[i]);
	}
}
void main()
{
	char a[500];
	printf("Nhap chuoi: ");
	fflush(stdin);
	fgets(a, sizeof(a), stdin);
	chuanHoa(a);
	if (a[strlen(a) - 1] == '\n')
		a[strlen(a) - 1] = '\0';
	demKiTu(a);
	_getch();
}