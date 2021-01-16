#include<stdio.h>
#include <string.h>
int main() {
	int size;
	int row;
	int col;
	char quit[200];
	char letter[200];
	printf("Welcome to the letter printer.");
	while(true){
		printf("Enter the size: ");
		scanf("%d",&size);
		while(size>=5 and size%2==1){
			printf("Enter the letter: ");
			scanf("%s",&letter);
			if(strcmp(letter, "Y") == 0){
				for(row=0;row<size;row++){
					for(col=0;col<size;col++){
						if (row<=size/2&&(row==col||row+col==size-1)||(row>size/2&&col==size/2)) {
							printf("*");
						}
						else {
							printf(" ");
						}
					}
			printf("\n");
			}
			printf("Would you like to continue? (Y or N):");
			scanf("%s",&quit);
			if(strcmp(quit, "Y") == 0){
				break;
			}
			else if(strcmp(quit, "N") == 0){
				printf("Goodbye :)");
				return 0;
			}
			}
			if(strcmp(letter, "X") == 0){
				for(row=0;row<size;row++){
					for(col=0;col<size;col++){
						if (row==col || (col+row)==size-1){
							printf("*");
						}
						else {
							printf(" ");
						}
					}
			printf("\n");
			}
			printf("Would you like to continue? (Y or N):");
			scanf("%s",&quit);
			if(strcmp(quit, "Y") == 0){
				break;
			}
			else if(strcmp(quit, "N") == 0){
				printf("Goodbye :)");
				return 0;
			}
			}
			if(strcmp(letter, "W") == 0){
				for(row=0;row<size;row++){
					for(col=0;col<size*2;col++){
						if (((col+row)==size-1 or col==0 or col==2*size-1 or col-row==(2*size-2)/2)){
							printf("*");
						}
						else {
							printf(" ");
						}
					}
			printf("\n");
			}
			printf("Would you like to continue? (Y or N):");
			scanf("%s",&quit);
			if(strcmp(quit, "Y") == 0){
				break;
			}
			else if(strcmp(quit, "N") == 0){
				printf("Goodbye :)");
				return 0;
			}
			}
			if(strcmp(letter, "Z") == 0){
				for(row=0;row<size;row++){
					for(col=0;col<size;col++){
						if (row==0 || (col+row)==size-1 || row==size-1){
							printf("*");
						}
						else {
						printf(" ");
						}
					}
			printf("\n");
			}
			printf("Would you like to continue? (Y or N):");
			scanf("%s",&quit);
			if(strcmp(quit, "Y") == 0){
				break;
			}
			else if(strcmp(quit, "N") == 0){
				printf("Goodbye :)");
				return 0;	
			}
			}
			if(letter!="Z" or letter!= "X"){
				printf("Invalid letter.");
			}
		}
	if(size<5 or size%2==0){
	printf("Invalid size.");
	continue;
		}
	}
}
