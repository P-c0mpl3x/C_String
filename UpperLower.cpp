#include<stdio.h>
#include<conio.h>
#include<string.h>
void chuanHoa(char z[])
{
	int l = strlen(z);
	while (z[0] == ' ')
	{
		strcpy_s(&z[0],l,&z[1]);
			l--;
	}
	for (int i = 0; i < l; i++)
	{
		if (z[i] == ' ' && z[i + 1] == ' ')
		{
			strcpy_s(&z[i], l, &z[i+1]);
			i--;
			l--;
		}
	}
	while (z[l - 1] == ' ')
	{
		strcpy_s(&z[l - 2], l, &z[l - 1]);
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
void main()
{
	char str[666];
	fflush(stdin);
	printf("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	chuanHoa(str);
	LowerUpper(str);
	printf("Chuoi ket qua la: %s", str);
		_getch();
}