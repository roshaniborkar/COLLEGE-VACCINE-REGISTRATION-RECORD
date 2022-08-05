#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct node
{
	char student_name[50];
	int USN_no;
	char branch[20];
	long long int student_number;
	char vaccine_name[10];
	char dose_one_date[20];
	char dose_two_date[20];
	
	struct node *next;
	struct node *previous;	
} *start = NULL, *end = NULL;

FILE *file;

void create_students_record()
{
  struct node *new_node, *current;
    int i, number_of_node;

    printf("\n\n\n\n\n\n\t\t\tEnter Number of students's for Record: ");
    scanf("%d", &number_of_node);
    cls();
	for(i = 1; i <= number_of_node; i++)
    {
        new_node = (struct node *)malloc(sizeof(struct node));

        if(new_node == NULL)
        {
            printf("\nMemory Does Not Created.\n");
            exit(0);
        }
        else
        {
            file = fopen("student_Record.txt","a+");
            if(file == NULL)
            {
                printf("File does not create.\n");
            }
            else
            {
                printf("\n\n\t\t\tstudent's Details\n");
                fprintf(file,"\n\n\t\t\tstudent's Details\n");
                printf("\t\t_________________________________\n");
                fprintf(file,"\t\t_________________________________\n");

                printf("\n\n\tEnter student Name: ");
                fflush(stdin);
                gets(new_node->student_name);
                fprintf(file,"\n\tstudent Name: %s", new_node->student_name);

                printf("\n\tUSN_Number: ");
                scanf("%d", &new_node->USN_no);
                fprintf(file,"\n\tUSN_no: %d",new_node->USN_no);

                printf("\n\tEnter department name: ");
                fflush(stdin);
                gets(new_node->branch);
                fprintf(file,"\n\tdepartment Name: %s",new_node->branch);
				
				printf("\n\tStudent Phone Number: ");
                scanf("%lld", &new_node->student_number);
                fprintf(file,"\n\tStudent Phone Number: %lld",new_node->student_number);
                
                printf("\n\tEnter the vaccine name:");
                printf("\n\t You can Enter :");
                printf("\n\t 1. Covaxin ");
                printf("\n\t 2. Covishield\n\n\tEnter a choice: ");
                fflush(stdin);
                gets(new_node->vaccine_name);
                fprintf(file,"\n\tvaccine name is %s",new_node->vaccine_name);
                
                printf("\n\tEnter the date of 1st vaccine:");
                fflush(stdin);
                gets(new_node->dose_one_date);
				fprintf(file,"\n\tDate is %s",new_node->dose_one_date);

                printf("\n\tEnter the date of 2nd vaccine:");
                fflush(stdin);
                gets(new_node->dose_two_date);
				fprintf(file,"\n\tDate is %s",new_node->dose_two_date);
				                
                fclose(file);
                fopen("student_Record.txt","a+");
            }
            new_node->next = NULL;
            new_node->previous = NULL;

            if(start == NULL && end == NULL)
            {
                start = new_node;
                end = new_node;
                current = new_node;
            }
            else
            {
                current->next = new_node;
                new_node->previous = current;
                current = new_node;
                end = new_node;
            }
        }
    }
}

