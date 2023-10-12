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
			i--;
			l--;
		}
	}
	while (a[l - 1] == ' ')
	{
		strcpy_s(&a[l - 1], l, &a[l - 2]);
		l--;
	}
}
void timMaxXuatHien(char a[])
{
	int dem[256] = { 0 };
	int max = 1;
	for (int i = 0; i < strlen(a);i++)
	{
		if (a[i] != ' ')
			dem[a[i]]++;
		if (dem[a[i]] > max)
			max = dem[a[i]];
	}
	for (int i = 0; i <= 256; i++)
	{
		if(dem[i] == max)
		printf("Ki tu xuat hien nhieu nhat la %c va xuat hien %d lan", i, max);
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
	timMaxXuatHien(a);
	_getch();
}