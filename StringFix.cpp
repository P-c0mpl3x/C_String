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
			strcpy_s(&a[i],l, &a[i + 1]);
			i--;
			l--;
		}
	}
	while (a[l - 1] == ' ')
	{
		strcpy_s(&a[l - 1],l, &a[l - 2]);
		l--;
	}
}
void main()
{
	char str[666];
	fflush(stdin);
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	chuanHoa(str);
	printf("Chuoi sua khi chuan hoa: %s", str);
	_getch();
}