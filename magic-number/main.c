#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
	srand(time(NULL));
	int random_number = rand() % 100 + 1;
	int reponse;
	while(reponse != random_number){
		printf("Choisissez un nombre entre 1 et 100 :\n");
		scanf("%d", &reponse);
		if(reponse < random_number && reponse >= 1){
			printf("C'est plus !\n");
		}
		else if(reponse > random_number && reponse <= 100){
			printf("C'est moins !\n");
		}
		else if(reponse > 100 || reponse < 1){
			printf("La réponse est entre 1 et 100 !\n");
		}
		else{
			printf("C'est gagné !\n");
		}
	}
	return(0);
}
