/*
Alexandre Pereira	227067
Danilo Magalhâes    227157
I1A
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include <conio.h>

struct CHIKUNGUNHA{
	char louca[80];
}Vaca[25], R[25],Vaco[25];

int main() {
 	system("color 75");
	strcpy(Vaca[0].louca, "26 letras no alfabeto");
	strcpy(Vaca[1].louca, "7 dias da semana");
	strcpy(Vaca[2].louca, "7 maravilhas do mundo");
	strcpy(Vaca[3].louca, "12 signos do zodiaco");
	strcpy(Vaca[4].louca, "66 livros da biblia");
	strcpy(Vaca[5].louca, "52 cartas num baralho");
	strcpy(Vaca[6].louca, "4 cores na bandeira brasileira");
	strcpy(Vaca[7].louca, "18 buracos num campo de golfe");
	strcpy(Vaca[8].louca, "39 livros no novo testamento");
	strcpy(Vaca[9].louca, "5 dedos em uma mao");
	strcpy(Vaca[10].louca, "90 graus num angulo reto");
	strcpy(Vaca[11].louca, "100 graus a agua ebule");
	strcpy(Vaca[12].louca, "5 jogadores em um time de basquete");
	strcpy(Vaca[13].louca, "3 rodas num triciclo");
	strcpy(Vaca[14].louca, "100 centavos em um real");
	strcpy(Vaca[15].louca, "11 jogadores em um time de futebol");
	strcpy(Vaca[16].louca, "12 meses no ano");
	strcpy(Vaca[17].louca, "4 rodas em um carro");
	strcpy(Vaca[18].louca, "29 dias em fevereiro em ano bissexto");
	strcpy(Vaca[19].louca, "27 livros no novo testamento");
	strcpy(Vaca[20].louca, "365 dias no ano");
	strcpy(Vaca[21].louca, "10 dedos em 2 maos");
	strcpy(Vaca[22].louca, "52 semanas em um ano");
	strcpy(Vaca[23].louca, "9 vidas tem um gato");
	strcpy(Vaca[24].louca, "60 minutos numa hora");
	strcpy(Vaca[25].louca, "64 casas num tabuleiro de xadrez");
	strcpy(Vaca[26].louca, "3 estados na regiao sul");
	strcpy(Vaca[27].louca, "1 bola branca em uma mesa de sinuca");
	strcpy(Vaca[28].louca, "1000 anos em um milenio");
	strcpy(Vaca[29].louca, "12 ovos em uma duzia");


	int i, c=3, w=0, j;

	setlocale(LC_ALL, "ptb");
	gotoxy(15, 1);
	printf("TESTE DE QI");
	gotoxy(1, 3);
	printf( "26 L no A");
	gotoxy(1, 5);
	printf("7 D da S");
	gotoxy(1, 7);
	printf("7 M do M");
	gotoxy(1, 9);
	printf("12 S do Z");
	gotoxy(1, 11);
	printf("66 L da B");
	gotoxy(1, 13);
	printf("52 C num B");
	gotoxy(1, 15);
	printf("4 C na B B");
	gotoxy(1, 17);
	printf("18 B num C de G");
	gotoxy(1, 19);
	printf("39 L no N T");
	gotoxy(1, 21);
	printf("5 D em uma M");
	for(i=0; i<10; i){
		for(j=0; j<50;j++){
			gotoxy(18+j, 0+c);
			textbackground(0);
			printf(" ");
		}
		gotoxy(18, 0+c);
		gets(Vaco[i].louca);

		if(strcmp(Vaco[i].louca,Vaca[i].louca)==0){
			for(j=0; j<50;j++){
				textbackground(GREEN);
			gotoxy(18+j, 0+c);
			printf(" ");
			if(j==49) printf(" CORRETO ");
		}
		textbackground(8);
		i++;
		c+=2;
		}else {
			for(j=0; j<	50;j++){
				textbackground(RED);
			gotoxy(18+j, 0+c);
			printf(" ");
			if(j==49)	printf(" ERRADO ");
}
		textbackground(8);
		}
textbackground(BLACK);
	}
	c=3;



	getch();
	system("cls");
	system("color 75");
gotoxy(15, 1);
	printf("TESTE DE QI");
	gotoxy(1, 3);
	printf("90 G num A R");
	gotoxy(1, 5);
	printf("100 G a Á E");
	gotoxy(1, 7);
	printf("5 J em um T de B");
	gotoxy(1, 9);
	printf("3 R num T");
	gotoxy(1, 11);
	printf("100 C em um R");
	gotoxy(1, 13);
	printf("11 J em um T de F");
	gotoxy(1, 15);
	printf("12 M no A");
	gotoxy(1, 17);
	printf("4 R em um C");
	gotoxy(1, 19);
	printf("29 D em F em A B");
	gotoxy(1, 21);
	printf("27 L no N T");


	for(i=10; i<20; i){
		for(j=0; j<50;j++){
			gotoxy(18+j, 0+c);
			textbackground(0);
			printf(" ");
		}

		gotoxy(18, 0+c);
		gets(Vaco[i].louca);

		if(strcmp(Vaco[i].louca,Vaca[i].louca)==0){
			for(j=0; j<50;j++){
				textbackground(GREEN);
			gotoxy(18+j, 0+c);
			printf(" ");
			if(j==49) printf(" CORRETO ");
		}

		textbackground(8);
		i++;
		c+=2;
		}else {
			for(j=0; j<	50;j++){
				textbackground(RED);
			gotoxy(18+j, 0+c);
			printf(" ");
			if(j==49)	printf(" ERRADO ");
		}


		textbackground(8);
		}
		textbackground(BLACK);

	}
	c=3;








	getch();
	system("cls");
	system ("color 75");
	gotoxy(15, 1);
	printf("TESTE DE QI");
	gotoxy(1, 3);
	printf("365 D no A");
	gotoxy(1, 5);
	printf("10 D em 2 M");
	gotoxy(1, 7);
	printf("52 S em um A");
	gotoxy(1, 9);
	printf("9 V tem um G");
	gotoxy(1, 11);
	printf("60 M numa H");
	gotoxy(1, 13);
	printf("64 C num T de X");
	gotoxy(1, 15);
	printf("3 E na R S");
	gotoxy(1, 17);
	printf("1 B B em uma M de S");
	gotoxy(1, 19);
	printf("1000 A em um M");
	gotoxy(1, 21);
	printf("12 O em uma D");
	gotoxy(1, 23);


	for(i=20; i<30; i){
		for(j=0; j<50;j++){
			gotoxy(20+j, 0+c);
			textbackground(0);
			printf(" ");
		}

		gotoxy(20, 0+c);
		gets(Vaco[i].louca);

		if(strcmp(Vaco[i].louca,Vaca[i].louca)==0){
			for(j=0; j<50;j++){
				textbackground(GREEN);
			gotoxy(20+j, 0+c);
			printf(" ");
			if(j==49) printf(" CORRETO ");
		}

		textbackground(8);
		i++;
		c+=2;
		}else {
			for(j=0; j<	50;j++){
				textbackground(RED);
			gotoxy(20+j, 0+c);
			printf(" ");
			if(j==49)	printf(" ERRADO ");
		}


		textbackground(0);
	}
	system("color 75");
	}
	c=3;
	getch();
	system("cls");
	return 0;


}


