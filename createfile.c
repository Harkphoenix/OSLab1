#include <stdio.h>
#include <string.h>
#define max_size 200000
char temp[max_size]={0};
int main()
{
        int i = 0;
       // int j = 0;
        FILE *fp1, *fp2;
        if((fp1 = fopen("4kb.txt", "rb")) == NULL)
        {
                printf("can not open this file");
        }
        else
                fread(temp,max_size,1,fp1);
        if((fp2 = fopen("256kb.txt", "wb")) == NULL)
        {
                printf("can not open file");
        }
        else
                for(i=0; i < 40; i++)
                        fputs(temp, fp2);
        fclose(fp1);
        fclose(fp2);
        return 0;
}
