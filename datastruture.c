#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void login();
struct infoin
{
    int open;
    int id;
    char firstname[60];
    char lastname[60];
    char address[60];
    char passport_no[60];
}i,ir;
struct infol
{
    int open;
    int id;
    char firstname[60];
    char lastname[60];
    char address[60];
}l,lr;

char des[20],in[20],l_destination[5][20]={"Jodhpur","Banglore","Mumbai","Delhi","Chennai"};
char ides[20],iin[20],i_destination[10][20]={"LONDON","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","LOS ANGELES","Nigeria" };
int price,seat=500;
void login()
{
    int a=0,i=0;
    int id;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="AIRLINE";
    char pass[10]="abcd123";
    do
{
    printf(" \n                       ENTER USERNAME:-");
    scanf("%s", &uname);
    printf(" \n                       ENTER PASSWORD:-");
    while(i<10)
    {
        pword[i]=getch();
        c=pword[i];
        if(c==13) break;
        else printf("*");
        i++;
    }
    pword[i]='\0';
    i=0;
    if(strcmp(uname,user)==0 && strcmp(pword,pass)==0)
    {
    for(i=0; i<3; i++)
    {
        printf(".");
        Sleep(500);
    }
    printf("\n\n\n\t\t\t\tPress any key to continue...");
    getch();//holds the screen
    break;
    }
    else
    {
        printf("\n        SORRY !!!!  LOGIN IS UNSUCESSFUL");
        a++;
        getch();//holds the screen        
    }
}
    while(a<=2);
    if (a>2)
    {
        printf("\nSorry you have entered the wrong username and password for four times!!!");        
        getch();
        exit(0);
        }
        system("cls");    
}

void showi(char ap[10],char bp[10],int c)
 {
    system("cls");
   printf("Your Air Ticket is :");
       int r=12345;
     r++;
     FILE *fp;
     fp=fopen("interticket.txt","r");
    fseek(fp,0,SEEK_SET);
    while(fread(&ir,sizeof(ir),1,fp)!=EOF)
    {
    if(i.open==i.id)
     {
      printf("\n|Ticket No.%d                                Reference No. %d",i.id,r);
      printf("\n|_________________________________________________________________________");
      printf("\n|Passport No. :%d                                     ",i.passport_no);
      printf("\n|=========================================================================");
      printf("\n|Passenger Information :                                                  ");
      printf("\n|Name : %s %s                                     ",i.lastname,i.firstname);
      printf("\n|                                                                         ");
      printf("\n|Address :%s                                                   ",i.address);
      printf("\n|_________________________________________________________________________");
      printf("\n|flight Information :                                                  ");
      printf("\n|22 DECEMBER 2019                                                        ");
      printf("\n|BOING 747                     SPECIAL STATUS: NO                         ");
      printf("\n|_________________________________________________________________________");
      printf("\n|Depart : %s                                                    ",bp);
      printf("\n|Arrive :%s                                                       ",ap);
      printf("\n|*BAGGAGE allowed 40 Kilos                                                ");
      printf("\n|*Contact %s Airline to Confirm baggage allowance               ",bp);
      printf("\n|_________________________________________________________________________");
      break;
     }
 }
     fclose(fp);
     Sleep(5000);
}

void show(char ap[10],char bp[10],int cp)
 {
   system("cls");
   printf("Your Air Ticket is :");
       int r=12345,i;
     r++;
     FILE *fp;
     fp=fopen("localticket.txt","r");
    fseek(fp,0,SEEK_SET);
    while(fread(&lr,sizeof(lr),1,fp)!=EOF)
    {
    if(l.open==l.id)
     {
      printf("\n|Ticket No.%d                                Reference No. %d",l.id,r);
      printf("\n|_________________________________________________________________________");
      printf("\n|=========================================================================");
      printf("\n|Passenger Information :                                                  ");
      printf("\n|Name : %s %s                                     ",l.lastname,l.firstname);
      printf("\n|                                                                         ");
      printf("\n|Address :%s                                                   ",l.address);
      printf("\n|_________________________________________________________________________");
      printf("\n|flight Information :                                                  ");
      printf("\n|22 DECEMBER 2019                                                        ");
      printf("\n|BOING 747                     SPECIAL STATUS: NO                         ");
      printf("\n|_________________________________________________________________________");
      printf("\n|Depart : %s                                                    ",bp);
      printf("\n|Arrive :%s                                                       ",ap);
      printf("\n|*BAGGAGE allowed 40 Kilos                                                ");
      printf("\n|*Contact %s Airline to Confirm baggage allowance               ",bp);
      printf("\n|_________________________________________________________________________");
      break;
     }
 }
    fclose(fp);
	Sleep(5000);
}

