#include<stdio.h>

void plus(int x,int y){
	printf("\n plus of %d + %d = %d\n\n",x,y,x+y);
}
void mainus(int x,int y){
	printf("\n mainus of %d - %d = %d\n\n",x,y,x-y);
}
void multiplication(int x,int y){
	printf("\n multiplication of %d * %d = %d\n\n",x,y,x*y);
}
void division(int x,int y){
	printf("\n division of %d / %d = %d\n\n",x,y,x/y);
}
void modulo(int x,int y){
	printf("\n modulo of %d %% %d = %d\n\n",x,y,x%y);
}



void main(){
	int a,b,choice;
	
	
		
	
		
	

	
	do{
		printf("Press 1 for + \n");
		printf("Press 2 for - \n");
		printf("Press 3 for * \n");
		printf("Press 4 for / \n");
		printf("Press 5 for %% \n");
		printf("Press 0 for the exit \n");
	
		printf("Enter the Choice for number : ");
		scanf("%d",&choice);	
			
		printf("Enter the number of A : ");
		scanf("%d",&a);
		printf("Enter the number of B : ");
		scanf("%d",&b);	
			
			switch(choice){
			
				case 1:
					plus(a,b);
					break;
			
				case 2:
					mainus(a,b);
					break;
			
				case 3:
					multiplication(a,b);
					break;
			
				case 4:
					division(a,b);
					break;
			
				case 5:
					modulo(a,b);
					break;
		
				case 0:
    	            printf("you are exited . . .");
        	        break;	
				
				default:
					printf("\npleae enter the valid number. . . \n\n");
					break;	
								
			}
		
	}while(choice != 0);
	
}
