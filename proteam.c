#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<process.h>
#include<string.h>
 
 /*All the variable declarations are here*/
 int i,u,nump,numu,x,x1,currprice,val1,val2,cash;
 char c,ch,bidinc,pass1[9]="\0";
 /*All the function declarations are here*/
 
 void menu();
 void manager();
 void signin();
 void forgot(int);
 void signup();
 void signout();
 void help();
 void statistics();
 void profile();
 void teamman();
 void bid2();
 void check(); 
 void Biddings();
 void un(int a,int b);
 void loan();
 void release();
 
 /*All the data structure declarations are here*/
 
 struct player  
{
	 char name[30];
	 char country[20];
	 char type[10];
	 char club[10];
	 char ranjiteam[10];
	 char matches[5];
	 char iplmatches[5];
	 char score[10];
	 char iplscore[10];
	 char high[10];
	 char strike[10];
	 char average[10];
	 char ctst[10];
	 char baseprice[10];
	 char avail[5]; 
}a[150];

 struct user
 {
 	 char uname[10];
 	 char pass[9];
 	 char name[20];
 	 char tname[15];
 	 char srtname[5];
 	 char wallet[10];
 	 char ques[5];
 	 char ans[20];
 	 char totalpl[5];
 	 char foreignpl[5];
 }p[20];
 
 /* main function starts here*/
  main()
    { 
	
	FILE *fp;                       // opening the players file
  fp=fopen( "players.lul","r");
  fseek(fp,0,0);
  i=0;
   while(!feof(fp))  
   {
    fscanf(fp,"%s",a[i].name);
	fscanf(fp,"%s",a[i].country);
	fscanf(fp,"%s",a[i].type);
	fscanf(fp,"%s",a[i].ranjiteam);
	fscanf(fp,"%s",a[i].matches);
	fscanf(fp,"%s",a[i].iplmatches);
	fscanf(fp,"%s",a[i].score);
	fscanf(fp,"%s",a[i].iplscore);
	fscanf(fp,"%s",a[i].high);
	fscanf(fp,"%s",a[i].strike);
	fscanf(fp,"%s",a[i].average);
	fscanf(fp,"%s",a[i].ctst);
	fscanf(fp,"%s",a[i].baseprice);
	fscanf(fp,"%s",a[i].avail);
	i++;
   } 
  nump=i-1;

  fclose(fp);
   	 system("color 70");/*0 = Black 1 = Blue 2 = Green 3 = Aqua 4 = Red 5 = Purple 6 = Yellow 7 = White 8 = Gray 9 = Light Blue A = Light Green B = Light Aqua
                         C = Light Red D = Light Purple E = Light Yellow F = Bright White*/
	 printf("\n\n\n\n\t\t\t\t\t\t\t\t***ProTeam Manager***");
	 un(29,8);
   	 printf("\n\n\n\n\n\t\t\t\t\t\t\t\tLOADING PROFILES...");
	 Sleep(1000);
   	 system("color 70");
	 system("cls");
   	 printf("\n\n\n\n\t\t\t\t\t\t\t\t***ProTeam Manager***");
   	 un(29,8);
	printf("\n\n\n\n\n\t\t\t\t\t\t\t\tLOADING PLAYERS...");
	 Sleep(1000);
   	 system("color 70");
	 system("cls");
   	 printf("\n\n\n\n\t\t\t\t\t\t\t\t***ProTeam Manager***");
   	un(29,8);
	    printf("\n\n\n\n\n\t\t\t\t\t\t\t\tLOADING DATA...");
	 Sleep(1000);
	 system("color 70");
   	 system("cls");
	 printf("\n\n\n\n\t\t\t\t\t\t\t\t***ProTeam Manager***");
   	 un(29,8);
		printf("\n\n\n\n\n\t\t\t\t\t\t\t\tINITIALIZING...");
	 Sleep(1000);
	 
	    	 
   	 menu();
 }
	 void menu()
	  {	  system ("cls");
	  printf("\n\n\tMain Menu");
	  un(11,1);
     printf("\n\n\n\n\n\t\t1. Sign-in\t\t2. Sign-up\n\n\t\t3. Help\t\t\t4.Exit");
	 printf("\n\n\n\nEnter your choice : ");
	 ch=getch();
	 switch (ch)
	 {
	  case '1':
	     {
		 system("cls");
	     signin();
		 Sleep(750);
		 menu(); 
	    }
     case '2':
	     {system("cls");
	     signup();
	      menu();
		  }
	  case '3':
	  { system("cls");
	    printf("Help");
	    help();
	    Sleep(750);
	     menu();
	   } 
	  case '4':
	      {system("cls");
		  printf("\n\n\n\n\n\n\n\n\t\t\t\t\tBYE BYE !!!!");
		  Sleep(750);
		  system("cls");
		   exit(0);
	      }
      default : {printf(":::WRONG INPUT TRY AGAIN:::");
             Sleep(750);
             menu();
	        }
   } }
   
   void signin()
    {
    	 system("cls");
    	   
		   FILE * dbase;                        //opening the user file
   	 dbase=fopen("USER.lul","a+");
   	 fseek(dbase,0,0);
   	 i=1,numu;
   	 
		while(!feof(dbase))  
   {
    fscanf(dbase,"%s",p[i].uname); 
    fscanf(dbase,"%s",p[i].pass);
	fscanf(dbase,"%s",p[i].name);
	fscanf(dbase,"%s",p[i].tname); 
	fscanf(dbase,"%s",p[i].srtname);
	fscanf(dbase,"%s",p[i].wallet);
	fscanf(dbase,"%s",p[i].ques);
	fscanf(dbase,"%s",p[i].ans);
	fscanf(dbase,"%s",p[i].totalpl);
	fscanf(dbase,"%s",p[i].foreignpl);
	i++; 
   }
   fclose(dbase); 
   numu=i;
   
    	 printf("Sign-In");
    	 un(7,0);
		 printf("\n\n\n\n\n\t\tUser Name : ");
    	 scanf("%s",&p[0].uname);
    	 printf("\n\t\tPassword : ");
    	  i=0;
    	  
        while( (c=getch())!= 13)
		{
         p[0].pass[i] = c;
         printf("*");
         i++;
        }
    for(i=1;i<numu;i++)
      { 
       if(!(strcmp(p[0].uname,p[i].uname)))
           { 
				 u=i;      
           if(!(strcmp(p[0].pass,p[i].pass)))
               { u=i;
                 manager();
                        
	           }
	     	   else
				{
				printf("\n\n\t\t\t\tFORGOT PASSWORD?(y/n) : ");
         		ch=getch();
   	 			if(ch=='y')
      			forgot(i);
                }
           }
      }
           {
		       printf("\n\n\n\t\t\t\t!!!RECORD NOT FOUND!!!");
		       Sleep(1000);
			   menu();
			}
			}

	void forgot(int j)
	 { char choice;
	 	 system("cls");
	 	 printf("FORGOT PASSWORD");
		  
		  printf("\n\n\n\tWhat was ur question? ");
	 	  printf("\n\n\t\t1.Where do you want to retire?");
	 	  printf("\n\n\t\t2.Favourite flower?");
	      printf("\n\n\t\t3.In what year was your father born?");
	      printf("\n\n\t\t4.What time of the day were you born? (hh:mm)");
	      printf("\n\n\t\t5.What was the make and model of your first car?");
	      choice=getch();
	      sprintf(p[0].ques,"%c",choice);
	      printf("\n\n\t\tAnswer in single word : ");
	      scanf("%s",p[0].ans);
	      
	      
	      if(!strcmp(p[0].ques,p[j].ques))
	          if(!strcmp(p[0].ans,p[j].ans))
	            { i=0;
	              strcpy(p[j].pass,"");
		  		 printf("\nEnter ur new password :");
	             while( (c=getch())!= 13)
		             {
                         p[j].pass[i] = c;
                         printf("*");
                         i++;
                    }
		        printf("\nPress any key to continue");
			   getch();
	 	       manager();
	             }
	       Sleep(750); 
		   printf("User name /password combination doesnt match");
	       menu();      
		         
      }
	void signup()
	 {  
	     char choice; 
	 	 system("cls");
    	 printf("Sign-Up");
		 un(7,0);
		 printf("\t\t\t\t\t\tStep 1 of 3 : ACCOUNT");
    	 printf("\n\n\n\n\t\tEnter A User Name : ");
    	 scanf("%s",&p[0].uname);
    	 
		 printf("\n\n\t\tEnter A Password : ");
    	 i=0;
    	  
        while( (c=getch())!= 13)
		{
         p[0].pass[i] = c;
         printf("*");
         
         i++;
        }
    	printf("\n\n\t\tEnter The Password Again : ");
    	  i=0;
        while( (c=getch())!= 13)
		{
         pass1[i] = c;
         printf("*");
         
		 i++;
        } 
	 
	 
	 if(strcmp(p[0].pass,pass1)!=0)
	   {
	    signup();
		
	   }
	 else printf("\n\n\n\n\t\t\t\tPress any key to proceed to next step");
	 
	 getch();
	 
	 system("cls");
     
	 printf("Sign-Up");
	 un(7,0);
	 printf("\t\t\t\t\t\tStep 2 of 3 : PROFILE ");
	 printf("\n\n\n\n\t\tEnter Your Name : ");
	 scanf("%s",&p[0].name);
	  
	 printf("\n\n\t\tEnter Your Team Name : ");
	 scanf("%s",&p[0].tname);
	  
	 printf("\n\n\t\tEnter Your team code : ");
	 scanf("%s",&p[0].srtname);
     
	 system("cls");
	 printf("Sign-Up");
	 un(7,0);
	 printf("\t\t\t\t\t\tStep 3 of 3 : PROFILE ");
	  
	 printf("\n\n\n\n\t\tSelect any one question : ");
	 printf("\n\n1.Where do you want to retire?");
	 printf("\n\n2.Favourite flower?");
	 printf("\n\n3.In what year was your father born?");
	 printf("\n\n4.What time of the day were you born? (hh:mm)");
	 printf("\n\n5.What was the make and model of your first car?");
	 choice=getch();
	 sprintf(p[0].ques,"%c",choice);
	 printf("\n\nAnswer in single word : ");
	 scanf("%s",p[0].ans);
	 
	 FILE *dbase;                        //opening the user file
   	 dbase=fopen("USER.lul","a+");
  
	  fprintf(dbase,"\n%s",p[0].uname);
	  fprintf(dbase," %s",p[0].pass);
	  fprintf(dbase," %s",p[0].name);
	  fprintf(dbase," %s",p[0].tname);
	  fprintf(dbase," %s",p[0].srtname);
	  fprintf(dbase," 200");
	  fprintf(dbase," %s",p[0].ques);
	  fprintf(dbase," %s",p[0].ans);
      fprintf(dbase," 0");
	  fprintf(dbase," 0");	 
	 fclose(dbase); 
    }
    
   void manager()
    {
    	char choice;
		 system ("cls");
     printf("\n\n\t\t\tManager Mode");
     un(15,3);
	 printf("\n\n\n\n\n\t\t1. My Profile \t\t2. Team Manager\n\n\t\t3. Statistics\t\t4. Sign-Out");
	 printf("\n\n\n\nEnter your choice : ");
	 choice=getch();
	 switch(choice)
	 {
	 
       case '1':
	   	     {
		 system("cls");
	     profile();
		 Sleep(750);
		 manager(); 
	     
		 }
     case '2':
	 	     {system("cls");
	     teamman();
	     
		  manager();
		  }
	 case '3':
	  { system("cls");
	    statistics();
	     getch();
		
		manager();
	   } 
	 case '4':
	      {
		  	  system("cls");
		  	  printf("\n\n\t\tSIGNING OUT...");
				Sleep(750);
				signout();
			  	menu();
	      }
	      
	  
     default : {printf(":::WRONG INPUT TRY AGAIN:::");
             Sleep(750);
             manager();
	        }
	    }
	 }
