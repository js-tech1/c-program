#include<stdio.h>
void main()
{
	char a[5][5][100];
	int ask,op;
	char b[5][20]={"student name:-","ID:-","ROLL no:-","phone no:-","pin code:-"};
	int i,j;
	
    	for(i=0;i<5;i++)  
	     {
	     	for(j=0;j<5;j++) 
	     	{   
	     		printf("\n%s",b[j]);
	     		scanf("%s",&a[i][j]);
	        }
				printf("\n");
         }
		printf("\n\n\nlist of all user\n\n");
		   
    	printf("\n1. %s\n2. %s\n3. %s\n4. %s\n5. %s",a[0][0],a[1][0],a[2][0],a[3][0],a[4][0]);
    	
    	printf("\n\nwhat data you want to see :-");
    	scanf("%d",&ask);
    	
    	switch(ask)
    	{
    		case 1:
    			for(i=0;i<1;i++)  
			     	{
				     	for(j=0;j<5;j++) 
				     	{   
				     		printf("\n%s",b[j]);
				     		printf("%s",a[i][j]);
				        }
						printf("\n");
         			}
         			
					printf("\n\nwhat data you want to change:-");
    				scanf("%d",&op);
					switch(op)
						{
							case 1:
								printf("enter new name:-");
								scanf("%s",&a[0][0]);
								
								system("cls");
							break;
							
							case 2:
								printf("\n\nenter new id:-");
    							scanf("%s",&a[0][1]);
    							system("cls");
							break;
							
							case 3:
								printf("\n\nenter new roll.no:-");
    							scanf("%s",&a[0][2]);
    							system("cls");
    						break;
    						
    						case 4:
								printf("\n\nenter new phone.no:-");
    							scanf("%s",&a[0][3]);
    							system("cls");
    						break;
    						
    						case 5:
								printf("\n\nenter new pincode:-");
    							scanf("%s",&a[0][4]);
    							system("cls");
    						break;
    					
    						default:
    							printf("invalid option");
						}
         			for(i=0;i<1;i++)  
			     	{
				     	for(j=0;j<5;j++) 
				     	{   
				     		printf("\n%15s",b[j]);
				     		printf("%5s",a[i][j]);
				        }
						printf("\n");
         			}
         			
         		break;
         	case 2:
    			for(i=1;i<2;i++)  
			     	{
				     	for(j=0;j<5;j++) 
				     	{   
				     		printf("\n%s",b[j]);
				     		printf("%s",a[i][j]);
				        }
						printf("\n");
         			}
         			
         		printf("\n\nwhat data you want to change:-");
    				scanf("%d",&op);
					switch(op)
						{
							case 1:
								printf("enter new name:-");
								scanf("%s",&a[1][0]);
								
								system("cls");
							break;
							
							case 2:
								printf("\n\nenter new id:-");
    							scanf("%s",&a[1][1]);
    							system("cls");
							break;
							
							case 3:
								printf("\n\nenter new roll.no:-");
    							scanf("%s",&a[1][2]);
    							system("cls");
    						break;
    						
    						case 4:
								printf("\n\nenter new phone.no:-");
    							scanf("%s",&a[1][3]);
    							system("cls");
    						break;
    						
    						case 5:
								printf("\n\nenter new pincode:-");
    							scanf("%s",&a[1][4]);
    							system("cls");
    						break;
    					
    						default:
    							printf("invalid option");
						}
					for(i=1;i<2;i++)  
			     	{
				     	for(j=0;j<5;j++) 
				     	{   
				     		printf("\n%s",b[j]);
				     		printf("%s",a[i][j]);
				        }
						printf("\n");
         			}
         		break;
         	case 3:
    			for(i=2;i<3;i++)  
			     	{
				     	for(j=0;j<5;j++) 
				     	{   
				     		printf("\n%15s",b[j]);
				     		printf(" %10s",a[i][j]);
				        }
						printf("\n");
						
					}
							printf("\n\nwhat data you want to change:-");
    						scanf("%d",&op);
					switch(op)
					
						{
								case 1:
								printf("enter new name:-");
								scanf("%s",&a[2][0]);
								
								system("cls");
							break;
							
							case 2:
								printf("\n\nenter new id:-");
    							scanf("%s",&a[2][1]);
    							system("cls");
							break;
							
							case 3:
								printf("\n\nenter new roll.no:-");
    							scanf("%s",&a[2][2]);
    							system("cls");
    						break;
    						
    						case 4:
								printf("\n\nenter new phone.no:-");
    							scanf("%s",&a[2][3]);
    							system("cls");
    						break;
    						
    						case 5:
								printf("\n\nenter new pincode:-");
    							scanf("%s",&a[2][4]);
    							system("cls");
    						break;
    					
    						default:
    							printf("invalid option");	
         			}     
         			   for(i=2;i<3;i++)  
			     	{
				     	for(j=0;j<5;j++) 
				     	{   
				     		printf("\n%15s",b[j]);
				     		printf(" %10s",a[i][j]);
				        }
						printf("\n");
						
					}
         		break;
         	case 4:
    			for(i=3;i<4;i++)  
			     	{
				     	for(j=0;j<5;j++) 
				     	{   
				     		printf("\n%s",b[j]);
				     		printf("%s",a[i][j]);
				        }
						printf("\n");
					}
							printf("\n\nwhat data you want to change:-");
    						scanf("%d",&op);
					switch(op)
					{
					
							case 1:
								printf("enter new name:-");
								scanf("%s",&a[3][0]);
								
								system("cls");
							break;
							
							case 2:
								printf("\n\nenter new id:-");
    							scanf("%s",&a[3][1]);
    							system("cls");
							break;
							
							case 3:
								printf("\n\nenter new roll.no:-");
    							scanf("%s",&a[3][2]);
    							system("cls");
    						break;
    						
    						case 4:
								printf("\n\nenter new phone.no:-");
    							scanf("%s",&a[3][3]);
    							system("cls");
    						break;
    						
    						case 5:
								printf("\n\nenter new pincode:-");
    							scanf("%s",&a[3][4]);
    							system("cls");
    						break;
    					
    						default:
    							printf("invalid option");
         			}
    					for(i=3;i<4;i++)  
			     	{
				     	for(j=0;j<5;j++) 
				     	{   
				     		printf("\n%15s",b[j]);
				     		printf("%5s",a[i][j]);
				        }
						printf("\n");
					}
         		break;
         	case 5:
    			for(i=4;i<5;i++)  
			     	{
				     	for(j=0;j<5;j++) 
				     	{   
				     		printf("\n%s",b[j]);
				     		printf("%s",a[i][j]);
				        }
						printf("\n");
					}
							printf("\n\nwhat data you want to change:-");
    						scanf("%d",&op);
					switch(op)
					{
					
							case 1:
								printf("enter new name:-");
								scanf("%s",&a[4][0]);
								
								system("cls");
							break;
							
							case 2:
								printf("\n\nenter new id:-");
    							scanf("%s",&a[4][1]);
    							system("cls");
							break;
							
							case 3:
								printf("\n\nenter new roll.no:-");
    							scanf("%s",&a[4][2]);
    							system("cls");
    						break;
    						
    						case 4:
								printf("\n\nenter new phone.no:-");
    							scanf("%s",&a[4][3]);
    							system("cls");
    						break;
    						
    						case 5:
								printf("\n\nenter new pincode:-");
    							scanf("%s",&a[4][4]);
    							system("cls");
    						break;
    					
    						default:
    							printf("invalid option");
         			}
         				for(i=4;i<5;i++)  
			     	{
				     	for(j=0;j<5;j++) 
				     	{   
				     		printf("\n%15s",b[j]);
				     		printf("%5s",a[i][j]);
				        }
						printf("\n");
					}
         		break;
         		
         			default:
    				printf("invalid option");
		}      
		
    	
}
