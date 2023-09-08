/* 	Alexandre Pereira de Souza Junior    227067             I1A
	Danilo Magalhães                     2                  I1A
*/


#include <stdio.h>
#include <conio.c>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <string.h>

struct contato{
	char Nome[50];
	char Num[50];
}V[100];

int main() {
	setlocale(LC_ALL, "ptb");
	char y[50];
	int a=5, b=0, c, d, h, i, o, p, j, k;

	for( i=0; i<101; i++){
		i:
			
				system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);
	
	textbackground(7);
	textcolor(5);
	gotoxy(45, 3);
	printf("AGENDA");
	gotoxy(35, 5);
	printf("1- CRIAR CONTATO");
	gotoxy(55,20);
	printf("%d contatos", i);
	gotoxy(35,7);
	printf("2- BUSCAR CONTATO");
	gotoxy(35,9);
	printf("3- FECHAR");
	gotoxy(35, 11);
	printf("4- LISTA");
	
	a=getche();
	
	if(a==49){
		if(i==100){
			
			system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(7);
	gotoxy(45,23);
	printf("        	");
	gotoxy(35,7);
	printf("LISTA DE CONTATOS LOTADA");
			
		}
		system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(7);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);
		gotoxy(49, 3);
		printf("\"Rt\" para retornar");
		gotoxy(45,4);
		printf("NOVO CONTATO");
		gotoxy(35, 6);
  		printf("NOME: ");
  		scanf("%s", V[i].Nome);
  		for(o=0; o<100; o++){
  			if(strcmp(V[i].Nome, V[o].Nome)==0&&o!=i){
  				system("cls");
  				gotoxy(65, 5);
  				textcolor(15);
				textbackground(12);
  				printf("NOME JÁ EXISTENTE");
  				Sleep(2000);
			   goto i;}
		  }
  		if(V[i].Nome[0]=='R'&&V[i].Nome[1]=='t') goto i;
		gotoxy(35, 8);
		printf("Número: ");
		scanf("%s", V[i].Num);
		for(o=0; o<100; o++){
  			if(strcmp(V[i].Num, V[o].Num)==0&&o!=i){
  				system("cls");
  				gotoxy(65, 5);
  				textcolor(15);
				textbackground(12);
  				printf("NÚMERO JÁ EXISTENTE");
  				Sleep(2000);
			   goto i;}
		  }
  		if(V[i].Num[0]=='R'&&V[i].Num[1]=='t') goto i;
		system("cls");
		
		
		system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);
		
		
		gotoxy(45, 7);
		textcolor(2);
		printf("Salvo");
		Sleep(3000);
	}else
	if(a==50){
		system("cls");
		
		system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);
		

		gotoxy(35, 5);
		printf("1 - BUSCAR POR NOME");
		gotoxy(35, 7);
		printf("2 - BUSCAR POR NÚMERO");
		d=getch();
		if(d==49){	
		
			gotoxy(35, 9);
			printf("NOME:");
			gotoxy(40, 9);
			textbackground(7);
			scanf("%s", y);
		}
		if(d==50){
		gotoxy(35, 9);
			printf("NÚMERO:");
			gotoxy(42, 9);
			textbackground(7);
			scanf("%s", y);
			}
		if(d==49){
			for(o=0; o<i; o++){
				if(strcmp(V[o].Nome,y)==0){
					
					system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(7);
	gotoxy(45,23);
	printf("        	");
					
					gotoxy(45, 3);
					printf("Achado");
					gotoxy(35,5);
					printf("1 - Editar");
					gotoxy(35,7);
					printf("2 - Ligar");
					gotoxy(35, 9);
					printf("3 - Excluir");
					gotoxy(35, 11);
					printf("4 - Inspecionar");
					b = getch();
					
					if(b==49){
						system("cls");
						system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);
						gotoxy(35, 5);
						printf("1- MUDAR NOME");
						gotoxy(35, 7);
						printf("2- MUDAR NÚMERO");
						c=getch();

						if(c==49){
							gotoxy(35,9);
							printf("Novo nome: ");
							gotoxy(35, 10);
							scanf("%s", V[o].Nome);
							goto i;
						}else{
							gotoxy(35, 9);
							printf("Novo número: ");
							gotoxy(35, 10);
							scanf("%s", V[o].Num);
							goto i;}
						
					}else if(b==50){
						system("cls");
					int t=0, e;
	for(e=0; e<5; e++){
	for(t=0; t<3; t++){
	system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);


	textbackground(10);
	gotoxy(35, 8);
	printf("    ");
	gotoxy(35, 9);
	printf("    ");
	gotoxy(35, 10);
	printf("  ");
	gotoxy(35, 11);
	printf("  ");
	gotoxy(35, 12);
	printf("    ");
	gotoxy(35, 13);
	printf("    ");
	gotoxy(35, 15);
	textbackground(7);
	printf("Chamando");
	if(t==0) printf(".\n");
	else if(t==1) printf("..\n");
	else printf("...\n");
	Sleep(500);}}
	system("cls");
	
	system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);
	
	gotoxy(35, 7);
	printf("Chamada recusada");
	Sleep(2000);
						
					}else if(b==51){
						system("cls");
						for(p=o; p<i; p++){
							strcpy(V[p].Nome, V[p+1].Nome);
							strcpy(V[p].Num, V[p+1].Num);
						}
						i--;
						goto i;
					}else if(b==52){
					system("cls");
					system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);
					
					
					gotoxy(35,3);
					printf("CONTATO");
					gotoxy(35, 5);
					textbackground(7);
					textbackground(3);
				   	printf("  _________  ");
					gotoxy(35,6);  printf("  |       |  ");
					textbackground(7);
					gotoxy(35,13); printf("NOME: %s", V[o].Nome);
					textbackground(3);
					gotoxy(35,7);  printf("  |       |  ");
					textbackground(7);
					gotoxy(35,15); printf("NÚMERO: %s", V[o].Num);
					textbackground(3);
					gotoxy(35,8);  printf("  |       |  ");
					gotoxy(35,9);  printf("  |__   __|  ");
					gotoxy(35,10); printf(" ___|   |___ ");
					gotoxy(35, 11);printf(" |         | ");
					textbackground(7);
					getch();
					goto i;
					}
					
					
					
				}else if(o==i-1){
					system("cls");
					system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);
	gotoxy(35, 5);
					printf("Não registrado");
					Sleep(3000);
					goto i;
				}
			}
		}if(d==50){
for(o=0; o<i; o++){
				if(strcmp(V[o].Num,y)==0){

					system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(7);
	gotoxy(45,23);
	printf("        	");

					gotoxy(45, 3);
					printf("Achado");
					gotoxy(35,5);
					printf("1 - Editar");
					gotoxy(35,7);
					printf("2 - Ligar");
					gotoxy(35, 9);
					printf("3 - Excluir");
					gotoxy(35, 11);
					printf("4 - Inspecionar");
					b = getch();

					if(b==49){
						system("cls");
						system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);
						gotoxy(35, 5);
						printf("1- MUDAR NOME");
						gotoxy(35, 7);
						printf("2- MUDAR NÚMERO");
						c=getch();

						if(c==49){
							gotoxy(35,9);
							printf("Novo nome: ");
							gotoxy(35, 10);
							scanf("%s", V[o].Nome);
							goto i;
						}else{
							gotoxy(35, 9);
							printf("Novo número: ");
							gotoxy(35, 10);
							scanf("%s", V[o].Num);
							goto i;}

					}else if(b==50){
						system("cls");
					int t=0, e;

	system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);


	textbackground(10);
	gotoxy(35, 8);
	printf("    ");
	gotoxy(35, 9);
	printf("    ");
	gotoxy(35, 10);
	printf("  ");
	gotoxy(35, 11);
	printf("  ");
	gotoxy(35, 12);
	printf("    ");
	gotoxy(35, 13);
	printf("    ");
	gotoxy(35, 15);
	textbackground(7);
	printf("Chamando");
		for(e=0; e<5; e++){
	for(t=0; t<3; t++){
	if(t==0){
		gotoxy(43,15);
	 printf(".       ");
	 gotoxy(1,1);
}
	else if(t==1){
		gotoxy(43,15);
	 printf("..    ");
	 gotoxy(1,1);}
	 
	else if(t==2){
		gotoxy(43,15);
	 printf("...  ");
	 gotoxy(1,1);
	 }
	 Sleep(500);
	 }
	 }
	
	system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);

	gotoxy(35, 7);
	printf("Chamada recusada");
	Sleep(2000);

					}else if(b==51){
						system("cls");
						for(p=o; p<i; p++){
							strcpy(V[p].Nome, V[p+1].Nome);
							strcpy(V[p].Num, V[p+1].Num);
						}
						i--;
						goto i;
					}else if(b==52){
					system("cls");
					system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);


					gotoxy(35,3);
					printf("CONTATO");
					gotoxy(35, 5);
					textbackground(7);
					textbackground(3);
				   	printf("  _________  ");
					gotoxy(35,6);  printf("  |       |  ");
					textbackground(7);
					gotoxy(35,13); printf("NOME: %s", V[o].Nome);
					textbackground(3);
					gotoxy(35,7);  printf("  |       |  ");
					textbackground(7);
					gotoxy(35,15); printf("NÚMERO: %s", V[o].Num);
					textbackground(3);
					gotoxy(35,8);  printf("  |       |  ");
					gotoxy(35,9);  printf("  |__   __|  ");
					gotoxy(35,10); printf(" ___|   |___ ");
					gotoxy(35, 11);printf(" |         | ");
					textbackground(7);
					getch();
					goto i;
					}



				}else if(o==i-1){
					
					system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);