void info_l(char d[20],char i[20],int p)
{
    char dest[30];
    char checkin[60];
    FILE *f;
    f=fopen("localticket.txt","a+");
    printf("\n******Please Share some information*******");
    printf("\nCheck-in Location : %s",i);
    printf("\nDestination : %s",d);
    printf("\nTicket price : %d",p);
    while(fread(&l,sizeof(l),1,f)==1){
        l.open++;
        l.id++;
    }
    printf("\nEnter your Firstname : ");
    scanf("%s",&l.firstname);
    printf("Enter your Lastname : ");
    scanf("%s",&l.lastname);    
    printf("Enter your Address:  ");
    scanf("%s",&l.address);
    seat--;
    fwrite(&l,sizeof(l),1,f);
    fclose(f);
    show(d,i,p);
}
void info_i(char a[20],char b[20],int c)
{
    char dest[30];
    char checkin[60];
    FILE *fp;
    fp=fopen("interticket.txt","a+");
    printf("\n******Please Share some information*******");
    printf("\nCheck-in Location : %s",b);
    printf("\nDestination : %s",a);
    printf("\nTicket price : %d",c);
    while(fread(&i,sizeof(i),1,fp)==1){
        i.open++;
        i.id++;
    }    
    printf("\nEnter your Firstname : ");
    scanf("%s",&i.firstname);
    printf("Enter your Lastname : ");
    scanf("%s",&i.lastname);    
    printf("Enter your Address:  ");
    scanf("%s",&i.address);
    printf("Enter the Passport Number: ");
    scanf("%s",&i.passport_no);
    seat--;
    fwrite(&i,sizeof(i),1,fp);
    fclose(fp);
    showi(a,b,c);
}
void local()
{
    int i,s,a;
   
    printf("\nTHESE ARE THE LOCAL PLACES AVAILABLE\n");
       
      for(i=0;i<5;i++)
    {
      printf("\n%d) %s",i+1,l_destination[i]);
    }
    printf("\nEnter ur choice of destination:");
    scanf("%d",&s);
    strcpy(des,l_destination[s-1]);
    printf("Enter ur choice of check-in:");
    scanf("%d",&s);
    strcpy(in,l_destination[s-1]);
    system("cls");
    printf("\nIn which AIRLINE you want to travel");
    printf("\n1)INDIGO ");
    printf("\n2)AIR INDIA");
    printf("\n3)SpiceJet ");
    printf("\n4)GoAIR");
    printf("\nEnter your choice: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        price=1100;
        break;
        case 2:
        price=1200;
        break;
        case 3:
        price=800;
        break;
        case 4:
        price=1300;
        break;
    }
    info_l(des,in,price);
}
void internatinal()
{
    int i,s,a;
   
    printf("\nTHESE ARE THE INTERNATIONAL PLACES AVAILABLE\n");
       
    for(i=0;i<10;i++)
    {
      printf("\n%d) %s",i+1,i_destination[i]);
    }
    printf("\nEnter ur choice of destination:");
    scanf("%d",&s);
    strcpy(ides,i_destination[s-1]);
    printf("Enter ur choice of check-in:");
    scanf("%d",&s);
    strcpy(iin,i_destination[s-1]);
    system("cls");
    printf("\nIn which AIRLINE you want to travel");
     printf("\n1)PIA ");
    printf("\n2)ARAB EMIRATES");
    printf("\n3)SpiceJet ");
    printf("\n4)QATAR AIRWAYS");
    printf("\nEnter your choice: ");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        price=2100;
        break;
        case 2:
        price=2500;
        break;
        case 3:
        price=2800;
        break;
        case 4:
        price=3800;
        break;
    }
    printf("\nType Your details correctly it cannot be updated in future\n");
    info_i(ides,iin,price);

}
void search()
{
    int n;
    int s_id,s=0;
    int si_id,si=0;
    printf("\nSearch Customer detail\n1) Local flight passenger\n2) International flight passenger\n Enter Choice: ");
    scanf("%d",&n);
    FILE *fp1;
    FILE *fp;
    switch(n)
    {
    case 1:
        printf("Enter Ticket no. to search");
        scanf("%d",&s_id);
        fp = fopen("localticket.txt","r");
        if(fp==NULL)
        {
            printf("\nFile Does Not Exist");
            exit(0);
        }  
        fseek(fp,0,SEEK_SET);
        while(fread(&lr,sizeof(lr),1,fp)!=EOF)
        {
            if(s_id==lr.id)
            {
                printf("\n\tFound");
                printf("\n\t%d\t%s\t%s\t%s",lr.id,lr.firstname,lr.lastname,lr.address);
                s++;
                exit(0);
            }
            else
            {
            	printf("Not found");
            	break;
			}
        }
        fclose(fp);
        break;
    case 2:
       
        printf("Enter Ticket no. to search");
        scanf("%d",&si_id);
       
        fp1 = fopen("interticket.txt","r");
        if(fp1==NULL)
        {
            printf("\nFile Does Not Exist");
            exit(0);
        }  
        fseek(fp1,0,SEEK_SET);
        while(fread(&ir,sizeof(ir),1,fp1)!=EOF)
        {
            if(si_id==ir.id)
            {
                printf("\n\tFound");
                printf("\n\t%d %s %s  %s  %s",ir.id,ir.firstname,ir.lastname,ir.address,ir.passport_no);
                si++;
                exit(0);
            }
            else
            {
            	printf("Not found");
            	break;
			}
        }
        fclose(fp1);
        break;
    }
   
}
void lcancel()
{
    FILE *fp,*ft;
    int lo;
    printf("Enter Ticket Number To be Deletd:");
    scanf("%d",&lo);
    fp=fopen("localticket.txt","r");
    ft=fopen("dellocal.txt","a");
    if(fp==NULL)
    {
        printf("File does not exist");
    }
    while(fread(&lr,sizeof(lr),1,fp)==1)
    {
        if(lr.id!=lo)
        {
            fwrite(&lr,sizeof(lr),1,ft);
        }
    }
    fclose(fp);
    fclose(ft);
    remove("localticket.txt");
    rename("dellocal.txt","localticket.txt");
    remove("dellocal.txt");
    printf("Record Deleted Successfully......");

}
void icancel()
{
    FILE *fp,*ft,*fr;
    int lo;
    printf("Enter Ticket Number To be Deleted:");
    scanf("%d",&lo);
    fp=fopen("interticket.txt","r");
    ft=fopen("delinter.txt","a");
    if(fp==NULL)
    {
        printf("File does not exist");
    }
    while(fread(&ir,sizeof(ir),1,fp)==1)
    {
        if(ir.id!=lo)
        {
            fwrite(&ir,sizeof(ir),1,ft);
        }
    }
    fclose(fp);
    fclose(ft);
    remove("interticket.txt");
    rename("delinter.txt","interticket.txt");
    remove("delinter.txt");
    fr=fopen("interticket.txt","r");
    printf("Check if ur booking is cancelled\n");
    printf("\nticket\tfirstname\tlastname\n");



fr = fopen("interticket.txt","r");
if(fr==NULL)
{
printf("\nFile Does Not Exist");
exit(0);
}
fseek(fr,0,SEEK_SET);
printf("\n\tID  \tName  ");
while(fread(&i,sizeof(i),1,fr))
{
printf("\n\t%d\t%s",i.id,i.firstname);
}
fclose(fr);
printf("\nEnter any key");
}
void cancel()
{
int n;
printf("1) Cancel local flight\n2) Cancel international flight\nEnter your choice: ");
scanf("%d",&n);
switch(n)
{
case 1:
lcancel();
break;
case 2:
icancel();
break;
default:
break;
}
}

