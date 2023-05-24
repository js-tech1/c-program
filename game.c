#include<stdio.h>
#include<windows.h>
#include<time.h>
void main()
{
	int score_bord = 0;
	int life_line = 3;
	int random_store;
	int user_num_input;
	int gamefunction;
	
	srand(time(0));
	
	printf("for game start enter 1: ");
	scanf("%d",&gamefunction);
	do
		{
			if(gamefunction == 1)
				{
					printf("your score is: %d\n",score_bord);
					printf("your total life : %d\n",life_line);
					random_store= rand() % 10;
//					printf("\n%d\n",random_store);
					printf("gess the number under 10 genrated by computer: ");
					scanf("%d",&user_num_input);
					
					if(random_store == user_num_input)
						{
							system("cls");
							printf("\n your gess is right\n");
							Sleep(1300);
							score_bord+=10;
							system("cls");
						}
					else
						{
							system("cls");
							printf("\n your gess is wrong\n");
							printf("\nright num is %d\n",random_store);
							Sleep(1300);
							life_line-=1;
							system("cls");
							
							if(life_line == 0)
							{
								score_bord=0;
								life_line=3;
								
								printf("for game restart enter 1: ");
								scanf("%d",&gamefunction);
							}
						} 
				}
				
			
		}while(gamefunction == 1);
		system("cls");
		printf("game over");
}