gotoxy(45, 3);
					printf("Não registrado");
					Sleep(3000);
					goto i;
				}
			}
		}else goto i;
	}else
	if(a==51){
		system("cls");

	gotoxy(45,15);

	textbackground(0);
	textcolor(15);

		printf("[ A S ]");
		gotoxy(45, 16);
		printf("ISSO É TUDO POR HOJE PEPE...PESSOAL\n");
		textcolor(13);
		getch();
		return 0;
	}else if(a==52){
		int nenezinhodapaulinha;
		for(nenezinhodapaulinha=0; nenezinhodapaulinha<i; nenezinhodapaulinha+=4){
			system("cls");
	textbackground(5);
	for(k=1; k<26; k++){
	for( j=1; j<40; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
 	textbackground(7);
	for(k=3; k<22; k++){
	for(j=4; j<37; j++){
	gotoxy(j+30,k);
	printf(" ");
	}
	}
	textbackground(13);
	gotoxy(45,23);
	printf("        	");
	gotoxy(45,3);

	textbackground(7);
	textcolor(5);
			gotoxy(35, 5);
			printf("NOME: %s", V[nenezinhodapaulinha].Nome);
			gotoxy(35, 6);
			printf("NÚMERO: %s", V[nenezinhodapaulinha].Num);
			if(i-nenezinhodapaulinha-1>0){
			gotoxy(35, 8);
			printf("NOME: %s", V[nenezinhodapaulinha+1].Nome);
			gotoxy(35, 9);
			printf("NÚMERO: %s", V[nenezinhodapaulinha+1].Num);}
			
			if(i-nenezinhodapaulinha-2>0){
			gotoxy(35, 11);
			printf("NOME: %s", V[nenezinhodapaulinha+2].Nome);
			gotoxy(35, 12);
			printf("NÚMERO: %s", V[nenezinhodapaulinha+2].Num);}
			if(i-nenezinhodapaulinha-3>0){
			gotoxy(35, 14);
			printf("NOME: %s", V[nenezinhodapaulinha+3].Nome);
			gotoxy(35, 15);
			printf("NÚMERO: %s", V[nenezinhodapaulinha+3].Num);}
			getch();
			
		}
		goto i;
		
		
	}else  goto i;
}}

