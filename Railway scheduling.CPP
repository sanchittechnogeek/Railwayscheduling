                           /* Railway Scheduling and Seat Reservation Program */


//Libraries included
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

 
//Structure for storing train info 
struct trains{
	int train_no;
	char train_name[46];
	char train_destination[80];
	char train_starting_from[80];

}t;

//Structure for storing user's ticket info
struct Booking
{
	char name[30],from[10],to[10],clock;
	int day1,day2,month1,month2,select,timehr,day,randnum,count;
	int timemin;
	char reserve;
	int choice;
}seat;


//Railway class with its member function
class railway {

    public:

	    //intro Page (function)
	    void intro(){
		clrscr();
		cout<<"\t\t ########### RAILWAY SCHEDULING PROGRAM ###########\n\n\n\n";
		cout<<"                             Made by Nalin and Sanchit             \n";
		cout<<"\n\n\n\n\n\n\n\n\n                             Press any key to Start";

		getch();

	       }


	       //Main_Menu page (function)
	       void main_menu(){
	       clrscr();
	       int choice;
	       do{
		       clrscr();
		       cout<<"\t\t\t ########### Main Menu ###########\n";
		       cout << "\n 1. Admin ";
		       cout << "\n 2. User ";
		       cout << "\n 3. Exit "<<endl;
		       cout << "Please enter your choice: ";
		       cin >> choice;
		       switch (choice){
			     case 1: password();
					 break;
			     case 2: user();
					 break;
			}
		 }while (choice != 3);

}

   
 	  //Password page (function)
	  void password(){
		clrscr();
		int passwd = 1223 , password;
		cout<<"\t########### Please login to access this page ###########\n\n\n\n\n\n"<<endl;
		cout<<"Enter Password Here: ";
		cin>>password;
        
        //Password validator
		if(password == passwd){
			cout<<"Access Granted!"<<endl;
			cout<<"\nPress any key to show Admin Panel\n";
			getch();
			admin();
		}

		else {
			cout<<"Access Denied"<<endl;
			cout<<"\nPress any key to Exit to the Main Menu";
		}getch();

	  }

      //Show_Trains page (function)
	  void admin(){
		clrscr();
       int choice;
	       
		       clrscr();
		       cout<<"\t\t ########### Welcome to admin page ###########\n"<<endl;
		       cout << "\n 1. Add Trains ";
		       cout << "\n 2. Show Trains ";
		       cout << "\n 3. Exit to Main Menu"<<endl;
		       cout << "Please enter your choice: ";
		       cin >> choice;
		       switch (choice){
			     case 1: add_trains();
					 break;
			     case 2: show_trains_admin();
					 break;
			     case 3: main_menu();
					 break;
				default: cout << " You entered a wrong choice!";
			}
		 
	  }


      //Add_Trains page (function)
	  void add_trains(){
		clrscr();
		cout<<"\t\t\t ########### Welcome to Add Trains page ###########"<<endl;
		cout<<"Enter the Train No."<<endl;
		cin>>t.train_no;
		cout<<"Enter the Train Name"<<endl;
		gets(t.train_name);
		cout<<"Enter the Starting point of the Train"<<endl;
		gets(t.train_starting_from);
		cout<<"Enter the Destination of the Train"<<endl;
		gets(t.train_destination);
		cout<<"\n\n";
        cout<<"You entries have been saved!\n"<<endl<<"Thank you!\n\n"<<endl;
        cout<<"Press any key to see the train info"<<endl; 
        getch();
        show_trains_admin();
	  }


      //Show_Trains_Admin page (function)
	  void show_trains_admin(){
		clrscr();
		cout<<"\t ########### Welcome to Show Trains page ###########\n"<<endl;
		cout<<t.train_no<<"\t\t";
		cout<<t.train_name<<"\t\t";
		cout<<t.train_starting_from<<"\t\t";
		cout<<t.train_destination<<"\n";
		cout<<"\n\n\n\n";
        cout<<"Press any key to go back to the Main Menu"<<endl; 
        getch();
	  }





