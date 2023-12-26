#include<stdio.h>

void printmenu(){
    printf("==========SJ-RESTAURENT==========");
    printf("\n\n\n");
    printf("[1]-PIZZA:\t\t400tk");
    printf("\n[2]-BURGER:\t\t250tk");
    printf("\n[3]-SEA FOOD COMBO:\t2500tk");
    printf("\n[4]-YOGURT:\t\t300tk");
    printf("\n[5]-SANDWICH:\t\t350tk");
    printf("\n[6]-KABAB:\t\t1500tk");
    printf("\n[7]-BREAD:\t\t200tk");
    printf("\n[8]-HOT-DOG:\t\t400tk");
    printf("\n[9]-VEGTABLE SALAD:\t700tk");
    printf("\n[10]-SHRIMP:\t\t1800tk");
    printf("\n[11]-CRAB:\t\t1500tk");
    printf("\n[12]-FRIED-RICE:\t990tk");
    printf("\n[13]-CHEESE:\t\t700TK");
    printf("\n[14]-FRUIT SALAD:\t1500tk");
    printf("\n[15]-BACON:\t\t1200tk");
    printf("\n[16]-CAKE:\t\t1500tk");
    printf("\n[17]-ROAST-CHICKEN:\t800tk");
    printf("\n[18]-DONUT:\t\t250tk");
    printf("\n[19]-LASSI:\t\t300tk");
    printf("\n[20]-ICE-CREAM:\t1000tk");
    printf("\n[21]-WATER:\t\t150tk");
    printf("\n");
}
struct user{
    char name[50];
    char phone[50];
    char add[50];
};

int main()
{
    struct user usr;
    int opt, qty;
    float price, amt;
    char addAnother;
    float totalAmount;

    printf("Enter Your Name: ");
    gets(usr.name);
    printf("Enter Your Phone Number: ");
    gets(usr.phone);
    printf("Enter Your Address: ");
    gets(usr.add);

    do{
        system("cls");
        printmenu();
        printf("\nEnter Option: ");
        scanf("%d",&opt);
        printf("Enter quantity: ");
        scanf("%d",&qty);

        switch(opt)
        {
        case 1:
            price = 400;
            break;
        case 2:
            price = 250;
            break;
        case 3:
            price = 2500;
            break;
        case 4:
            price = 300;
            break;
        case 5:
            price = 350;
            break;
        case 6:
            price = 1500;
            break;
        case 7:
            price = 200;
            break;
        case 8:
            price = 400;
            break;
        case 9:
            price = 700;
            break;
        case 10:
            price = 1800;
            break;
        case 11:
            price = 1500;
            break;
        case 12:
            price = 990;
            break;
        case 13:
            price = 700;
            break;
        case 14:
            price = 1500;
            break;
        case 15:
            price = 1200;
            break;
        case 16:
            price = 1500;
            break;
        case 17:
            price = 800;
            break;
        case 18:
            price = 250;
            break;
        case 19:
            price = 300;
            break;
        case 20:
            price = 1000;
            break;
        case 21:
            price = 150;
            break;
        }
        amt = price*qty;
        printf("\nAmount: \t%.2f\n\n",amt);

        totalAmount = totalAmount+amt;
        printf("\n\nTotal Amount: \t%.2f\n\n",totalAmount);

        printf("Thank You \t\t%s",usr.name);
        printf("\nYour Phone Number\t\t %s",usr.phone);
        printf("\nYour Address \t\t %s",usr.add);

        printf("\nAdd Another Order(Y/N):\t");
        addAnother = getch();


    }while(addAnother=='Y' || addAnother=='y');

    if(addAnother=='N' || addAnother=='n')
    {
        printf("Thank You %s",usr.name);
    }

    getch();
}
