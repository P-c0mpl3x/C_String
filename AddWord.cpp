#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX_SIZE 666
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
void chenChuoi(char a[], char b[], int n)
{

	if (strlen(a) + strlen(b) < MAX_SIZE)
	{
		if (n > strlen(a))
			n = strlen(a);
		else
			if(n < 0)
			n = 0;
		for (int i = strlen(a);i >= n;i--)
		{
			a[i + strlen(b)] = a[i];
		}
		for (int i = 0;i < strlen(b);i++)
		{
			a[i + n] = b[i];
		}
		printf("Chuoi sau khi chen la: %s", a);
	}
	else
		printf("Tran bo nho!!");
}
void main()
{
	char a[MAX_SIZE];
	char b[50];
	int n;
	printf("Nhap chuoi: ");
	fflush(stdin);
	fgets(a, sizeof(a), stdin);
	chuanHoa(a);
	if (a[strlen(a) - 1] == '\n')
		a[strlen(a) - 1] = '\0';
	printf("Nhap tu muon chen vao: ");
	fflush(stdin);
	fgets(b, sizeof(b), stdin);
	chuanHoa(b);
	if (b[strlen(b)-1] == '\n')
		b[strlen(b)-1] = '\0';
	printf("Nhap vi tri muon chen chuoi: ");
	scanf_s("%d", &n);
	chenChuoi(a, b,n);
	_getch();
}