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
void catTen(char a[])
{
	for (int i = strlen(a) - 1; i >= 0; i--)
	{
		if (a[i] == ' ')
		{
			a[i] = '\n';
			break;
		}
	}
}
void main()
{
	char str[666];
	fflush(stdin);
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	chuanHoa(str);
	catTen(str);
	printf("Chuoi sau khi cat ten: \n%s", str);
	_getch();
}