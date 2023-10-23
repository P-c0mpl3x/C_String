#include<stdio.h>
#include<conio.h>
#include<string.h>
void chuanHoa(char a[])
{
    int l = strlen(a);
    while (a[0] == ' ') 
    {
        for (int i = 0; i < l; i++) 
	{
            a[i] = a[i + 1];
        }
        l--;
    }
    for (int i = 0; i < l - 1; i++)
    {
        if (a[i] == ' ' && a[i + 1] == ' ')
	{
            for (int j = i; j < l; j++)
	    {
                a[j] = a[j + 1];
            }
            l--;
            i--;
        }
    }
    while (a[l - 1] == ' ')
    {
        a[l - 1] = '\0';
        l--;
    }
    if (a[0] >= 'a' && a[0] <= 'z')
    {
        a[0] = a[0] - 32;
    }
    for (int i = 1; i < l; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
	{
            a[i] = a[i] + 32;
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
	printf("Chuoi sua khi chuan hoa: %s", str);
	_getch();
}