	  //Show_Trains_User page (function)
	  void show_trains_user(){
		clrscr();
		cout<<"\t ########### Welcome to Show Trains page ###########\n"<<endl;
		cout<<t.train_no<<"\t\t";
		cout<<t.train_name<<"\t\t";
		cout<<t.train_starting_from<<"\t\t";
		cout<<t.train_destination<<"\n";
		cout<<"\n\n\n\n";
        cout<<"Press any key to Book seats in the available Train"<<endl; 
        getch();
        book_trains();
	  }


      //Booked_Tickets_User pages (function)
	  void booked_tickets_user(){
	  	clrscr();
	  	cout<<"\t ########### Welcome to Booked Tickets page ###########\n"<<endl;
	  	cout<<"Boarding from:";
	  	cout<<seat.from<<endl;

	  	cout<<"Boarding to:";
	  	cout<<seat.to<<endl<<endl;

	  	cout<<"Travel Date:";
	  	cout<<seat.day1<<"/"<<seat.month1<<endl;

	  	cout<<"Return Date:";
	  	cout<<seat.day2<<"/"<<seat.month2<<endl<<endl;

	  	cout<<"Class (3A/2A/SL):"
	  	cout<<seat.select<<endl<<endl;

	  	cout<<"Departure Time (hr/min/(AM/PM))";
cout<<seat.timehr<<":"<<seat.timemin<<" "<<seat.clock<<" a = am, p = pm"<<endl<<endl;

	  	cout<<"Departure Day:";
	  	cout<<seat.day<<endl;

	  	cout<<"Total No. of Seats Booked :";
	  	cout<<seat.count;

	  	getch();
	  }


