#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int hak=3;
//:Y�lan Oyunu
int main(){
	if(hak==0){
		hak=3;
		return 0;
	}
	printf("Yilan Oyununa Hosgelidiniz(Hareket icin wasd tuslarini kullaniniz).\n");
	
	int i, j;
	int satir=1;
	int sutun=2;
	int oyundevam=1;
	int yilan;
	int yem;
	
	//:Yemin rastgele yerle�misi
	srand(time(NULL));
	int yemsatir=1+rand()%10;
	int yemsutun=1+rand()%10;

	
while(oyundevam=1){
	if(satir==yemsatir&&sutun==yemsutun){
	printf("Tebrikler Oyunu Kazandiniz.\n");
		}	
		
	char tahta[12][12]={
	{'-','-','-','-','-','-','-','-','-','-','-','-'},
	{'|','.','.','.','.','.','.','.','.','.','.','|'},
	{'|','.','.','.','.','.','.','.','.','.','.','|'},
	{'|','.','.','.','.','.','.','.','.','.','.','|'},
	{'|','.','.','.','.','.','.','.','.','.','.','|'},
	{'|','.','.','.','.','.','.','.','.','.','.','|'},
	{'|','.','.','.','.','.','.','.','.','.','.','|'},
	{'|','.','.','.','.','.','.','.','.','.','.','|'},
	{'|','.','.','.','.','.','.','.','.','.','.','|'},
	{'|','.','.','.','.','.','.','.','.','.','.','|'},
	{'|','.','.','.','.','.','.','.','.','.','.','|'},
	{'|','_','_','_','_','_','_','_','_','_','_','|'},
	};
	//:Diziyi (tahtay�) yazd�ran d�ng�
	for( i = 0; i < 12; i++ ) {	
		for( j = 0; j < 12; j++ ) {
		printf("%c", tahta[i][j]);
		tahta[yemsatir][yemsutun]='*'; //:Yemi yerle�tiren dizi
		tahta[satir][sutun]='X'; //:Y�lan� yerle�tiren dizi
		}	
		printf("\n");
	}
	if(satir==0){
		hak--;
		return main();
	}
	if(satir==11){
		hak--;
		return main();
	}
	if(sutun==0){
		hak--;
		return main();
	}
	if(sutun==11){
		hak--;
		return main();
	}

	//:Y�lan� hareket ettirmeye ve oyunu bitirmeyi sa�layan 
	char yon;
	scanf("%c",&yon);
	switch(yon){
		//:Y�lan�n yukar� hareketi
		case 'w':
		satir--;
		break;
		case 'W':
		satir--;
		break;
		//:Y�lan�n a�a��ya hareketi
		case 's':
		satir++;
		break;
		case 'S':
		satir++;
		break;
		//:Y�lan�n sola hareketi
		case 'a':
		sutun--;
		break;
		case 'A':
		sutun--;
		break;
		//:Y�lan�n sa�a hareketi
		case 'd':
		sutun++;
		break;
		case 'D':
		sutun++;
		break;
		//:Q'ya basarak oyunu sonland�rma
		case 'q':
		printf("Oyun Bitti !!!");
		return 0;
		break;
		case 'Q':
		printf("Oyun Bitti !!!");
		return 0;
		break;
	}
		system("cls");
	printf("Yilan Oyununa Hosgelidiniz(Hareket icin wasd tuslarini kullaniniz).\n");


}
		return 0;
	}