void add_students_record_at_first()
{
    struct node *new_node, *current;
    new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        printf("\nMemory Does Not Created.\n");
        exit(0);
    }
    else
    {
        file = fopen("student_Record.txt","a+");
        if(file == NULL)
        {
            printf("File does not create.\n");
        }
        else
        {
                printf("\n\n\t\t\tstudent's Details\n");
                fprintf(file,"\n\n\t\t\tstudent's Details\n");
                printf("\t\t_________________________________\n");
                fprintf(file,"\t\t_________________________________\n");

                printf("\n\n\tEnter student Name: ");
                fflush(stdin);
                gets(new_node->student_name);
                fprintf(file,"\n\tstudent Name: %s", new_node->student_name);

                printf("\n\tUSN_Number: ");
                scanf("%d", &new_node->USN_no);
                fprintf(file,"\n\tUSN_no: %d",new_node->USN_no);

                printf("\n\tEnter department name: ");
                fflush(stdin);
                gets(new_node->branch);
                fprintf(file,"\n\tdepartment Name: %s",new_node->branch);
				
				printf("\n\tStudent Phone Number: ");
                scanf("%lld", &new_node->student_number);
                fprintf(file,"\n\tStudent Phone Number: %lld",new_node->student_number);
                
                printf("\n\tEnter the vaccine name:");
                printf("\n\t You can Enter :");
                printf("\n\t 1. Covaxin ");
                printf("\n\t 2. Covishield\n\n\tEnter a choice: ");
                fflush(stdin);
                gets(new_node->vaccine_name);
                fprintf(file,"\n\tvaccine name is %s",new_node->vaccine_name);
                
                printf("\n\tEnter the date of 1st vaccine:");
                fflush(stdin);
                gets(new_node->dose_one_date);
				fprintf(file,"\n\tDate is %s",new_node->dose_one_date);

                printf("\n\tEnter the date of 2nd vaccine:");
                fflush(stdin);
                gets(new_node->dose_two_date);
				fprintf(file,"\n\tDate is %s",new_node->dose_two_date);
				                
                fclose(file);
                fopen("student_Record.txt","a+");
            }
    }
    	new_node->next = NULL;
    	new_node->previous = NULL;
    	
    	current = start;
   		new_node->next = current;
    	current->previous = new_node;
    	start = new_node;
}

void add_students_record_at_last()
{
	struct node *new_node, *current;
    new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        printf("\nMemory Does Not Created.\n");
        exit(0);
    }
    else
    {
        file = fopen("student_Record.txt","a+");
        if(file == NULL)
        {
            printf("File does not create.\n");
        }
        else
        {
                printf("\n\n\t\t\tstudent's Details\n");
                fprintf(file,"\n\n\t\t\tstudent's Details\n");
                printf("\t\t_________________________________\n");
                fprintf(file,"\t\t_________________________________\n");

                printf("\n\n\tEnter student Name: ");
                fflush(stdin);
                gets(new_node->student_name);
                fprintf(file,"\n\tstudent Name: %s", new_node->student_name);

                printf("\n\tUSN_Number: ");
                scanf("%d", &new_node->USN_no);
                fprintf(file,"\n\tUSN_no: %d",new_node->USN_no);

                printf("\n\tEnter department name: ");
                fflush(stdin);
                gets(new_node->branch);
                fprintf(file,"\n\tdepartment Name: %s",new_node->branch);
				
				printf("\n\tStudent Phone Number: ");
                scanf("%lld", &new_node->student_number);
                fprintf(file,"\n\tStudent Phone Number: %lld",new_node->student_number);
                
                printf("\n\tEnter the vaccine name:");
                printf("\n\t You can Enter :");
                printf("\n\t 1. Covaxin ");
                printf("\n\t 2. Covishield\n\n\tEnter a choice: ");
				fflush(stdin);
                gets(new_node->vaccine_name);
                fprintf(file,"\n\tvaccine name is %s",new_node->vaccine_name);
                
                printf("\n\tEnter the date of 1st vaccine:");
                fflush(stdin);
                gets(new_node->dose_one_date);
				fprintf(file,"\n\tDate is %s",new_node->dose_one_date);

                printf("\n\tEnter the date of 2nd vaccine:");
                fflush(stdin);
                gets(new_node->dose_two_date);
				fprintf(file,"\n\tDate is %s",new_node->dose_two_date);
				                
                fclose(file);
                fopen("student_Record","a+");
            }
    }
    new_node->next = NULL;
    new_node->previous = NULL;
    
    current = end;
    current->next = new_node;
    new_node->previous = current;
    end = new_node;
}

