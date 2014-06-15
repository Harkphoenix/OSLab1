#include <stdio.h>
#define max_size 200000
char temp[max_size]={0};
int main()
{	
	int i = 0;
	FILE *fp1, *fp2;
	if((fp1 = fopen("256kb.txt", "r")) == NULL)
	{
		printf("can not open this file");
	}
	else
		fgets(temp,max_size,fp1);
	if((fp2 = fopen("64MB.txt", "w+")) == NULL)
	{
		printf("can not open file");
	}
	else
		for(i=0; i < 266 * 64; i++)
			fputs(temp,fp2);
	fclose(fp1);
	fclose(fp2);
	return 0;
}
