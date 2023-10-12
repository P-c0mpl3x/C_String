#include<stdio.h>
#include<conio.h>
#include<string.h>
void chuanHoa(char a[])
{
	int l = strlen(a);
	while (a[0] == ' ')
	{
		strcpy_s(&a[0],l, &a[1]);
		l--;
	}
	for (int i = 0; i < l; i++)
	{
		if (a[i] == ' ' && a[i + 1] == ' ')
		{
			strcpy_s(&a[i], l,&a[i + 1]);
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
void LowerUpper(char z[])
{
	for (int i = 0; i < strlen(z);i++)
	{
		if (z[i] >= 'A' && z[i] <= 'Z')
			z[i] = z[i] + 32;
	}
	for (int j = 0; j < strlen(z);j++)
	{
		if ((j == 0 || z[j - 1] == ' ') && (z[j] >= 'a' && z[j] <= 'z'))
			z[j] = z[j] - 32;
	}
}
bool kiemTraTen(char a[], char b[])
{
	if (strstr(a, b) != NULL)
		return true;
	return false;
}
void main()
{
	char hoten[50];
	char ten[20];
	printf("Nhap chuoi ho va ten: ");
	fflush(stdin);
	fgets(hoten, sizeof(hoten), stdin);
	chuanHoa(hoten);
	printf("Nhap ten: ");
	fflush(stdin);
	fgets(ten, sizeof(ten), stdin);
	chuanHoa(ten);
	LowerUpper(hoten);
	LowerUpper(ten);
	if (kiemTraTen(hoten, ten))
		printf("Ten da duoc nhap dung");
	else
		printf("Ten da nhap sai!");
	_getch();


}