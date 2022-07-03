#include <stdio.h>

int main() {
	printf("give two integer, one operator: ");
	int a, b;
	char op;
	scanf("%d%d%c", &a, &b, &op);
	switch (op) {
	case '+':
		printf("%d\n", a + b);
		break;
	case '-':
		printf("%d\n", a - b);
		break;
	}
}
/*
#include <stdio.h>
int add(char* cmdptr){
	char cmd[20][50];
	for(int i = 0; i < 20; i++)
		for(int j = 0; j < 50; j++)
			cmd[i][j] = *(cmdptr + (i*50) + j)
		}
	printf("%s", cmd);
}
int main(){
	char cmd[20][50];
	//getting cmd
	int i = 0, j = 0;
	while(1){
		scanf("%c", &cmd[i][j]);
		if(cmd[i][j] == ' ') {i++;j=0;}
		else if(cmd[i][j] == '\n'){break;}
		else j++;
	}
	//calling functions
	if(!(cmd[0][0])){
		//add
		if(cmd[0] = "add"){add(&cmd[0][0])}
	}
}
*/
