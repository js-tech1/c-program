#include <stdio.h>
#include <string.h>

int main()
{
    int flag = 0;
    int totalCost = 0;
    int i, j, choice, c = 1, a[9], cost[9];

    for (i = 0; i < 9; i++)
        a[i] = 0;

    int BankBalance = 10000;
    int AskDeposit;
    int Deposit;
    char ch;
    char str[100];
    char items[9][100] = {"Sandisk 16 GB", "Logitech Mouse", "Pendrive 16 GB", "Adidas", "Nike", "Leecooper", "Mi Note 3", "Nokia 3", "Samsung"};

    printf("Please Enter Your Name\n");
    scanf("%s", str);
    printf("------------------------------------------------------\n");
    printf("Hello %s, Welcome to our Online Shopping.\n", str);

    do
    {
    up:
        if (c == 1)
        {
            printf("Enter\n1 - Computer Accessories\n2 - Shoes\n3 - Mobiles\n4 - check balance and deposit\n5 - exit\nAny other number to exit\n");
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
            {
                int accessoriesChoice;
                printf("------------------------------------------------------\n");
                printf("Enter\n1 - Sandisk 16 GB - Rs.355\n2 - Logitech Mouse- Rs.500\n3 - Pendrive 16 GB - Rs.550\nAny other number to exit\n");
                scanf("%d", &accessoriesChoice);
                cost[0] = 355;
                cost[1] = 500;
                cost[2] = 550;

                switch (accessoriesChoice)
                {
                case 1:
                {
                    int num;
                    printf("------------------------------------------------------\n");
                    printf("You chose Sandisk 16GB with Rs.355. Are you sure to buy? If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[0]++;
                        totalCost += 355;
                    }
                    printf("------------------------------------------------------\n");
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("------------------------------------------------------\n");
                    printf("You chose Logitech Mouse with Rs.500. Are you sure to buy? If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[1]++;
                        totalCost += 500;
                    }
                    printf("------------------------------------------------------\n");
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("------------------------------------------------------\n");
                    printf("You chose Pendrive 16GB with Rs.550. Are you sure to buy? If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[2]++;
                        totalCost += 550;
                    }
                    printf("------------------------------------------------------\n");
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from Computer Accessories\n");
                    break;
                }
                }
                break;
            }
            case 2:
            {
                int shoesChoice;
                printf("------------------------------------------------------\n");
                printf("Enter\n1 - Adidas - Rs.3550\n2 - Nike - Rs.5000\n3 - Leecooper - Rs.2800\nAny other number to exit\n");
                scanf("%d", &shoesChoice);
                cost[3] = 3550;
                cost[4] = 5000;
                cost[5] = 2800;

                switch (shoesChoice)
                {
                case 1:
                {
                    int num;
                    printf("------------------------------------------------------\n");
                    printf("You chose Adidas Shoes for Rs.3550. Are you sure to buy? If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[3]++;
                        totalCost += 3550;
                    }
                    printf("------------------------------------------------------\n");
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("You chose Nike Shoes for Rs.5000. Are you sure to buy? If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[4]++;
                        totalCost += 5000;
                    }
                    printf("------------------------------------------------------\n");
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("------------------------------------------------------\n");
                    printf("You chose Leecooper Shoes for Rs.2800. Are you sure to buy? If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[5]++;
                        totalCost += 2800;
                    }
                    printf("------------------------------------------------------\n");
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default:
                {
                    printf("Exit from Shoes Category\n");
                    break;
                }
                }
            case 3:
            {
                int mobileChoice;
                printf("------------------------------------------------------\n");
                printf("Enter\n1 - Mi Note 3 - Rs.11000\n2 - Nokia 3 - Rs.9866\n3 - Samsung - Rs.12800\nAny other number to exit\n");
                scanf("%d", &mobileChoice);
                cost[6] = 11000;
                cost[7] = 9866;
                cost[8] = 12800;

                switch (mobileChoice)
                {
                case 1:
                {
                    int num;
                    printf("------------------------------------------------------\n");
                    printf("You chose to buy Mi Note 3 for Rs.11000. Are you sure to buy? If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[6]++;
                        totalCost += 11000;
                    }
                    printf("------------------------------------------------------\n");
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 2:
                {
                    int num;
                    printf("------------------------------------------------------\n");
                    printf("You chose to buy Nokia 3 for Rs.9866. Are you sure to buy? If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[7]++;
                        totalCost += 9866;
                    }
                    printf("------------------------------------------------------\n");
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                case 3:
                {
                    int num;
                    printf("------------------------------------------------------\n");
                    printf("You chose to buy Samsung for Rs.12800. Are you sure to buy? If 'Yes' Enter 1 else any number\n");
                    scanf("%d", &num);
                    if (num == 1)
                    {
                        a[8]++;
                        totalCost += 12800;
                    }
                    printf("------------------------------------------------------\n");
                    printf("Your Cost in Cart is %d\n", totalCost);
                    break;
                }
                default:
                {
                    printf("------------------------------------------------------\n");
                    printf("Exit from Mobile Category\n");
                    break;
                }
                }
                break;
            }
            case 4:
            {
                printf("\nYour account balance is: %d\n", BankBalance);
                printf("Do you want to add money? Enter 1 for Yes\n");
                scanf("%d", &AskDeposit);
                if (AskDeposit == 1)
                {
                    printf("\nEnter the money you want to add\n");
                    scanf("%d", &Deposit);
                    BankBalance += Deposit;
                    if (BankBalance > Deposit)
                    {
                        printf("\nMoney deposited successfully\n");
                        printf("\nTotal Balance is now: %d\n", BankBalance);
                    }
                }
                goto up;
            }
            case 5:
            {
                goto out;
            }
            default:
            {
                printf("Enter Valid Categories Choice\n");
                break;
            }
            }
            }

            printf("%s's cart\n", str);
            printf("Id\tItems\t\t\tQuantity\t\t\tCost\n");

            for (i = 0; i < 9; i++)
            {
                if (a[i] != 0)
                {
                    printf("%d\t%s\t\t%d\t\t\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
                }
            }

            printf("Total Cost %56d\n", totalCost);
            printf("If you wish to buy anything more, enter\n1 to Add Item\n2 to Delete Items\nAny other number to Exit\n");
            scanf("%d", &c);
        }

        if (c == 2)
        {
            int id;
            printf("Enter id to delete item\n");
            scanf("%d", &id);
            if (id < 9 && id >= 0)
            {
                totalCost = totalCost - (cost[id] * a[id]);
                a[id] = 0;
            }
            else
            {
                printf("Enter Valid id\n");
            }
        }

        printf("Revised Items\n");
        printf("\n_\t\t\t_\t\t__\n");
        printf("Id\tItems\t\tQuantity\tCost\n");

        for (i = 0; i < 9; i++)
        {
            if (a[i] != 0)
            {
                printf("%d\t%s\t%d\t\t%d\n", i, items[i], a[i], (cost[i] * a[i]));
            }
        }

        if (BankBalance < totalCost)
        {
            printf("\nDon't have enough balance\n");
            printf("\nIf you wish to buy anything more, enter\n1 to Add Item\n2 to Delete Items\nAny other number to Exit\n");
            scanf("%d", &c);
        }
        else
        {
        	printf("\n------------------------------------------------------------------------------\n");
            printf("Your Cost is: %30d\n", totalCost);
            int StorGst = totalCost * 0.13;
            printf("\tGST: %30d (13%% TAX)\n",StorGst);
            
            printf("Total amount is: %27d\n", totalCost + StorGst);
            break;
        }

        printf("Total Cost: %10d\n", totalCost);
        printf("If you wish to buy anything more, enter\n1 to Add Item\n2 to Delete Items\nAny other number to Exit\n");
        scanf("%d", &c);
    } while (c == 2 || c == 1);

out:

    printf("Thanks %s for choosing us and visiting us again.\n", str);
    return 0;
}