void statistics()
 {
 	 printf("\n\nSTATISTICS");
 	 un(10,0);
 	  printf("\n\n");
  for(i=0;i<nump;i++)
   {
      
    printf(" %d. %s\n",i+1,a[i].name);
	 
   }
  
   printf("\n\n\nEnter the serial number to see details : ");
   scanf("%d",&i);
   i--;
   if(i>=nump)
     {
	 printf("NO SUCH ENTRY");
     statistics();
     }
   else{
        system("cls");
        printf("\t\nNAME");
		if(stricmp(a[i].country,"INDIA"))
		    printf(" : %s  #Foreign",a[i].name);
		else
		    printf(" : %s #Local",a[i].name);
 	    
 	    printf("\t\n\nCountry");
		printf(" : %s",a[i].country);
		printf("\t\n\nType");
		printf(" : %s",a[i].type);
		printf("\t\n\nRanji Taem");
		printf(" : %s",a[i].ranjiteam);
		printf("\t\n\nMatches");
		printf(" : %s",a[i].matches);
		printf("\t\n\nIPL matches");
		printf(" : %s",a[i].iplmatches);
		printf("\t\n\nT20 Runs");
		printf(" : %s",a[i].score);
		printf("\t\n\nIPL runs");
		printf(" : %s",a[i].iplscore);
		printf("\t\n\nHigh Score");
		printf(" : %s",a[i].high);
		printf("\t\n\nStrike Rate");
		printf(" : %s",a[i].strike);
		printf("\t\n\nAverage");
		printf(" : %s",a[i].average);
		printf("\t\n\nCatch/Stumps");
		printf(" : %s",a[i].ctst);
        printf("\t\n\nBase Price");
		printf(" : %s",a[i].baseprice);
	    printf("\t\n\nAvailability");
	    printf(" : %s",a[i].avail);
	   }
 }
 
 void profile()
 
 {      char chp;
        printf("\n\t\tMy Profile");
        un(12,2);
		printf("\n\n\n\n\n\t\t1.User details \t\t2.Team details\n\n\t\t3.Back");
 	 	chp=getch();
 	 	system("cls");
	    switch(chp)
	    {
		case '1':{
		printf("\nUSER DETAILS :->");
		un(15,0);
		printf("\n\n\n\t\tUSER ID : ");
		printf("%s",p[u].uname);
		printf("\n\n\n\t\tNAME : ");
		printf("%s",p[u].name);
		printf("\n\n\n\t\tTEAM NAME : ");
		printf("%s",p[u].tname);
		printf("\n\n\n\t\tSHORT TEAM NAME : ");
		printf("%s",p[u].srtname);
		printf("\n\n\n\t\tAVAILABLE CASH : ");
		printf("%s$",p[u].wallet);		 
        printf("\n\n\n\t\tTOTAL NO. OF PLAYERS : ");
		printf("%s",p[u].totalpl);		 
        printf("\n\n\n\t\tTOTAL NO. OF FOREIGN PLAYERS : ");
		printf("%s",p[u].foreignpl);		 
        
		getch();
		system("cls");
		profile();
	    }
		case '2':{
			while(1){	
				system("cls"); 
		printf("My Profile");
 	 	un(10,0); printf("\n\n\n");
		  printf("\nTEAM DETAILS :->");
		  
		  printf("\n\n");

		 for(i=0;i<nump;i++)
		   if(!(stricmp(a[i].ranjiteam,p[u].srtname)))
		   
		   {
		    
		    printf("\n\n%d : %s",i+1,a[i].name);
 	       }
	        printf("\n\n Enter player number to see detail or 0 to Exit : ");
	       			int i;
			scanf("%d",&i); 
			if(i)
			{ i=i-1;
			system("cls");
			printf("\t\nNAME");
		
		if(stricmp(a[i].country,"INDIA"))
		    printf(" : %s  #Foreign",a[i].name);
		else
		    printf(" : %s #Local",a[i].name);
 	    
		
 	    printf("\t\n\nCountry");
		printf(" : %s",a[i].country);
		printf("\t\n\nType");
		printf(" : %s",a[i].type);
		printf("\t\n\nRanji Taem");
		printf(" : %s",a[i].ranjiteam);
		printf("\t\n\nMatches");
		printf(" : %s",a[i].matches);
		printf("\t\n\nIPL matches");
		printf(" : %s",a[i].iplmatches);
		printf("\t\n\nT20 Runs");
		printf(" : %s",a[i].score);
		printf("\t\n\nIPL runs");
		printf(" : %s",a[i].iplscore);
		printf("\t\n\nHigh Score");
		printf(" : %s",a[i].high);
		printf("\t\n\nStrike Rate");
		printf(" : %s",a[i].strike);
		printf("\t\n\nAverage");
		printf(" : %s",a[i].average);
		printf("\t\n\nCatch/Stumps");
		printf(" : %s",a[i].ctst);
        printf("\t\n\nBase Price");
		printf(" : %s",a[i].baseprice);
	    getch();
			}
		else	
			{
			system("cls");
			profile();
			}}
	}
	case '3':manager();
		} 		getch();
 }

 void bid2()
{
	
   time_t t1;
     
   /*printf("\n\n\n\t\t\tThe Randomly Generated Number is:");
   
    Intializes random number generator 
   */
   srand((unsigned) time(&t1));
   x1= (rand() % 2);

    /*Print 1 random number from 0 to 1 
    {
      printf("%d\n", x1);
	}
	*/
if(x1==0)
{
printf("\n\n\n\t\t\tcomputer bids!!!");
currprice++;
}
else
{
	printf("\n\n\n\t\t\tcomputer doesn't bid!!");
	
}
}


