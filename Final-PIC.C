/*  Header Files  */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

//----------------Structure--------------------2
struct hotel {
  int r_id;
  char name[20];
  char lname[20];
  char r_type[15];
  int r_no;
  int n_d;
  long amt;
}s[100]={{1,"Tejas","Nawale","Deluxe",103,3,21000},
	       {2,"Mohit","Mhatre","King",203,4,12000},
	       {3,"Yash","Mhatre","Suite",301,2,18000}};

//----------------Function Declaration------------------------
void display();
void search();
void del();
void head();
void add();
void about();
void res();

//------------------------void main----------------------------
void main()
{
  head();
}

//------------------------functions 1----------------------------
void add()
{
  int z;
    system("cls");
    for(z=0; z<100; z++)
    {
      if( s[z].r_id == 0 )
      {
        printf("\n-------------------------------- Enter details ---------------------------------\n");
        printf(" \n                   First & Last name : ");
	      fflush(stdin); scanf("%s %s",s[z].name,s[z].lname);
	      res();
      }
    }
}

// function 2
void head()
{
    int choice;
    system("cls");
	printf("\n\n                             HOTEL RESERVATION SYSTEM!               \n");
	printf("     *=======================================================================*\n");
	printf(" \n             |              1   :  DISPLAY BOOKING                |       \n");
	printf(" \n             |              2   :  SEARCH ENTRIES                 |       \n");
	printf(" \n             |              3   :  RESERVATION                    |       \n");
	printf(" \n             |              4   :  CANCEL ENTRIES                 |      \n");
	printf(" \n             |              5   :  ABOUT PROJECT                  |      \n");
	printf(" \n             |              6   :  EXIT                           |         \n");
	printf("\n  *=========================================================================*");
	printf(" \n                            Enter The Choice : ");
	fflush(stdin); scanf("%d",&choice);
	system("cls");
	switch(choice)
	{

	    case 1 : display();
		     break;
	    case 2 : search();
		     break;
	    case 3 : add();
		     break;
	    case 4 : del();
		     break;
	    case 5 : about();
		     break;
	    case 6 : printf("\n Exit");
		     exit(0);
		     break;
	    default : printf("Wrong Input!! Try Again.");
		      head();
		      break;
	}
}
// function 3
void display()
{
  int j;
    system("cls");
    printf("\n\n                             HOTEL RESERVATION SYSTEM!               \n");
    printf("*==============================================================================*     \n");
    printf(" \n            |                     DISPLAY ENTRIES                |       \n");
    printf("\nSr.no Name\t\tRoom Type\tRoom Number\tNo.ofPerson\tAmt\n------------------------------------------------------------------------------\n");
    for (j = 0; j < 100; j++)
    {
      if( s[j].r_id != 0 )
      {
      printf("\n %d    %s %s\t  %s  \t  %d\t\t  %d\t\t%ld",
      s[j].r_id, s[j].name, s[j].lname, s[j].r_type, s[j].r_no, s[j].n_d, s[j].amt);
      printf("\n");
      }
    }
    printf("\n\n*==============================================================================*");
    printf(" \n                              Press Enter to Go back ");
    getch();
    head();
}
// function 4
void search()
{
    int choice1 , i;
    long detail;

    char g[50];
   

    system("cls");

	printf("\n\n                             HOTEL RESERVATION SYSTEM!                  \n");
	      printf("*==============================================================================*     \n");
	      printf(" \n            |              1   :  GLOBAL SEARCH                         |       ");
	      printf(" \n            |              2   :  Search by SERIAL NO                   |       ");
	      print(" \n            |              3   :  Search by ROOM TYPE                   |       ");
	      printf(" \n            |              4   :  Search by ROOM NUMBER                 |       ");
	      printf(" \n            |              5   :  Search by CLIENT NAME                 |       ");
	      printf(" \n            |              6   :  Exit                                  |       ");
	      printf("\n         ----------------------------------------------------------------------");
	      printf(" \n                              Enter The Choice : ");
	fflush(stdin); scanf("%d",&choice1);
        system("cls"); 
        switch(choice1)
        {
            case 1 : printf("\n\n                             HOTEL REAERVATION SYSTEM!               \n");
	                   printf("*==============================================================================*     \n");
                         printf(" \n             |                     GLOBAL SEARCH                  |       \n");
                         printf("\n                                Search : ");
                         scanf("%s",g);
                         printf("\n");
                         printf("\n Sr.no\t Name\t\tRoom Type\tNo. of people\tRoom No.\tAmt\n------------------------------------------------------------------------------\n");
                         for(i=0; i<100; i++)
                         {
                          detail = atol(g);
                          if(((strcmpi((s[i].name),g)==0) || (strcmpi((s[i].lname),g)==0) || (detail == (s[i].r_no))|| (detail == (s[i].n_d)) || (strcmpi((s[i].r_type),g)==0) || (detail == (s[i].amt))) && (s[i].r_id != 0))
                          {
                            printf("\n %d    %s %s\t  %s  \t  %d\t\t  %d\t\t%ld",s[i].r_id, s[i].name, s[i].lname, s[i].r_type, s[i].n_d, s[i].r_no, s[i].amt);
                          }
                         }
                         printf("\n\n*==============================================================================*"          );
                         printf(" \n                                Press Enter to Go back ");
                          
                      break;
                     
            case 2 : 	   printf("\n\n                             HOTEL RESERVATION SYSTEM!               \n");
	                       printf("*==============================================================================*     \n");
                         printf(" \n             |                Search by SERIAL NO.               |       \n");
                         printf("\n                                Search : ");
                         fflush(stdin); scanf("%ld",&detail);
                         printf("\n");
                         printf("\nSr.no Name\t\tRoom No.\tNo.of People\t Roomtype\tAmt\n------------------------------------------------------------------------------\n");
                         for(i=0; i<100; i++)
                         { 
                          if((s[i].r_id)==detail)
                          { 
                            printf("\n %d    %s %s\t  %s  \t  %d\t\t  %d\t\t%ld",s[i].r_id, s[i].name, s[i].lname, s[i].r_type, s[i].n_d, s[i].r_no, s[i].amt);
                          }
                         }
                         printf("\n\n*==============================================================================*"          );
                         printf(" \n                                Press Enter to Go back ");

                         break;

            case 3 :   	 printf("\n\n                             HOTEL RESERVATION SYSTEM!               \n");
	                       printf("*==============================================================================*     \n");
                         printf(" \n             |                  Search by ROOM TYPE             |       \n");
                         printf("\n                                Search : ");
                         scanf("%s",g);
                         printf("\n");
                         printf("\nSr.no Name\t\tRoom No.\tNo.of People\t Roomtype\tAmt\n------------------------------------------------------------------------------\n");
                         for(i=0; i<100; i++)
                         {
                            

                          if(strcmpi((s[i].r_type),g)==0)
                          { 
                            printf("\n %d    %s %s\t  %s  \t  %d\t\t  %d\t\t%ld",s[i].r_id, s[i].name, s[i].lname, s[i].r_type, s[i].n_d, s[i].r_no, s[i].amt);
                          }
                         }
                         printf("\n\n*==============================================================================*"          );
                         printf(" \n                                Press Enter to Go back ");

                         break;

            case 4 : 	   printf("\n\n                             HOTEL RESERVATION SYSTEM!               \n");
	                       printf("*==============================================================================*     \n");
                         printf(" \n             |                  Search by ROOM NUMBER             |       \n");
                         printf("\n                                Search : ");
                         scanf("%s",g);
                         printf("\n");
                         printf("Sr.no Name\t\tRoom No.\tNo.of People\t Roomtype\tAmt\n------------------------------------------------------------------------------\n");
                         for(i=0; i<100; i++)
                         {
                           detail=atoi(g);
                          if(s[i].r_no == detail)
                          { 
                            printf("\n %d    %s %s\t  %s  \t  %d\t\t  %d\t\t%ld",s[i].r_id, s[i].name, s[i].lname, s[i].r_type, s[i].n_d, s[i].r_no, s[i].amt);
                          }
                         }
                         printf("\n\n*==============================================================================*"          );
                         printf(" \n                                Press Enter to Go back ");

                         break;
                         
            case 5 : 	   printf("\n\n                             HOTEL RESERVATION SYSTEM!               \n");
	                       printf("*==============================================================================*     \n");
                         printf(" \n             |                  Search by CLIENT NAME             |       \n");
                         printf("\n                                Search : ");
                         fflush(stdin); scanf("%s",g);
                         printf("Sr.no Name\t\tRoom No.\tNo.of People\t Roomtype\tAmt\n------------------------------------------------------------------------------\n");
                         for(i=0; i<100; i++)
                         {
                          
                          if(strcmpi((s[i].name),g)==0)
                          { 
                            printf("\n %d    %s %s\t  %s  \t  %d\t\t  %d\t\t%ld",s[i].r_id, s[i].name, s[i].lname, s[i].r_type, s[i].n_d, s[i].r_no, s[i].amt);
                          }
                          else if (strcmpi((s[i].lname),g)==0)
                          { 
                            printf("\n %d    %s %s\t  %s  \t  %d\t\t  %d\t\t%ld",s[i].r_id, s[i].name, s[i].lname, s[i].r_type, s[i].n_d, s[i].r_no, s[i].amt);
                          }
                         }
                         printf("\n\n*==============================================================================*"          );
                         printf(" \n                                Press Enter to Go back ");

                         break;

            
            case 6 : head();
                     break;
            default : printf("Wrong Input!! Try Again");
                      search();
                      break;
        }
        getch();
        head();
        
}

