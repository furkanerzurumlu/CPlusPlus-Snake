#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int hak=3;
//:Yýlan Oyunu
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
	
	//:Yemin rastgele yerleþmisi
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
	//:Diziyi (tahtayý) yazdýran döngü
	for( i = 0; i < 12; i++ ) {	
		for( j = 0; j < 12; j++ ) {
		printf("%c", tahta[i][j]);
		tahta[yemsatir][yemsutun]='*'; //:Yemi yerleþtiren dizi
		tahta[satir][sutun]='X'; //:Yýlaný yerleþtiren dizi
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

	//:Yýlaný hareket ettirmeye ve oyunu bitirmeyi saðlayan 
	char yon;
	scanf("%c",&yon);
	switch(yon){
		//:Yýlanýn yukarý hareketi
		case 'w':
		satir--;
		break;
		case 'W':
		satir--;
		break;
		//:Yýlanýn aþaðýya hareketi
		case 's':
		satir++;
		break;
		case 'S':
		satir++;
		break;
		//:Yýlanýn sola hareketi
		case 'a':
		sutun--;
		break;
		case 'A':
		sutun--;
		break;
		//:Yýlanýn saða hareketi
		case 'd':
		sutun++;
		break;
		case 'D':
		sutun++;
		break;
		//:Q'ya basarak oyunu sonlandýrma
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