void add_students_record_at_middle()
{
    struct node *new_node, *current, *temp1, *temp2;
    int i,USN_no ,position;

    new_node = (struct node *)malloc(sizeof(struct node));

    if(new_node == NULL)
    {
        printf("\nMemory Does Not Created.\n");
        exit(0);
    }
    else
    {
        file = fopen("student_Record.txt","a+");
        if(file == NULL)
        {
            printf("File does not create.\n");
        }
        else    
                {
                printf("\n\n\t\t\tstudent's Details\n");
                fprintf(file,"\n\n\t\t\tstudent's Details\n");
                printf("\t\t_________________________________\n");
                fprintf(file,"\t\t_________________________________\n");

                printf("\n\n\tEnter student Name: ");
                fflush(stdin);
                gets(new_node->student_name);
                fprintf(file,"\n\tstudent Name: %s", new_node->student_name);

                printf("\n\tUSN_Number: ");
                scanf("%d", &new_node->USN_no);
                fprintf(file,"\n\tUSN_no: %d",new_node->USN_no);

                printf("\n\tEnter department name: ");
                fflush(stdin);
                gets(new_node->branch);
                fprintf(file,"\n\tdepartment Name: %s",new_node->branch);
				
				printf("\n\tStudent Phone Number: ");
                scanf("%lld", &new_node->student_number);
                fprintf(file,"\n\tStudent Phone Number: %lld",new_node->student_number);
                
                printf("\n\tEnter the vaccine name:");
                printf("\n\t You can Enter :");
                printf("\n\t 1. Covaxin ");
                printf("\n\t 2. Covishield\n\n\tEnter a choice: ");            
				fflush(stdin);
                gets(new_node->vaccine_name);
                fprintf(file,"\n\tvaccine name is %s",new_node->vaccine_name);
                
                printf("\n\tEnter the date of 1st vaccine:");
                fflush(stdin);
                gets(new_node->dose_one_date);
				fprintf(file,"\n\tDate is %s",new_node->dose_one_date);

                printf("\n\tEnter the date of 2nd vaccine:");
                fflush(stdin);
                gets(new_node->dose_two_date);
				fprintf(file,"\n\tDate is %s",new_node->dose_two_date);
				                
                fclose(file);
                fopen("student_Record.txt","a+");
            }
    }
        new_node->next = NULL;
    new_node->previous = NULL;

    cls();

    printf("Enter USN_no before Insert Record: ");
    scanf("%d", &USN_no);

    position = pos(USN_no);

    current = start;
    for(i = 1; i <= (position - 1); i++)
    {
        current = current->next;
    }

    temp2 = current;
    temp1 = current->previous;
    temp1->next = new_node;
    new_node->previous = temp1;
    new_node->next = temp2;
    temp2->previous = new_node;
}

void display_students_record_from_forward()
{
    struct node *current;

    current = start;

    if(current == NULL)
    {
        printf("\n\n\n\n\n\n\n\t\t\tThere Are No Record In The List.\n");
    }
    else
    {
        while(current != NULL)
        {
        	printf("\n\n\t\t\tstudent's Details\n");
        	printf("\t\t_________________________________\n");
			
			printf("\n\n\tEnter student Name: %s",current->student_name);

            printf("\n\tUSN_Number: %d",current->USN_no);

            printf("\n\tEnter department name: %s",current->branch);
                
			printf("\n\tStudent Phone Number: %lld",current->student_number);
               
            printf("\n\tEnter the vaccine name:%s",current->vaccine_name);
                
            printf("\n\tEnter the date of 1st vaccine:%s",current->dose_one_date);
                
            printf("\n\tEnter the date of 2nd vaccine:%s",current->dose_two_date);
                
            current = current->next;
            printf("\n");
        }
    }
}

