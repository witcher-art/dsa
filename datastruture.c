#include<stdio.h>
#include<string.h>
#include<conio.h>
void login();
	void login()
	{
		char username[10],password[10];
		printf("\nEnter Username:");
		scanf("%s",&username);
		printf("Enter Password:");
		scanf("%s",&password);
		if(strcmp(username,"AIRLINE")==0 && strcmp(password,"abcd123")==0)
		{
			printf("Login Successfull !!");
			
		}
		else
		{
			printf("\nINVALID CREDENTIAL !!");
			login();
		}
	}
void main()
{
	
	printf("WELCOME TO AIRLINE RESERVATION SYSTEM");
	char des[20],in[20],l_destination[5][20]={"Jodhpur","Banglore","Mumbai","Delhi","Chennai"};
	char ides[20],iin[20],i_destination[10][20]={"LONDON","BERLIN","DUBAI","NEW YORK","BEIJING","PARIS","CAPE TOWN","TOKYO","LOS ANGELES","Nigeria" };
	int price,seat=500;

	login();
	system("cls");
	printf("DASHBOARD");
	int n;
	printf("\n1) LOCAL FLIGHT BOOKING");
	printf("\n2) INTERNATIONAL FLIGHT BOOKING");
	printf("\nEnter your choice: ");
	scanf("%d",&n);
	system("cls");
	 void showi(char first[20],char last[20],char add[20],char pn[20],char ap[10],char bp[10],int cp)
 { 
   system("cls");
   printf("Your Air Ticket is :");
   int t=1;
   int r=12345;
  
  printf("\n|Ticket No.%d                                Reference No. %d",t,r);
  printf("\n|_________________________________________________________________________");
  printf("\n|Passport No. :%d                                     ",pn);
  printf("\n|=========================================================================");
  printf("\n|Passenger Information :                                                  ");
  printf("\n|Name : %s %s                                     ",last,first);
  printf("\n|                                                                         ");
  printf("\n|Address :%s                                                   ",add);
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

}

void show(char first[20],char last[20],char add[20],char ap[10],char bp[10],int cp)
 { 
   system("cls");
   printf("Your Air Ticket is :");
   int t=1;
   int r=12345;
  
  printf("\n|Ticket No.%d                                Reference No. %d",t,r);
  printf("\n|_________________________________________________________________________");
  printf("\n|=========================================================================");
  printf("\n|Passenger Information :                                                  ");
  printf("\n|Name : %s %s                                     ",last,first);
  printf("\n|                                                                         ");
  printf("\n|Address :%s                                                   ",add);
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

}
	
	void info_l(char d[20],char i[20],int p)
	{
		char firstname[60];
 		char lastname[60];
		char address[60];
 		char dest[30];
		char checkin[60];
		
		printf("\n******Please Share some information*******");
		printf("\nCheck-in Location : %s",i);
		printf("\nDestination : %s",d);
		printf("\nTicket price : %d",p);
		printf("\nEnter your Firstname : ");
		scanf("%s",&firstname);
   		printf("Enter your Lastname : ");
		scanf("%s",&lastname);	    
		printf("Enter your Address:  ");
		scanf("%s",&address);
		seat--;
		show(firstname,lastname,address,d,i,p);
	}
	void info_i(char a[20],char b[20],int c)
	{
		char firstname[60];
 		char lastname[60];
		char address[60];
		char passport_no[60];
 		char dest[30];
		char checkin[60];
		
		printf("\n******Please Share some information*******");
		printf("\nCheck-in Location : %s",b);
		printf("\nDestination : %s",a);
		printf("\nTicket price : %d",c);
		printf("\nEnter your Firstname : ");
		scanf("%s",&firstname);
   		printf("Enter your Lastname : ");
		scanf("%s",&lastname);	    
		printf("Enter your Address:  ");
		scanf("%s",&address);
		printf("Enter the Passport Number");
		scanf("%s",&passport_no);
		seat--;
		showi(firstname,lastname,address,passport_no,a,b,c);
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
		info_i(ides,iin,price);
		
	}
	switch(n)
	{
		case 1:
			local();
			break;	
		
		case 2:
			internatinal();
			break;
	}
	
}
