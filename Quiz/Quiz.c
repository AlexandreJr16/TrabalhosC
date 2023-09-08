#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <locale.h>
int main() {
    char resp='i' ,inicio;
    char nome[40];
    int certo_1=0, errado_1=0;
    int seg=30, flag=1;
    
    int c=0;
	char lua1[50]="", lua2[50]="";
    
    system("color 05");
    
    printf("\n\n\t\t\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
    printf("\n\t\t\t\t\xBA  QUIZ DE FILOSOFIA  \xBA");
	 printf("\n\t\t\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
	 
	 
	 getch();
	 system("cls");
	
	printf("\t================================================================================================================\n");
    printf("\t\t                     		            Seja bem-vindo     	            	          	 	                      \n", nome);
    printf("\t===============================================================================================================\n");
    printf("\t  Quiz feito por: 			                            	           	                                     \n");
    printf("\t  Alexandre Pereira				                            	                                             \n", 131);
    printf("\t  I1A						                                        	            	                         \n");
    printf("\t===============================================================================================================\n\n");
    getch();
    system("cls");

    printf("\t==========================================================================================================\n");
    printf("\t\t\t\t       Ola Jogador  \n\n\n");
    printf("\t\tNome do aluno : ");
    gets(nome);
    printf("\t==========================================================================================================\n");

    system("cls");
   
    printf("\t==========================================================================================================\n");
    printf("\t                                      Seja bem-vindo, %s                          	                      \n", nome);
    printf("\t==========================================================================================================\n");
    printf("\t  1: QUIZ DE FILOSOFIA		                                       	                                     \n");
    printf("\t  2- QUIZ SOBRE Plat%co			                                                                         \n", 131);
    printf("\t  3- DIVIRTA-SE			                                                    	                         \n");
    printf("\t==========================================================================================================\n\n");
    fflush(stdin);
	Sleep(5000);
	
	strcpy(lua1, "\xdb");
	while(c<=100){
		printf("\n");
		printf("Loading...\n");
		system("cls");
	printf("%s", lua2);
	strcat(lua2, lua1);
	printf("%d%%", c);
	if(c==100){
		system("color 0A");
		getch();
		c++;
	}
	if(c==99){
		Sleep(1000);
	}
	
system("cls");
	if(c!=99){
		c+=3;}else c++;
	}
   
    system("cls");
 
                

			while(flag<=1){
				system("color 07");
				  printf("\t================================\n");
				printf("\t Acertos: %d\tErros: %d\n", certo_1, errado_1);
                printf("\t================================\n");
                printf("\t Pergunta de N.1 --- FILOSOFIA   \n");
                printf("\t===========================================================================================================\n\n");
                printf("\t Indique qual alternativa que indica melhor os pensamentos de Plat%co:\n\n\n", 131);
                printf("A) As ideias são as verdadeiras causas e princípios de identificaçãco dos seres, o mundo inteliível é onde se obtêm os conhecimentos verdadeiros\n\n");
                printf("B) Quando traçarmos um círculo imperfeito, isto demonstra que as ideias do mundo inteligível não são perfeitas, tal qul omuno sensível \n\n");
                printf("C) Todo conhecimento verdadeiro começa pela percepção pois somente pelos sentidos podemos conhecer as coisas tais quais são. \n\n");
                printf("D) A ALegoria da caverna demonstra, claramente que o cerdadeiro conhecimento não derica do mundo inteligível, mas do mundo sensível.\n\n");
                printf("\t=============================================================================================================\n\n");
                printf("\t QUAL E A ALTERNATIVA CORRETA: \t\t");
                printf("%d seg\n\n", seg);
                seg--;
            
                fflush(stdin);
                if(kbhit()!=(NULL)){
                	resp=getch();
				}
                 if ((resp=='A')||(resp=='a'))
               {
               	system("cls");
               	system("color 09");
                for(flag=1; flag<=100; flag++){
				printf ("Resposta correta\t");
				if(flag%10==0){
					printf("\n");
				}}
				Sleep(2000);
                certo_1++;
                flag++;
               }
                else if(resp!='i')
               {
               	system("cls");
               	system("color 04");
               	for(flag=1; flag<=100; flag++){
                printf ("Resposta errada\t");
                if(flag%10==0){
					printf("\n");
				}
				}
                flag++;
                errado_1++;
                
               }if(seg==0){
               	for(flag=1; flag<=100; flag++){
                	printf("Tempo esgotado\n");
                	if(flag%10==0){
					printf("\n");
				}
                	}flag++;
				}
			   Sleep(1000);
			   system("cls");}
               seg=30; flag=1; resp= 'i'; 
              
               while(flag<=1){
               	system("color 07");
               	printf("\t================================\n");
				printf("\t Acertos: %d\tErros: %d\n", certo_1, errado_1);
               printf("\t==================================================\n");
               printf("\t            Pergunta de N. 2 --- FILOSOFIA          \n");
               printf("\t===================================================================\n\n");
               printf("\t Pontos de visão deduzidos por Platão na alegoria da caverna:\n\n\n");
               printf("\tA) Dogmático e materialita\n");
               printf("\tB) Epistemologico e político\n");
               printf("\tC) Relativista e democrático\n");
               printf("\tD) Individualista e teorizante\n");
               printf("\tE) Epistemolofico e relativista.\n\n");
               printf("\t===================================================================\n\n");
               printf("\t QUAL E A ALTERNATIVA CORRETA?\t\t");
               printf("%d seg\n\n", seg);
                seg--;
               fflush(stdin);
                if(kbhit()!=(NULL)){
                	fflush(stdin);
                	resp=getch();
				}
                 if ((resp=='B')||(resp=='b'))
               {
               	system("cls");
               	system("color 09");
                for(flag=1; flag<=100; flag++){
				printf ("Resposta correta\t");
				if(flag%10==0){
					printf("\n");
				}}
				Sleep(2000);
                certo_1++;
                flag++;
               }
                else if(resp!='i')
               {
               	system("cls");
               	system("color 04");
               	for(flag=1; flag<=100; flag++){
                printf ("Resposta errada\t");
                if(flag%10==0){
					printf("\n");
				}
				}
                flag++;
                errado_1++;
                
               }if(seg==0){
               	for(flag=1; flag<=100; flag++){
                	printf("Tempo esgotado\n");
                	if(flag%10==0){
					printf("\n");
				}
                	}flag++;
				}
			   Sleep(1000);
			   system("cls");}
               seg=30; flag=1; resp= 'i'; 
               while(flag<=1){
               					system("color 07");

               	printf("\t================================\n");
				printf("\t Acertos: %d\tErros: %d\n", certo_1, errado_1);
               printf("\t==================================================\n");
               printf("\t            Pergunta de N. 3   --- FILOSOFIA      \n");
               printf("\t============================================================================\n\n");
               printf("\tSobre a alegoria da caverna, de Platão é correto afirmar:\n\n\n");
               printf("\tA) É uma obra religiosa;\n");
               printf("\tB) Na alegoria o filósofo é aprisionado e passa a viver solitário em uma caverna.\n");
               printf("\tC) Se trata de um texto que apresena dimensõs pedagógicas, filosóficas e políticas.\n");
               printf("\tD) O texto enfatiza a importancia dos sofistas \n");
               printf("\tE) o texto pressupõe a identificação do conhecueto filosófico com o senso comun.\n\n");
               printf("\t============================================================================\n\n");
               printf("\t QUAL E A ALTERNATIVA CORRETA?\t\t");
               printf("%d seg\n\n", seg);
                seg--;
               
                fflush(stdin);
                if(kbhit()!=(NULL)){
                	fflush(stdin);
                	resp=getch();
				}
                 if ((resp=='C')||(resp=='c'))
               {
               	system("cls");
               	system("color 09");
                for(flag=1; flag<=100; flag++){
				printf ("Resposta correta\t");
				if(flag%10==0){
					printf("\n");
				}}
				Sleep(2000);
                certo_1++;
                flag++;
               }
                else if(resp!='i')
               {
               	system("cls");
               	system("color 04");
               	for(flag=1; flag<=100; flag++){
                printf ("Resposta errada\t");
                if(flag%10==0){
					printf("\n");
				}
				}
                flag++;
                errado_1++;
                
               }if(seg==0){
               	for(flag=1; flag<=100; flag++){
                	printf("Tempo esgotado\n");
                	if(flag%10==0){
					printf("\n");
				}
                	}flag++;
				}
			   Sleep(1000);
			   system("cls");}
               seg=30; flag=1; resp= 'i'; 
            
               while(flag<=1){
               					system("color 07");

               	printf("\t================================\n");
				printf("\t Acertos: %d\tErros: %d\n", certo_1, errado_1);
               printf("\t==================================================\n");
               printf("\t            Pergunta de N. 4 --- filosofia      \n");
               printf("\t============================================================\n\n");
               printf("\tConhecer é recordar. O filófo que defendeu essa tese chama-se:\n\n\n");
               printf("\tA) Karl Marx\n");
               printf("\tB) Augusto Comte\n");
               printf("\tC) Aristóteles\n");
               printf("\tD) Platão\n");
               printf("\tE) Sócrates\n\n");
               printf("\t===========================================================\n\n");
               printf("\t QUAL E A ALTERNATIVA CORRETA?\t\t");
               printf("%d seg\n\n", seg);
                seg--;
               fflush(stdin);
                if(kbhit()!=(NULL)){
                	fflush(stdin);
                	resp=getch();
				}
                 if ((resp=='D')||(resp=='d'))
               {
               	system("cls");
               	system("color 09");
                for(flag=1; flag<=100; flag++){
				printf ("Resposta correta\t");
				if(flag%10==0){
					printf("\n");
				}}
				Sleep(2000);
                certo_1++;
                flag++;
               }
                else if(resp!='i')
               {
               	system("cls");
               	system("color 04");
               	for(flag=1; flag<=100; flag++){
                printf ("Resposta errada\t");
                if(flag%10==0){
					printf("\n");
				}
				}
                flag++;
                errado_1++;
                
               }if(seg==0){
               	for(flag=1; flag<=100; flag++){
                	printf("Tempo esgotado\n");
                	if(flag%10==0){
					printf("\n");
				}
                	}flag++;
				}
			   Sleep(1000);
			   system("cls");}
               seg=30; flag=1; resp= 'i'; 
               while(flag<=1){				system("color 07");

               	printf("\t================================\n");
				printf("\t Acertos: %d\tErros: %d\n", certo_1, errado_1);
               printf("\t==================================================\n");
               printf("\t            Pergunta de N. 5 --- FILOSOFIA      \n");
               printf("\t=======================================================================================\n\n");
               printf("\t A opinião no pensamento de Platão represnta um saber sem fundamentação metódica. É um saber que possui sua origem:\n\n\n");
               printf("\tA) Nos mitos religiosos, lendas e poemas;\n");
               printf("\tB) No coração daqueles que creem.\n");
               printf("\tC) Num saber eclético, proveniente do pensamento de alguns filófos.\n");
               printf("\tD)  Nas imprevissões e nas sensações das coisas sensíveis.\n");
               printf("\tE) No discurso dos sofistas na época da democracia ateniense.\n\n");
               printf("\t=======================================================================================\n\n");
               printf("\t QUAL E A ALTERNATIVA CORRETA?\n");
               printf("%d seg\n\n", seg);
                seg--;
               fflush(stdin);
                if(kbhit()!=(NULL)){
                	fflush(stdin);
                	resp=getch();
				}
                 if ((resp=='D')||(resp=='d'))
               {
               	system("cls");
               	system("color 09");
                for(flag=1; flag<=100; flag++){
				printf ("Resposta correta\t");
				if(flag%10==0){
					printf("\n");
				}}
				Sleep(2000);
                certo_1++;
                flag++;
               }
                else if(resp!='i')
               {
               	system("cls");
               	system("color 04");
               	for(flag=1; flag<=100; flag++){
                printf ("Resposta errada\n");
                if(flag%10==0){
					printf("\n");
				}
				}
                flag++;
                errado_1++;
                
               }if(seg==0){
               	for(flag=1; flag<=100; flag++){
                	printf("Tempo esgotado\n");
                	if(flag%10==0){
					printf("\n");
				}
                	}flag++;
				}
			   Sleep(1000);
			   system("cls");}
               seg=30; flag=1; resp= 'i'; 
              
               while(flag<=1){
               					system("color 07");

               	printf("\t================================\n");
				printf("\t Acertos: %d\tErros: %d\n", certo_1, errado_1);
               printf("\t==================================================\n");
               printf("\t            Pergunta de N. 6 --- Filosofia      \n");
               printf("\t================================================================================\n\n");
               printf("\t Qual das alternativas melhor interpetra os concepções de Platão:\n\n\n");
               printf("\tA) as concepções pltônicaas negam veementemente a validade do Inatismo\n\n");
               printf("\tB) Segundo Platão a verdade é obtida a partir da observação das coisas, por meioda valorização do conhecimento sensível.\n\n");
               printf("\tC) A filosofia platônica é marcada pelo materialismo e pragmatismo, afastando-se do misticismo e de conceitos transcedentais.\n\n");
               printf("\tD)  Para Platão, a realidade maerial e o conhecimento sensível são ilusórios.\n\n");
               printf("\tE) A dicotomia aristotélica(mundo sensível X mundo inteligível) se opõwa radicalente as concepções de caráter empírico defendidas por Platão.\n\n");
               printf("\t================================================================================\n\n");

			   printf("\t QUAL E A ALTERNATIVA CORRETA?\n");
               printf("%d seg\n\n", seg);
                seg--;
                fflush(stdin);
                if(kbhit()!=(NULL)){
                	fflush(stdin);
                	resp=getch();
				}
                 if ((resp=='D')||(resp=='d'))
               {
               	system("cls");
               	system("color 09");
                for(flag=1; flag<=100; flag++){
				printf ("Resposta correta\t");
				if(flag%10==0){
					printf("\n");
				}}
				Sleep(2000);
                certo_1++;
                flag++;
               }
                else if(resp!='i')
               {
               	system("cls");
               	system("color 04");
               	for(flag=1; flag<=100; flag++){
                printf ("Resposta errada\t");
                if(flag%10==0){
					printf("\n");
				}
				}
                flag++;
                errado_1++;
                
               }if(seg==0){
               	for(flag=1; flag<=100; flag++){
                	printf("Tempo esgotado\n");
                	if(flag%10==0){
					printf("\n");
				}
                	}flag++;
				}
			   Sleep(1000);
			   system("cls");}
               seg=30; flag=1; resp= 'i'; 
               
               while(flag<=1){
               					system("color 07");

               	printf("\t================================\n");
				printf("\t Acertos: %d\tErros: %d\n", certo_1, errado_1);
               printf("\t==================================================\n");
               printf("\t            Pergunta de N. 7  --- FILOSOFIA      \n");
               printf("\t==================================================\n\n");
               printf("\t A epistemologia platônic tem com objetico: \n\n\n");
               printf("\t======================================================================\n\n");
               printf("\tA) estabelecer semelhanças ente o que é observado em momentos distintos\n");
               printf("\tB) identificar outro ecemplar idêntico ao observado\n");
               printf("\tC) fazer correspondência entre o objetico observado e seu ser\n");
               printf("\tD) descrever corretamente as características do objeto observado\n");
               printf("\tE)  Compara o objeto observado com uma descrição detalhada dele.\n\n");
               printf("\t=======================================================================\n\n");
               printf("\t QUAL E A ALTERNATIVA CORRETA?\t\t");
               printf("%d seg\n\n", seg);
                seg--;
               fflush(stdin);
                if(kbhit()!=(NULL)){
                	fflush(stdin);
                	resp=getch();
				}
                 if ((resp=='C')||(resp=='c'))
               {
               	system("cls");
               	system("color 09");
                for(flag=1; flag<=100; flag++){
				printf ("Resposta correta\t");
				if(flag%10==0){
					printf("\n");
				}}
				Sleep(2000);
                certo_1++;
                flag++;
               }
                else if(resp!='i')
               {
               	system("cls");
               	system("color 04");
               	for(flag=1; flag<=100; flag++){
                printf ("Resposta errada\t");
                if(flag%10==0){
					printf("\n");
				}
				}
                flag++;
                errado_1++;
                
               }if(seg==0){
               	for(flag=1; flag<=100; flag++){
                	printf("Tempo esgotado\n");
                	if(flag%10==0){
					printf("\n");
				}
                	}flag++;
				}
			   Sleep(1000);
			   system("cls");}
               seg=30; flag=1; resp= 'i'; 
               return 0;
           }

