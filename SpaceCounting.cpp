#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 50
int demKT(char a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == ' ')
			dem++;
	}
	return dem;
}
void main()
{
	char a[MAX];
	printf("Nhap chuoi: ");
	fgets(a,sizeof(a),stdin);
	printf("Chuoi co %d khoang trang",demKT(a, strlen(a)));
	_getch();
}