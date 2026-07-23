#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ch, num, num1;
    char op;
    do
    {
        // 1. it clears the screen at start of each run
        system("cls");

         printf("================================\nsafe menu calculator\n=================================\n");

        printf("enter the two numbers:");
        while (scanf("%d%d", &num, &num1) != 2)
        {
            printf("INVALID INPUT ! please enter numbers only:");
            while (getchar() != '\n');
        }

        printf("===menu===\n1.Addition\n2.Subtraction\n3.Multiplication\n4.divison\n5.exit\n");
         printf("=================================");
        printf("\nENTER YOUR CHOICE :");
        while (scanf("%d", &ch) != 1)
        {
            printf("inavlid choice ! enter a menu number (1-5):");
            while (getchar() != '\n');
        }
        while (getchar() != '\n');
        switch (ch)
        {
        case 1:
            printf("ADDITION:%d\n", num + num1);
            break;

        case 2:
            printf("SUBTRACTION:%d\n", num - num1);
            break;

        case 3:
            printf("MULTIPLICATION:%d\n", num * num1);
            break;

        case 4:
            if (num1 != 0)
            {
                printf("DIVISION:%.2f\n", (float)num / num1);
            }
            else
            {
                printf("ERROR: denominator should not be zero\n");
            }
            break;

        case 5:
            printf("Exiting....\n");
            op= 'N';
            break;
            

        default:
            printf("invalid input\n");
        }
        printf("DO YOU WANT TO CONTINUE ? Y/N: ");
        while (scanf(" %c", &op) != 1 || (op != 'y' && op != 'Y' && op != 'N' && op != 'n'))
        {
            printf("INVALID INPUT! PLEASE ENTER Y or N:");
            while (getchar() != '\n')
                ;
        }

    } while (op == 'y' || op == 'Y');
    printf("\nPROGRAM ENDED. GOODBYE!\n");
    return 0;
}