void Biddings()
{  
   system("cls");
   check();
   time_t t;
   printf("The Randomly Generated Number is:");
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));
   x= (rand() % 112);

   /* Print 1 random number from 0 to 125 */
   {
      printf("%d\n", x);
   }
   
	char answer,bidans;
	int bidinc=1,foreign,total;
	if(!stricmp(a[x].avail,"y"))
	{
	
	printf("\nHere's the Statistics of the current player-");
	printf("\n\n");
	printf("\nName - %s",a[x].name);
	printf("\nCountry - %s",a[x].country);
	printf("\nType - %s",a[x].type);
	printf("\nRanji Team - %s",a[x].ranjiteam);
	printf("\nMatches - %s",a[x].matches);
	printf("\nIPL Matches - %s",a[x].iplmatches);
	printf("\nScore - %s",a[x].score);
	printf("\nIPL Score - %s",a[x].iplscore);
	printf("\nBest - %s",a[x].high);
	printf("\nStrike Rate - %s",a[x].strike);
	printf("\nAverage - %s",a[x].average);
	printf("\nCatches/Stumps - %s",a[x].ctst);
	printf("\nBase Price - %s",a[x].baseprice);
	val1=atoi(a[x].baseprice);
    currprice=val1;
	printf("\n\n\nDo you want to buy the player(y/n)????");
	answer=getch();
	cash=atoi(p[u].wallet);
	foreign=atoi(p[u].foreignpl);
	total=atoi(p[u].totalpl); 
	 
	if(answer=='y')
	{   system("cls");   
	  if(foreign>=6)
	    { printf("\n\n\n\t\t\t\tSorry!!! but It seems that u have used all ur foreign player slot ");
	      Sleep(1000);
		  manager();
		}

	printf("\n\n\n\t\t\t\tBiddings");
	un(12,4);
		printf("\n\n\n\n\t\t\tLet the Bidding commence!! ");
		
		i=0;
		do
		{   if(cash<currprice)
		      { printf("\n\n\n\t\t\t\tSorry!!! but It seems that u dont have enough money ");
	            Sleep(1000);
		        break;
		      }
			currprice++;
			printf("\n\n\n\t\t\tBid - %d",++i);
	        
	        printf("\n\n\n\t\t\tCurrently bidding at%d",currprice);
			bid2();
	        printf("\n\n\n\t\t\tDo you want to bid??");
	        bidans=getch();
	    } while(bidans=='y');
		
		
	    sprintf(a[x].avail,"n");
		if(x1!=0)
		{ 
		 
		 printf("\n\n\n\t\t\tPlayer bought by you!!!");
		 strcpy(a[x].ranjiteam,p[u].srtname);
		 if(stricmp(a[x].country,"INDIA"))
		         foreign++; 
		cash-=currprice;
		total++;
		sprintf(p[u].wallet,"%d",cash);
	    sprintf(p[u].totalpl,"%d",total);
	    sprintf(p[u].foreignpl,"%d",foreign);
		printf("\n\n\n\t\t\tCASH left in your wallet is %d$",cash);
	   }
	   else {
                printf("\n\n\n\t\t\tPlayer bought by computer!!!");
                strcpy(a[x].ranjiteam,"COM");
            }
   }
	else if(answer=='n')
	printf("\n\n\n\t\t\tPlayer unsold");
	printf("\n\n\n\t\t\tDo you want to see more players?(y/n)");
	ch=getch();
	if(ch=='y')
	  Biddings();
	  }
 else Biddings(); 
}
void signout()
{
	FILE *base;                        //opening the user file
   	 base=fopen("user.lul","w");
    
  		for(i=1;i<numu-1;i++)  
   {
    fprintf(base,"%s ",p[i].uname); 
    fprintf(base,"%s ",p[i].pass);
	fprintf(base,"%s ",p[i].name);
	fprintf(base,"%s ",p[i].tname); 
	fprintf(base,"%s ",p[i].srtname);
	fprintf(base,"%s ",p[i].wallet);
	fprintf(base,"%s ",p[i].ques);
	fprintf(base,"%s ",p[i].ans);
	fprintf(base,"%s ",p[i].totalpl);
	fprintf(base,"%s ",p[i].foreignpl);	
	fprintf(base,"\n");
	
   }
fclose(base);

FILE *save;
save=fopen("players.lul","w");
for(i=0;i<nump;i++)
   {
    fprintf(save,"%s ",a[i].name);
	fprintf(save,"%s ",a[i].country);
	fprintf(save,"%s ",a[i].type);
	fprintf(save,"%s ",a[i].ranjiteam);
	fprintf(save,"%s ",a[i].matches);
	fprintf(save,"%s ",a[i].iplmatches);
	fprintf(save,"%s ",a[i].score);
	fprintf(save,"%s ",a[i].iplscore);
	fprintf(save,"%s ",a[i].high);
	fprintf(save,"%s ",a[i].strike);
	fprintf(save,"%s ",a[i].average);
	fprintf(save,"%s ",a[i].ctst);
	fprintf(save,"%s ",a[i].baseprice);
	fprintf(save,"%s ",a[i].avail);
	fprintf(save,"\n");
   }
fclose(save);
}
 