// function 5
void del()
{
  int pos,lar,i,m,j;
  char a;
    system("cls");
    printf("\n");
    printf("\nSr.no Name\t\tRoom Type\tRoom Number\tNo.of Person\tAmt\n------------------------------------------------------------------------------\n");
     for (j = 0; j < 100; j++)
    {
      if( s[j].r_id != 0 )
      {
      printf("\n %d    %s %s\t%s\t\t  %d\t\t %d\t\t%ld",s[j].r_id, s[j].name, s[j].lname, s[j].r_type, s[j].r_no, s[j].n_d, s[j].amt);
      printf("\n");
      }
    }
  printf("\n\n                        Enter Serial Number to Delete : ");
  fflush(stdin); scanf("%d",&pos);

  for (m = 0; m < 100; m++)
  {
    (((s[0].r_id) < (s[m].r_id))) ? (lar = s[m].r_id) : (a = '0');
  }
  if(pos <= lar)
  {
    printf("\nDo you want to delete the following entry: ");
    printf("\n\n %d    %s %s\t%s\t  %d\t\t %d\t\t%ld\n\n yes(Y) or no(N): ",s[pos-1].r_id, s[pos-1].name, s[pos-1].lname, s[pos-1].r_type, s[pos-1].r_no, s[pos-1].n_d, s[pos-1].amt);
    fflush(stdin); scanf("%c",&a);
   if(a=='y' || a=='Y')
   {
	for (i = (pos - 1); i < 100; i++)
      {
	s[i] = s[i+1];
	if( s[i].r_id != 0 )
	{
	  s[i].r_id = ((s[i+1].r_id)-1);
	}
	if(i>=lar-1)
	{
	  s[i].r_id=0;
	}
      }
      printf(" \n                                Entry Deleted");
    }
  }
    else
    printf(" \n                             Deletion is Not Posible");
    printf("\n\n*==============================================================================*");
    printf(" \n                             Press Enter to Go back ");
    getch();
    head();
}
// funtion 6
void about()
{
  printf("\n \n                                    ABOUT THE MICROPROJECT    \n \n                                      ");

   printf("\n        THE MICROPROJECT IS RELATED TO HOTEL RESERVATION SYSTEM                           ");
   printf(" \n       WE HAVE CREATED THIS MICRO PROJECT USING STRUCTURE, ARRAY,FUNCTIONS,             ");
  printf(" \n        IF-ELSE STATEMENTS,LOOPS,SWTICH-CASE STATEMENTS AND VARIOUS OPERATERS.          ");
  printf("\n         THIS PROJECT BASICALLY SHOW HOW A HOTEL RESERVATION IS DONE BY USING C            ");

  printf("\n\n              *========================================================================================*"              );
  printf("\n");
    printf(" \n                                           Press Enter to Go back                                             ");
    getch();
    head();

}
// funtion 7
void res()
{
  int z,no=0;
  system("cls");
  
   printf("\n-------------------------------- Enter details ---------------------------------\n");
    printf(" \n                   First & Last name :%s %s ",s[z].name,s[z].lname);
	  printf(" \n                   Enter your Room Type (king/deluxe/suite): ");
     fflush(stdin); scanf("%s",s[z].r_type);
    if(strcmpi(s[z].r_type,"king")==0)
    {
      printf("\n                   Enter the Room no between 201-300:   ");
    }
    else if(strcmpi(s[z].r_type,"deluxe")==0)
    {
       printf("\n                  Enter the Room no between 101-200:  ");
    }
    else if(strcmpi(s[z].r_type,"suite")==0)
    {
       printf("\n                  Enter the Room no between 301-400:   ");
    }
    else
    {
      printf("\n                   Wrong Input");
      system("cls");
      res();
    }
    
	  printf(" \n                   Enter  Room No. : ");
	  fflush(stdin); scanf("%d",&s[z].r_no);
	  printf(" \n                   Enter number of Days : ");
	  fflush(stdin); scanf("%d",&no);
    (s[z].n_d)=no;
  
    if(strcmpi(s[z].r_type,"king")==0)
        s[z].amt = (no*3000);
    else if(strcmpi(s[z].r_type,"deluxe")==0)
            s[z].amt = (no*7000);
          else if(strcmpi(s[z].r_type,"suite")==0)
                  s[z].amt = (no*9000);

	  (s[z].r_id) = (z+1);
	  printf(" \n             |                YOUR RESERVATION IS DONE                    |       \n");
	  printf("*==============================================================================*     \n");
	  printf("\n                                Press Enter to Go back \n");
	  getch();
	  head();
}
