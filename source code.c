#include <stdio.h>
#include <stdlib.h>

int order();

int main()
{
    int is_running=1;
    int total=0;
    printf("                                                   MORNING FRESH JUICE BAR\n");
    printf("***********************************************************************************************************************\n");
    printf ( "\t                                                 WELCOME!\n");

    printf ( "\n 1-ORDER 2-EXIT\n");

    while (is_running==1)
    {
        int result=0;
        scanf("%d",&result);

        switch (result)
        {
            case 1:
                total=total+order();
                printf ( "\nThe customer bill :-Rs.%d\n",total );
                printf ( "\n 1-ORDER  2-EXIT\n");
            break;

            case 2:
                is_running=2;
                printf("\n \t EMAIL :- morningfresh@gmail.com \n \t TEL :- 0112883290");
                printf("\n \n \t .....THANK YOU COME AGAIN.....");
            break;

            default:
                printf( "\n 1-order, 2-Exit ");
            break;

        }


    }


    return 0;
}

int order()
{   printf("               JUICE MENU\n\n");


     printf("Num          Flavour         Price(Rs)\n");
     int prices[6]={100,200,300,150,200,300};
     char items[6][10]={"Papaya","Apple","Faluuda","Pineapple","Orange","Mix Salad"};

       for (int i=0;i<=5;i++)
       {
            printf("[%d]----------[%s]------------%d\n",i,items[i],prices[i]);
       }

    int price=0;
     printf("\nInput the flavour number of your choice :");
     scanf("%d",&price);
     price=prices[price];

    int x=0;
     printf("Number of items :");
     scanf("%d",&x);

    int Total_Price=0;
     Total_Price=price*x;
     printf("\nOne of the item bill is :-RS.%d",Total_Price);

    return (Total_Price);
}
