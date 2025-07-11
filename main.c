    //This is the main file for the ATM project.

    #include<stdio.h>

    int main()
    {
        printf("Welcome to the spiegel bank !\n I am Ein 🤖. I am here to help you, let's go 🚀.\n");

        int pin;
        printf("Enter your lovely pin: ");
        scanf("%d", &pin);

        int origin_pin = 4343;
        int bal = 14000;
        

        if(pin == origin_pin)
        {
            int chose;
            do
            {
                
                printf("🤖 We are in the main menu right now.\n");
            printf("======= MAIN MENU ======= \n 1. Check balance\n 2. Withdrawal\n 3. Change PIN\n 4. Deposit\n 5. EXIT🚪\n");

            printf("🤖 Select any one.\n");
            scanf("%d", &chose);

            switch(chose)
        {
            case 1: 
                    printf(" 🤖 Awesome, you came here to check your balance 💵.\n");
                    printf("Your bank balance is %d /- rupees\n", bal);
                    break;

            case 2: 
                    printf("🤖 Great! You came here to withdraw your money 💵\n");
                    int wam;
                    printf("Enter the amount : ");
                    scanf("%d", &wam);
                    if (wam > bal) 
                    {
                        printf("Insufficient funds. Your balance is %d\n", bal);
                    }
                    else if (wam <= 0) 
                    {
                        printf("Invalid amount. 🤖You are kidding me. Please enter a positive number.\n");
                    }
                    else 
                    {
                    printf("Please collect the cash 💵!\n");
                    bal = bal - wam;
                    char Z;
                    printf("🤖 Do you want to check the balance? (Y/N)");
                    scanf(" %c", &Z);
                    if(Z == 'Y' || Z == 'y')
                    {
                    printf("Your balance is %d\n",bal);   
                    }
                    else if (Z == 'N' || Z == 'n')
                    {
                        printf("🤖 Alright, let's go back to the main menu 🧾.");
                    }
                    }
                    break;
            case 3: 
                    printf("🤖 Oh! You want to change your pin.\n");
                    int check;
                    printf("Enter the old pin: ");
                    scanf("%d", &check);
                    if(pin == check)
                    {
                        int new_pin;
                        printf("Enter the new pin : ");
                        scanf("%d", &new_pin);
                        pin = new_pin;
                        printf("🤖 Perfect! The pin has been successfully changed.");
                    }
                    else
                    {
                        printf("🤖 I am sorry! You have entered the wrong pin.");
                    }
                    break;
            case 4: 
                    printf(" 🤖 Huraah! You have came here to deposit the cash .\n");
                    int depo;
                    printf("Enter the deposit amount: ");
                    scanf("%d", &depo);
                    bal = bal + depo;
                    char Zz;
                    printf("🤖 Do you want to check the balance? (Y/N)\n");
                    scanf(" %c", &Zz);
                    if(Zz == 'Y' || Zz == 'y')
                    {
                    printf("🤖 Your balance is %d\n",bal);   
                    }
                    else if (Zz == 'N'|| Zz == 'n')
                    {
                        printf("🤖 Alright, Let's go back to main menu 🧾.");
                    }
                    break;
            case 5: 
                printf("Thank you so much for visiting Spiegel Bank. Waiting to see you again. Once again this is Ein 🤖, signing off.\n");  
                break;   
            default : 
                    printf("Invalid choice. Please enter a number between 1 to 5.\n");
                    break;
        }

            } while (chose != 5);
                
        } 
        else
        {
            printf("I am sorry, you have entered the wrong pin. See you again !\n");
        }
        return 0;
    }

