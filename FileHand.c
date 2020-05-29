#include<stdio.h>
main()
{
	int i=0,pos;
	char ch;
	FILE *fp,*fq;
	fp=fopen("F1.txt","w");
	fprintf(fp,"File handling is not that easy to handle!");
	fclose(fp);
	
	fp=fopen("F1.txt","r");
	fseek(fp,0,SEEK_END);
	pos=ftell(fp);
	while(i<pos)
	{
		i++;
		fseek(fp,-i,SEEK_END);
		ch=getc(fp);
		printf("%c",ch);
	}
	fclose(fp);
	
	fp=fopen("F1.txt","r");
	fq=fopen("F2.txt","w");;
	while((ch=fgetc(fp))!=EOF)
	{
		fputc(ch,fq);
	}
	fclose(fp);
	fclose(fq);
}
