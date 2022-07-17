// #include <stdio.h>
// typedef struct{
// 	int m,s;
// }frac;
// void sum();
// void diff();
// void mult();
// void powr();
// int main() {
// 	printf(">>");
// 	char op;
// 	scanf("%c", &op);
// 	switch(op){
// 		case 's':
// 			sum();
// 			break;
// 		case 'D':
// 			diff();
// 			break;
// 		case 'T':
// 			mult();
// 			break;
// 		case 'P':
// 			powr();
// 			break;
// 		case 'E':
// 			printf("Bye\n");
// 			return 0;
// 			break;
		
// 	}
// 	main();
// 	return 0;
// }

// void sum(){
// 	frac a, b;
// 	char inp[50], buff = 'a';
// 	int i = 0;
// 	do{
// 		scanf("%c", buff);
// 		inp[i] = buff;
// 		i++;
// 	}while(buff != '\n');
	
// }

// /*
// #include <stdio.h>
// int add(char* cmdptr){
// 	char cmd[20][50];
// 	for(int i = 0; i < 20; i++)
// 		for(int j = 0; j < 50; j++)
// 			cmd[i][j] = *(cmdptr + (i*50) + j)
// 		}
// 	printf("%s", cmd);
// }
// int main(){
// 	char cmd[20][50];
// 	//getting cmd
// 	int i = 0, j = 0;
// 	while(1){
// 		scanf("%c", &cmd[i][j]);
// 		if(cmd[i][j] == ' ') {i++;j=0;}
// 		else if(cmd[i][j] == '\n'){break;}
// 		else j++;
// 	}
// 	//calling functions
// 	if(!(cmd[0][0])){
// 		//add
// 		if(cmd[0] = "add"){add(&cmd[0][0])}
// 	}
// }
// */
#include <stdio.h>
#include <stdlib.h>
#include "header.h"
int main(void){
	int a;
	system("clear");
	printf("program code >> ");
	scanf("%d", &a);
	switch(a){
		case 1:
		prime();
		break;
		default:
		main();
	}
}