void help()
 {
 	     	char choice4;
 	     	
    	printf("\n\n\n\t\t1. About ProTeam Manager\t\t2. Enquiry\n\n\t\t3. Status\t\t\t\t4.Go Back");
    	printf("\n\n\tEnter your choice : ");
    	scanf("%d",&choice4);
    	switch(choice4)
    	{
    		case (1):
    			{
				system ("cls");
				printf("\n\n\n\t\t\tAbout ProTeam Manager ");
				un(24,3);
				printf("\n\n\t\t\tProTeam Manager is a platform in which one can buy their interest of cricket players by winning through biddings \n\t\t\theld for all the respective players.the following owner has to compete with computer for buying a player .\n\t\t\tThis program is fluent working exciting prospect for taking auctions to a newer level. One can\n\t\t\tsee the statistics of all the players in the Bid Bag and then decide whom to buy according to their strategy. Each \n\t\t\tteam can only buy limited amount of Foriegn and Indian players.Each team will have to spend their\n\t\t\tcash wisely as they cant buy if their wallet runs out.  ");
				printf("\n\n\n\t\t\tCo-Founders - Vivek Prakash & Harsh Bharvada(2015)");
    		    Sleep(12500);
				}break;
			case (2):
					{
					system ("cls");
						printf("\n\n\n\t\t\tEnquiry");
						un(10,3);
						printf("\n\n\n\n\t\t\tPlease contact us at-   Vivek Prakash(8961824486)   &   Harsh Bharvada(9903663485).\n\n");
						printf("\t\t\tYou can also email us at-   vivekprakash78@gmail.com   /   harsh07bharvada@gmail.com.");
				        Sleep(10000);
					}break;
			case(3):
			{system ("cls");
			printf("\n\n\n\t\t\tStatus  :   On\n\n\n\n\t\t\tThe auction is on and you can sign in if you have an account and you can signup if you don't have an account.\n\t\t\tThere are still some players to be sold so please hurry up and sign up.For signing in please go to the main menu.  ");
			Sleep(7000);
				
					}		
					case(4):
						menu();break;
						default:printf("\t\t::Wrong Input!!::");
						
					
		}
	
 
 }
 void un(int a,int b)
{
	int i,j;
	printf("\n");
	for(j=0;j<b;j++)
	printf("\t");
	for(i=b;i<a;i++)/*a=string length +b*/
	printf("_");
}
 void teamman()
 {  int answer5;
 	printf("\n\n\t\t\tTeam Manager");
 	un(15,3);
 	printf("\n\n\n\t\t1. Biddings\t\t2. Release Player\n\n\n\t\t3. Loan Player\t\t4. Go back");
 	printf("\n\nEnter your choice : ");
	 scanf("%d",&answer5);
 	switch(answer5)
 	{
 		case(1):
		{
		 system ("cls");
		  Biddings();
		  }break;
 		case(2):
 			{
 			 system ("cls");
			 release();}break;
			 case(3):
			 	{
				 system ("cls");
			 	loan();
			 }break;
			 case(4):
			 	{system ("cls");
			 	manager();
				 }break;
				 default:printf("::Wrong Input::");
			 	
	 }
 }
 void release()
 {
 	int answer6,foreign,total;
	 char answer7;
 	printf("\n\t\t\tRelease Player");
 	un(17,3);
  printf("\nTEAM DETAILS :->");
		  
		  printf("\n\n");

		 for(i=0;i<nump;i++)
		   if(!(stricmp(a[i].ranjiteam,p[u].srtname)))
		   
		   {
		    
		    printf("\n\n%d : %s",i,a[i].name);
 	       }
	Sleep(1750);     
	printf("\n\n\n\nEnter the player no. to be released :");
	 scanf("%d",&answer6);
	 printf("\n\nDo you really want to release the player?(y/n) :");
	 answer7=getch();
	 if(answer7=='y')
	 {  
	    foreign=atoi(p[u].foreignpl);
	    total=atoi(p[u].totalpl);
		
	 	if(stricmp(a[answer6].country,"INDIA"))
		         foreign--;
		total--;		  
		sprintf(a[answer6].avail,"y");
	 	sprintf(p[u].totalpl,"%d",total);
	    sprintf(p[u].foreignpl,"%d",foreign);
		sprintf(a[answer6].ranjiteam,"UNS");  
	 }
	 else if(answer7=='n')
	 {system("cls");
	 release();
}
	 
	 system ("cls");
	 teamman();
 }
 void loan()
 {
 	int answer8,foreign,total;
 	printf("\n\t\t\tLoan Player");
 	un(14,3); 
	 printf("\n\n\tIn this forum owner of the team can loan a bought player to another team for half a price and for 1st half\n\tof the season.In this way particular player can play for both the teams.\n\n ");
	Sleep(1750);
	system("cls");
	 printf("\n\t\t\tLoan Player");
 	un(14,3); 
	printf("\n\n\t\n\nTEAM DETAILS :->");	  
		  printf("\n\n");

		 for(i=0;i<nump;i++)
		   if(!(stricmp(a[i].ranjiteam,p[u].srtname)))
		   
		   {
		    
		    printf("\n\n%d : %s",i,a[i].name);
 	       }
 	       printf("\n\n\tEnter the player to be loaned : ");
 	       scanf("%d",&answer8);
 	       
			foreign=atoi(p[u].foreignpl);
	        total=atoi(p[u].totalpl);
		
	 	 if(stricmp(a[answer8].country,"INDIA"))
		         foreign--;
		total--;		  
		sprintf(a[answer8].avail,"y");
	 	sprintf(p[u].totalpl,"%d",total);
	    sprintf(p[u].foreignpl,"%d",foreign);
		sprintf(a[answer8].ranjiteam,"UNS");  
	 
	   int p;
	   p=atoi(a[answer8].baseprice);
	     sprintf(a[answer8].baseprice,"%d",p/2);
     Sleep(1750);
     system ("cls");
	 teamman();
 }
 
 void check()
 {
 	 int purse,foreign,total;
 	 purse=atoi(p[u].wallet);
 	 foreign=atoi(p[u].foreignpl);
	 total=atoi(p[u].totalpl); 
	  if(purse==0)
	    { printf("\n\n\n\t\t\t\tSorry!!! but It seems that u have run out of money ");
	      Sleep(1000);
		  manager();
		}
     if(total>=20)
	    { printf("\n\n\n\t\t\t\tSorry!!! but It seems that u have used all ur player slot ");
	      Sleep(1000);
		  manager();
		}
 
	   }
 
 
 
 
 
