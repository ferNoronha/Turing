#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>

struct TpTuring
{
	char quezinho,le,escreve,dir,ondevai;	
};




void teste(TpTuring t[50], int tl)
{
	int resultado = 0;
	int pos=0;
	int i=0;
	char entrada[100];
	printf("Digite a entrada: ");
	fflush(stdin);
	gets(entrada);
	char letrinha;
	while(t[pos].le !='F')
	{
		letrinha = entrada[i];
		if(letrinha == 'a')
			
	}
}

int main(void)
{
	TpTuring turing[50];
	int tl=0;
	
	FILE *arq = fopen("maquinaum.txt","r+");
	fscanf(arq,"%c;%c;%c;%c;%c;\n",&turing[tl].quezinho,&turing[tl].le,&turing[tl].escreve,&turing[tl].dir,&turing[tl].ondevai);
	tl++;
	while(!feof(arq))
	{
		fscanf(arq,"%c;%c;%c;%c;%c;\n",&turing[tl].quezinho,&turing[tl].le,&turing[tl].escreve,&turing[tl].dir,&turing[tl].ondevai);
		tl++;
	}
	
	fclose(arq);
	
	teste(turing[],tl);
	for(int i=0;i<tl;i++)	
	{
		printf("%c %c %c %c %c\n",turing[i].quezinho,turing[i].le,turing[i].escreve,turing[i].dir,turing[i].ondevai);
	}
	
	
	getch();
	return 0;
}