	  //Book_Trains page (function)
	  void book_trains(){
		clrscr();
		cout<<"\t ########### Welcome to Book Trains page ###########\n"<<endl;


        //User's Destination and boarding place        
        cout<<"\n\t Type boarding place(From): ";
        gets(seat.from);
        cout<<"\n\t Type destination place(To): ";
        gets(seat.to);


     //User's Departure info        
    d1:
        cout<<"\n\t Enter departure date: ";
        cin>>seat.day1;
        
        if(seat.day1>31) {
       goto d1;
   }
        else 
        	if(seat.day1<=31)
 {
	m1:
	cout<<"\t Select the month: \n";
	cout<<"\t 1:January \t";
	cout<<"\t 2:February \t";
	cout<<"\t 3:March \t\n";
	cout<<"\t 4:April \t";
	cout<<"\t 5:May   \t";
	cout<<"\t 6:June \t\n";
	cout<<"\t 7:July \t";
	cout<<"\t 8:August \t";
	cout<<"\t 9:September \t\n";
	cout<<"\t 10:October \t";
	cout<<"\t 11:November \t";
	cout<<"\t 12:December \t\n";
	cout<<"\t Select: ";
	cin>>seat.month1;
	switch(seat.month1)
	{
		case 1: cout<<"\tSuitable departure date: ";
			cout<<seat.day1<<" "<<"January \n";
		break;
		case 2: cout<<"\tsuitable departure date: ";
			 cout<<seat.day1<<" "<<"February \n";
		break;
		case 3: cout<<"\tSuitable departure date: ";
			cout<<seat.day1<<" "<<"March \n";
		break;
		case 4: cout<<"\tSuitable departure date: ";
			cout<<seat.day1<<" "<<"April \n";
		break;
		case 5: cout<<"\tSuitable departure date: ";
			cout<<seat.day1<<" "<<"May \n";
		break;
		case 6: cout<<"\tSuitable departure date: ";
			cout<<seat.day1<<" "<<"June \n";
		break;
		case 7: cout<<"\tSuitable departure date: ";
			cout<<seat.day1<<" "<<"July \n";
		break;
		case 8: cout<<"\tSuitable departure date: ";
			    cout<<seat.day1<<" "<<"August \n";
		break;
		case 9: cout<<"\tSuitable departure date: ";
			cout<<seat.day1<<" ";
            cout<<"September \n";
		break;
		case 10: cout<<"\tSuitable departure date: ";
				 cout<<seat.day1<<" ";
          cout<<"October \n";
		break;
		case 11: cout<<"\tSuitable departure date: ";
			       cout<<seat.day1<<" ";
       cout<<"November \n";
		break;
		case 12: cout<<"\tSuitable departure date: ";
			 cout<<seat.day1<<" ";
                           cout<<"December \n";
		break;
		default: cout<<"\tWrong choice!!! \n";
			{
				goto m1;
			}
	}
}
cout<<"\t Press enter to continue \n";
getch();


//User's Return info
clrscr();
d2:
cout<<"\n\t Enter return date: \n";
cin>>seat.day2;
if(seat.day2>31)
{
	goto d2;
}
else if(seat.day2<=31)
{
	m2:
	cout<<"\t Select the month: \n";
	cout<<"\t 1:January \t";
	cout<<"\t 2:February \t";
	cout<<"\t 3:March \t\n";
	cout<<"\t 4:April \t";
	cout<<"\t 5:May  \t";
	cout<<"\t 6:June \t\n";
	cout<<"\t 7:July \t";
	cout<<"\t 8:August \t";
	cout<<"\t 9:September \t\n";
	cout<<"\t 10:October \t";
	cout<<"\t 11:November \t";
	cout<<"\t 12:December \t\n";
	cout<<"\t Select: ";
	cin>>seat.month2;
	switch(seat.month2)
	{
		case 1: cout<<"\t Suitable return date: ";
			     cout<<seat.day2<<" ";
                                cout<<"January \n";
		break;
		case 2: cout<<"\t Suitable retur  date: ";
			     cout<<seat.day2<<" ";
                                cout<<"February \n";
		break;
		case 3: cout<<"\t Suitable return date: ";
			     cout<<seat.day2<<" ";
                                cout<<"March \n";
		break;
		case 4: cout<<"\t Suitable return date: ";
			     cout<<seat.day2<<" "<<"April \n";
		break;
		case 5: cout<<"\t Suitable return date: ";
			     cout<<seat.day2<<" "<<"May \n";
		break;
		case 6: cout<<"\t Suitable return date: ";
			    cout<<seat.day2<<" "<<"June \n";
		break;
		case 7: cout<<"\t Suitable return date: ";
			     cout<<seat.day2<<" "<<"July \n";
		break;
		case 8: cout<<"\t Suitable return date: ";
			     cout<<seat.day2<<" "<<"August \n";
		break;
		case 9: cout<<"\t Suitable return date: ";
			     cout<<seat.day2<<" "<<"September \n";
		break;
		case 10: cout<<"\t Suitable return date: ";
			       cout<<seat.day2<<" ";
       cout<<"October \n";
		break;
		case 11: cout<<"\t Suitable return date: ";
			cout<<seat.day2<<" ";
                           cout<<"November \n";
		break;
		case 12: cout<<"\t Suitable return date: ";
			       cout<<seat.day2<<" ";
                                 cout<<"December \n";
		break;
		default: cout<<"\t Wrong choice!!! \n";
			{
				goto m2;
			}
	}
}
cout<<"\t Press enter to continue: ";
getch();


//Class (train's coach class)
clrscr();
train:
cout<<"\n\t Select and enter classes:- \n";
cout<<"\t 1:(First AC)\n";
cout<<"\t 2:(Second AC)\n";
cout<<"\t 3:(Third AC)\n";
cout<<"\t 4:(Sleeper Classes)\n";
cout<<"\t Enter: ";
cin>>seat.select;
if(seat.select==1)
{
	cout<<"\t First AC. Accepted \n";
}
else if(seat.select==2)
{
	cout<<"\t Second AC. Accepted \n";
}
else if(seat.select==3)
{
	cout<<"\t Third AC. Accepted \n";
}
else if(seat.select==4)
{
	cout<<"\t Sleeper classes. Accepted \n";
}
else
{
	cout<<"\t Wrong choice \n";
	goto train;
}
hour:
cout<<"\n\t Select suitable time:-\n";
cout<<"\t Enter the hours: ";
cin>>seat.timehr;
if(seat.timehr<=12)
{
	minute:
	cout<<"\t Now enter the minutes: ";
	cin>>seat.timemin;
	if(seat.timemin<60)
	{
		meridian:
	cout<<"\t am or pm ??\n";
	cout<<"\t For AM press A or a and for PM press P or  p: ";
	cin>>seat.clock;
	if(seat.clock=='A'||seat.clock=='a')
	{
		cout<<"\t Suitable time"<<seat.timehr;
		cout<<":"<<seat.timemin;
		cout<<" "<<"AM"<<"\n";
	}
	else if(seat.clock=='P'||seat.clock=='p')
		{
			cout<<"\t Suitable time: ";
					   cout<<seat.timehr<<":";
cout<<seat.timemin;
			cout<<" "<<"PM"<<"\n";
		}
		else
		{
			goto meridian;
		}
	}
	else if(seat.timemin>60)
	{
		goto minute;
	}
}
else if(seat.timehr>12)
{
	goto hour;
}
cout<<"\n\t Select suitable day: \n";
cout<<"\t 1-Monday \t";
cout<<"\t 2-Tuesday \t";
cout<<"\t 3-Wednesday \n";
cout<<"\t 4-Thursday \t";
cout<<"\t 5-Friday \t";
cout<<"\t 6-Saturday";
cout<<"\n\t 7-Sunday\n";
cout<<"\t\tPlease enter your choice: ";
cin>>seat.day;

switch(seat.day)
{
		case 1:cout<<"\t Monday \t   Accepted \n";
		break;
		case 2:cout<<"\t Tuesday \t  Accepted \n";
		break;
		case 3:cout<<"\t Wednesay \t Accepted \n";
		break;
		case 4:cout<<"\t Thursday \t Accepted \n";
		break;
		case 5:cout<<"\t Friday \t   Accepted \n";
		break;
		case 6:cout<<"\t Saturday \t Accepted \n";
		break;
		case 7:cout<<"\t Sunday \t   Accepted \n";
		break;
		default:cout<<"\t Wrong choice \n";
}
        cout<<"\t Press enter to continue \n";
        getch(); 

        

        //Seats generator
        clrscr();
		cout<<"how many Seats you want to book: ";
		cin>>seat.count;
		cout<<"Your booked seats are: \n";

		for (int i = 0; i < seat.count; ++i) {

		cout<<(seat.randnum=rand() % 70 + 1)<<"\n";
		}

		cout<<"\n\n\n\n";
		cout<<"Thank you! for using our service your ticket has been booked!"<<endl;
        cout<<"Press any key to go back to the User Menu"<<endl; 
        getch();
        
	  }


      

      //User page (function)
	  void user(){
		clrscr();
		int choice;
	       do{
		       clrscr();
		       cout<<"cortana : Welcome Guest!\n"<<endl;
		       cout << "\n 1. Show Trains ";
		       cout << "\n 2. Book Trains";
		       cout << "\n 3. Booked Tickets";
		       cout << "\n 4. Exit to Main Menu"<<endl;
		       cout << "Please enter your choice: ";
		       cin >> choice;
		       switch (choice){
			     case 1: show_trains_user();
					 break;
			     case 2: book_trains();
					 break;
			     case 3: booked_tickets_user();
			}
		 }while (choice != 4);

	  }

	  
};
     //End of class


       //Main Loop

void main(){
	railway user;
	user.intro();
	user.main_menu();
}

      //Main loop END