void display_students_record_from_backward()
{
    struct node *current;

    current = end;

    if(current == NULL)
    {
        printf("\n\n\n\n\n\n\n\t\t\tThere Are No Record In The List.\n");
    }
    else
    {
        while(current != NULL)
        {               
        printf("\n\n\t\t\tstudent's Details\n");
        printf("\t\t_________________________________\n");
			
			printf("\n\n\tEnter student Name: %s",current->student_name);

            printf("\n\tUSN_Number: %d",current->USN_no);

            printf("\n\tEnter department name: %s",current->branch);
                
			printf("\n\tStudent Phone Number: %lld",current->student_number);
               
            printf("\n\tEnter the vaccine name:%s",current->vaccine_name);
                
            printf("\n\tEnter the date of 1st vaccine:%s",current->dose_one_date);
                
            printf("\n\tEnter the date of 2nd vaccine:%s",current->dose_two_date);
                
        current = current->previous;
        printf("\n");
        }
    }
}
                
int pos(student_id)
{
    int position = 0;
    struct node *current;

    current = start;

    while(current != NULL)
    {
        position++;
        if(student_id == current->USN_no)
        {
            return position;
        }
        current = current->next;
    }
    return -1;
}

int search_students_record(student_id)
{
    int position = 0;
    struct node *present;

    present = start;

    while(present != NULL)
    {
        position++;
        if(student_id == present->USN_no)
        {
            printf("\n\n\n\t\t%s is vaccinated %s on %s",present->student_name,present->vaccine_name,present->dose_one_date);
            printf("\n\t\t%s is vaccinated %s on %s",present->student_name,present->vaccine_name,present->dose_two_date);
            printf("\n\n");
            getch();
            cls();

            return position;
        }
        present= present->next;
    }
    return -1;
}

void delete_students_record()
{
    struct node *current, *temp1, *temp2;
    int i, delet_student_id, position;

    printf("\n\n\n\n\n\n\n\t\t\tEnter USN_no for delete: ");
    scanf("%d", &delet_student_id);
    position = pos(delet_student_id);

    current = start;
    for(i = 1; i <= (position - 1); i++)
    {
        current = current->next;
    }
    if(current == start && current->previous == NULL)
    {
        current = current->next;
        start = current;
        current->previous = NULL;
        printf("\n\n\n\n\n\n\n\t\t\t\nFirst USN_no Delete Successfully.\n");
    }
    else if(current->next == NULL && current == end)
    {
        current = current->previous;
        end = current;
        current->next = NULL;
        printf("\nLast USN_no Delete Successfully.\n");
    }
    else
    {
        temp2 = current->next;
        temp1 = current->previous;
        temp1->next = temp2;
        temp2->previous = temp1;
        printf("\nDelete Successfully.\n");
    }
}

int cls()
{
    return system("cls");
}
//Display message
void welcomeMessage()
{
    printf("\n\n\n\n\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t        =                    TO                     =");
    printf("\n\t\t\t        =     New Horizon College of Engineering    =");
    printf("\n\t\t\t        =     Student Vaccine Registration Record   =");
    printf("\n\t\t\t        =                 MANAGEMENT                =");
    printf("\n\t\t\t        =                   SYSTEM                  =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n\t\t\t Enter any key to continue.....");
    getch();
}