void menu()
{
	system("cls");
	int n,c=0;
    while(c!=1)
    {

	    printf("\nDASHBOARD");
		printf("\n1) LOCAL FLIGHT BOOKING");
	    printf("\n2) INTERNATIONAL FLIGHT BOOKING");
	    printf("\n3) Search\n4) Cancel your Ticket");
	    printf("\n5) Update\n6) Sorted list\n");
		printf("Press any key to exit...!!!");
	    printf("\nEnter your choice: ");
	    scanf("%d",&n);
	    system("cls");
	   
	    switch(n)
	    {
	        case 1:
	        local();
	        break;
	        case 2:
	        internatinal();
	        break;
	        case 3:
	        search();
	        break;
	        case 4:
	        cancel();  
			break;
			case 5:
			update();
			break;          
			case 6:
			sort();
	        break;
			default:
	        c++;
			printf("\n\tHave a goood day....!!\n\n\t\tVist us Again");
	        exit(0);
	        break;
	    }
	}
}
void update()
	{
	 system("cls");
	 int tvl;
	 FILE *fpt;
	 FILE *fpo;
	 struct infol ptu;
	 int s, r, ch;
	 printf("Enter Ticket Number to Update:");
	 scanf("%d", &r);
	 //avl = avlid(r);
	 if (tvl == 0)
	 {
	  printf("ID %d is not Available in the file", r);
	 }
	 else
	 {
	  fpo = fopen("localticket.txt", "r");
	  fpt = fopen("TempFile.txt", "w");
	  while (fread(&ptu, sizeof(ptu), 1, fpo))
	  {
	   s = ptu.id;
	   if (s != r)
	    fwrite(&ptu, sizeof(ptu), 1, fpt);
	   else
	   {
	    printf("\n\t1. Update FirstName of ID %d", r);
	    printf("\n\t2. Update LastName of ID %d", r);
	    printf("\nEnter your choice:");
	    scanf("%d", &ch);
	    switch (ch)
	    {
	    case 1:
	     printf("Enter FirstName:");
	     scanf("%s", &ptu.firstname);
	     break;
	    case 2:
	     printf("Enter LastName : ");
	     scanf("%s", &ptu.lastname);
	     break;
	    default:
	     printf("Invalid Selection");
	     break;
	    }
	    fwrite(&ptu, sizeof(ptu), 1, fpt);
	   }
	  }
	  fclose(fpo);
	  fclose(fpt);
	  fpo = fopen("localticket.txt", "w");
	  fpt = fopen("TempFile.txt", "r");
	  while (fread(&ptu, sizeof(ptu), 1, fpt))
	  {
	   fwrite(&ptu, sizeof(ptu), 1, fpo);
	  }
	  fclose(fpo);
	  fclose(fpt);
	  printf("RECORD UPDATED");
	 }
}
void sort()
{
 struct infol ptu;
 system("cls");
 int a[20], count = 0, i, j, t, c;
 FILE *fpo;
 fpo = fopen("localticket.txt", "r");
 while (fread(&ptu, sizeof(ptu), 1, fpo))
 {
  a[count] = ptu.id;
  count++;
 }
 c = count;
 for (i = count-1; i>(-1); i--)
 {
  for (j = count; j>i ; j--)
  {
   if (a[i]<a[j])
   {
    t = a[i];
    a[i] = a[j];
    a[j] = t;
   }
  }
 }
printf("\n_____________________________________________________________________________\n");
printf("\n\tID\t\tFirstName\t\tLastName\n");
printf("_____________________________________________________________________________\n");
 count = c;
 for (i = 0; i<count; i++)
 {
  rewind(fpo);
  while (fread(&ptu, sizeof(ptu), 1, fpo))
  {
   if (a[i] == ptu.id)
    printf("\n\t%d\t\t%s\t\t%s",ptu.id,ptu.firstname,ptu.lastname);
  }

 }
}
void main()
{
    printf(" \n                     WELCOME TO AIRLINE RESERVATION SYSTEM\n");
    login();
    menu();
}
