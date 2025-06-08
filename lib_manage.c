#include<stdio.h>

int main(){
    printf("---------Main Menu--------------\n\n");

    printf("1. Add Books\n");
    printf("2. Display Book Information\n");
    printf("3. Search Books(Book Status)\n");
    printf("4. Exit \n\n");

    int a1;
    printf("Enter :");
    scanf("%d",&a1);
    printf("\n\n");

    if(a1==1)
    {
        printf("You csn add Book information\n\n");

        printf("Choose the category : \n\n");

        printf("1. Computer\n");
        printf("2. Electronics\n");
        printf("3. Mechanical\n\n");

        int a2;
        printf("Choose a category: ");
        scanf("%d",&a2);

        printf("\n\n");

        if(a2==1)
        {
            printf("You have chose Computer category\n\n");

            printf("1. Introduction to C\n");
            printf("2. Introduction to Python\n");
            printf("3. Introduction to R Programming\n\n");

            int a3;
            printf("Choose a book: ");
            scanf("%d",&a3);

            printf("\n\n");

            if(a3==1)
            {
                printf("You have chose Introduction to C book\n\n");

                char book_namea[50];
                char author_namea[50];
                int pagea;
                int pricea;

                printf("Book name : ");
                scanf("%s",&book_namea);

                printf("Author name : ");
                scanf("%s",&author_namea);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d",&pagea);
                printf("\n\n");

                printf("Price: ");
                scanf("%d",&pricea);
                printf("\n\n");
            }
            else if(a3==2)
            {
                printf("You have chose Introduction to Python book\n\n");

                char book_nameb[50];
                char author_nameb[50];
                int pageb;
                int priceb;

                printf("Book name : ");
                scanf("%s",&book_nameb);

                printf("Author name : ");
                scanf("%s",&author_nameb);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d",&pageb);
                printf("\n\n");

                printf("Price: ");
                scanf("%d",&priceb);
                printf("\n\n");

            }
            else if(a3==3)
            {
                printf("You have chose Introduction to R programming\n\n");

                char book_namec[50];
                char author_namec[50];
                int pagec;
                int pricec;

                printf("Book name : ");
                scanf("%s",&book_namec);

                printf("Author name : ");
                scanf("%s",&author_namec);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d",&pagec);
                printf("\n\n");

                printf("Price: ");
                scanf("%d",&pricec);
                printf("\n\n");

            }
        }
        else if(a2==2)
        {
            printf("You have chose Electrical category\n\n");

            printf("1. Practical Electronics for Inventors\n");
            printf("2. The art of electronics\n");
            printf("3. Fundamentals of digital circuuits\n\n");

            int a4;
            printf("Choose a book: ");
            scanf("%d",&a4);
            printf("\n\n");

            if(a4==1)
            {
                printf("You have chose Practical Electronics for Inventors book\n\n");

                char book_named[50];
                char author_named[50];
                int paged;
                int priced;

                printf("Book name : ");
                scanf("%s",&book_named);

                printf("Author name : ");
                scanf("%s",&author_named);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d",&paged);
                printf("\n\n");

                printf("Price: ");
                scanf("%d",&priced);
                printf("\n\n");

            }
            else if(a4==2)
            {
                printf("You have chose The Art of Electronics book\n\n");

                char book_namee[50];
                char author_namee[50];
                int pagee;
                int pricee;

                printf("Book name : ");
                scanf("%s",&book_namee);

                printf("Author name : ");
                scanf("%s",&author_namee);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d",&pagee);
                printf("\n\n");

                printf("Price: ");
                scanf("%d",&pricee);
                printf("\n\n");
            }
            else if(a4==3)
            {
                printf("You have chose Fundamentals pf digital circuits book\n\n");

                char book_namef[50];
                char author_namef[50];
                int pagef;
                int pricef;

                printf("Book name : ");
                scanf("%s",&book_namef);

                printf("Author name : ");
                scanf("%s",&author_namef);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d",&pagef);
                printf("\n\n");

                printf("Price: ");
                scanf("%d",&pricef);
                printf("\n\n");
            }
        }
        else if(a2==3)
        {
            printf("You have chose Mechanical category\n\n");

            printf("1. Introduction to Autocad\n");
            printf("2. Fundamentals of Thermodynamics\n");
            printf("3. Mchanical Engineering: Conventional and Objective Type\n\n");

            int a5;
            printf("Choose a book: ");
            scanf("%d",&a5);

            printf("\n\n");

            if(a5==1)
            {
                printf("You have chose Introduction to Autocad book\n");

                char book_nameg[50];
                char author_nameg[50];
                int pageg;
                int priceg;

                printf("Book name : ");
                scanf("%s",&book_nameg);

                printf("Author name : ");
                scanf("%s",&author_nameg);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d",&pageg);
                printf("\n\n");

                printf("Price: ");
                scanf("%d",&priceg);
                printf("\n\n");
            }
            else if(a5==2)
            {
                printf("You have chose Fundamentals of Thermodynamics book \n\n");

                char book_nameh[50];
                char author_nameh[50];
                int pageh;
                int priceh;

                printf("Book name : ");
                scanf("%s",&book_nameh);

                printf("Author name : ");
                scanf("%s",&author_nameh);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d",&pageh);
                printf("\n\n");

                printf("Price: ");
                scanf("%d",&priceh);
                printf("\n\n");
            }
            else if(a5==3)
            {
                printf("You hvae chose Mechanical Engineering: Conventional and Objective Type book\n\n");

                char book_namei[50];
                char author_namei[50];
                int pagei;
                int pricei;

                printf("Book name : ");
                scanf("%s",&book_namei);

                printf("Author name : ");
                scanf("%s",&author_namei);
                printf("\n\n");

                printf("Pages: ");
                scanf("%d",&pagei);
                printf("\n\n");

                printf("Price: ");
                scanf("%d",&pricei);
                printf("\n\n");
            }
        }
    }
    else if(a1==3)
    {
        printf("You have chose the Books(Book Status)\n\n");

        printf("Press the code-123 for Introduction to C\n");
        printf("Press the code-456 for Introduction to Python\n");
        printf("Press the code-789 for Introduction to R Programming\n");
        printf("Press the code-523 for Practical Electronics for Inventors\n");
        printf("Press the code-759 for The art of Electronics\n");
        printf("Press the code-157 for Fundamentals of digital circuits\n");
        printf("Press the code-359 for Introduction to Autocad\n");
        printf("Press the code-153 for Fundamentals of Thermodynamics\n");
        printf("Press the code-104 for Mechanical Engineering: Conventional and Objectice Type\n\n");

        int a6;
        printf("Enter the book to search (USE THE CODE): ");
        scanf("%d",&a6);

        printf("\n");

        switch(a6)
        {
            case 123:
            printf("Book Name: Introduction to C\n");
            printf("Book Status: 2 Copies left");
            break;

            case 456:
            printf("Book Name: Introduction to Python\n");
            printf("Book Status: 3 Copies left");
            break;
            
            case 789:
            printf("Book Name: Introduction to R Programming\n");
            printf("Book Status: 20 Copies left");
            break;

            case 523:
            printf("Book Name: Practical Electronics for Inventors\n");
            printf("Book Status: 30 Copies left");
            break;

            case 759:
            printf("Book Name: The art of Electronics\n");
            printf("Book Status: 45 Copies left");
            break;

            case 157:
            printf("Book Name: Fundamentals of digital circuits\n");
            printf("Book Status: 100 Copies left");
            break;

            case 359:
            printf("Book Name: Introduction to Autocad\n");
            printf("Book Status: No Copies left");
            break;

            case 153:
            printf("Book Name: Fundamentals of Thermodynamics\n");
            printf("Book Status: 13 Copies left");
            break;

            case 104:
            printf("Book Name:  Mechanical Engineering: Conventional and Objectice Type\n");
            printf("Book Status: 230 Copies left");
            break;
        }
    }
    else if(a1==1)
    {
        printf("The Library is Closed\n\n");

        printf("Have a nice day");
    }
    return 0;
}