int main()
{
	system("color B");
	welcomeMessage();
	
	getch();

    int c, position, student_id, insert_choice, display_choice;

    while(1)
    {
    	printf("\n\n\t\t\t______________________________________________________");
        printf("\n\n\t\t\t\t\tStudent's Vaccine record\n");
        printf("\t\t\t______________________________________________________");
        printf("\n\n");

        printf("------------------------------------------------------------------------------------------");
        printf("\n\n");
        printf("\t\t\t\t1. Create Record.\n");
        printf("\t\t\t\t2. Add Record.\n");
        printf("\t\t\t\t3. Display Record.\n");
        printf("\t\t\t\t4. Search Record.\n");
        printf("\t\t\t\t5. Delete Record.\n");
        printf("\t\t\t\t6. Exit.\n\n");
        printf("------------------------------------------------------------------------------------------");

        printf("\n\t\t\tPlease Enter your choice: ");
        scanf("%d", &c);
        printf("\n");
        cls();

        switch(c)
        {
            case 1: create_students_record();
                    cls();
                    printf("\n\n\n\n\n\n\n\t\t\tRecord Created Successfully.");
                    getch();
                    cls();
                    break;
                    
			case 2: while(1)
                    {
                        printf("\n\n\n\n\n");
                        printf("------------------------------------------------------------------------------------------");
                        printf("\n\n");
                        printf("\t\t\t\t1. Add Record At First.\n");
                        printf("\t\t\t\t2. Add Record At Last.\n");
                        printf("\t\t\t\t3. Add Record At Middle.\n");
                        printf("\t\t\t\t4. Back To Main Program.\n\n");
                        printf("------------------------------------------------------------------------------------------");

                        printf("\n\n\n\t\t\tPlease Enter your choice: ");
                        scanf("%d", &insert_choice);
                        printf("\n\n");

                        cls();

                        switch(insert_choice)
                        {
                            case 1: add_students_record_at_first();
                                    cls();
                                    printf("\n\n\n\n\n\n\n\t\t\tRecord Added successfully.");
                                    getch();
                                    cls();
                                    break;
                        
			 				case 2: add_students_record_at_last();
                                    cls();
                                    printf("\n\n\n\n\n\n\n\t\t\tRecord Added successfully.");
                                    getch();
                                    cls();
                                    break;

                            case 3: add_students_record_at_middle();
                                    cls();
                                    printf("\n\n\n\n\n\n\n\t\t\tRecord Added successfully.");
                                    getch();
                                    cls();
                                    break;

                            case 4: main();
                                    break;

                            default:printf("\n\n\n\n\n\n\n\t\t\t\tIncorrect input!!!");
                                    printf("\n\t\t\tPlease Enter Correct Key.");
                                    printf("\n\t\t\t\tOr Enter 4 to Main menu.\n");
                                    getch();
                                    cls();
                        }
                    }
                    getch();
                    cls();
                    break;
			
			case 3: while(1)
                    {
                        printf("\n\n\n\n\n");
                        printf("------------------------------------------------------------------------------------------");
                        printf("\n\n");
                        printf("\t\t\t\t1. Display From Forward.\n");
                        printf("\t\t\t\t2. Display From Backward.\n");
                        printf("\t\t\t\t3. Back To Main Program.\n\n");
                        printf("------------------------------------------------------------------------------------------");

                        printf("\n\n\n\t\t\tPlease Enter your choice: ");
                        scanf("%d", &display_choice);
                        printf("\n\n");

                        cls();

                        switch(display_choice)
                        {
                            case 1: display_students_record_from_forward();
                                    getch();
                                    cls();
                                    break;

                            case 2: display_students_record_from_backward();
                                    getch();
                                    cls();
                                    break;

                            case 3: main();
                                    break;

                            default:printf("\n\n\n\n\n\n\n\t\t\t\tIncorrect input!!!");
                                    printf("\n\t\t\tPlease Enter Correct Key.");
                                    printf("\n\t\t\t\tOr Enter 3 to Main menu.\n");
                                    getch();
                                    cls();
                        }
                    }
                    getch();
                    cls();
					break;
					
			case 4: printf("\n\n\n\n\n\n\t\t\tEnter USN_no: ");
                    scanf("%d",&student_id);
                    cls();

                    position = search_students_record(student_id);
                    if(position == -1)
                    {
                        printf("\n\n\n\n\n\n\t\t\tThis USN_no is not in the Record.\n");
                        getch();
                        cls();
                    }
                    else
                    {
                        printf("\n\n\n\n\n\n\t\t\tThe Position of this Record is at Number %d.\n", position);
                        getch();
                        cls();
                    }
                    break;


            case 5: delete_students_record();
                    getch();
                    cls();
                    break;


            case 6: exit(1);
                    break;


            default:printf("\n\n\n\n\n\n\n\t\t\t\tIncorrect input!!!");
                    printf("\n\t\t\tenter correct key");
                    printf("\n\t\t\t\telse Enter 6 to Exit.\n");
                    getch();
                   cls();		
        }	
	}
}
