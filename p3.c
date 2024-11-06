#include <stdio.h>
#include <ctype.h>

int main()
{
    char foodType = '\0';
    int choice = 0;
    
    puts("Welcome to Madurai Cafe");

    do
    {
        puts("V:Veg N:Nonveg, Your choice please: ");
        foodType = getc(stdin);
        getchar();
        foodType = tolower(foodType);

        switch (foodType)
        {
        case 'v':
            puts("1:Banne-Dosa 2:Upma 3:Rava-idli\nYour choice? ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Your tasty dosa, Sir!");
                break;
            case 2:
                puts("Your yummy upma, Ma'am!");
                break;
            case 3:
                puts("Your delicious idli, Sir!");
                break;
            default:
                puts("We don't serve grass, Sir!");
            }
            break;

        case 'n':
            puts("1:Mutton-pulav 2:Chicken-chilly 3:Fish-fry. Your choice please: ");
            scanf("%d", &choice);
            switch (choice)
            {
            case 1:
                puts("Your tasty Mutton Pulav, Sir!");
                break;
            case 2:
                puts("Guntur delicious Chicken, Ma'am!");
                break;
            case 3:
                puts("Your spicy fish fry, Ma'am!");
                break;
            default:
                puts("We don't serve lizards, Ma'am!");
            }
            break;

        default:
            puts("Invalid option. Please choose V for Veg or N for Nonveg.");
        }

        puts("Do you wish to have more? 1:Yes 2:No");
        scanf("%d", &choice);
    } while (choice == 1);

    puts("Thank you! Visit again.");
    return 0;
}