#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE* fptr1, * fptr2;
	char ch;
	fopen_s(&fptr1,"C://welcome.txt", "r");
	fopen_s(&fptr2,"C://output.txt", "w");
	if ((fptr1 != NULL) && (fptr2 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("�ɮ׫�������!!\n");
	}
	else
		printf("�ɮ׶}�ҥ���!!\n");
	system("pause");
	return 0;
}