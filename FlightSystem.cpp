#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Managment
{
  public:
  	Managment()
  	{
  		mainMenu();
	  }
};

class Details
{
	public:
	static string name,gender;
	int phoneNo;
	int age;
	string add;
	static int cId;
	char arr[100];
	
	
	void information()
	{
		cout<<"\nEnter the customer ID:";
		cin>>cId;
		cout<<"\nEnter the name :";
		cin>>name;
		cout<<"\nEnter the age :";
		cin>>age;
		cout<<"\nAddress :";
		cin>>add;
		cout<<"\n Gender :";
		cin>>gender;
		cout<<"Your details are saved with us\n"<<endl;
		}	
};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
	public:
	static int choice;
	int choice1;
	static float charges;
	int back;
	
	void flights()
	{
		string flightN[]={"Dubai","Canada","UK","USA","Australia","Europe"};
		
		for(int a=0;a<6;a++)
		{
			cout<<(a+1)<<".flight to "<<flightN[a]<<endl;
		}
		
		cout<<"\nWelcome to the Airlines!"<<endl;
		cout<<"Press the number of the country of which you want to book the flight:";
		cin>>choice;
		
		switch(choice)
		{
			case 1:
			{
				cout<<"______________________Welcome to Dubai Emirates_____________________________\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				cout<<"1.DUB - 498"<<endl;
				cout<<"\t08-01-2022 08:00AM 10hrs Rs. 14000"<<endl;
				cout<<"2.DUB - 658"<<endl;
				cout<<"\t09-01-2022 08:00AM 12hrs Rs. 10000"<<endl;
				cout<<"3.DUB - 508"<<endl;
				cout<<"\t11-01-2022 08:00AM 11hrs Rs. 9000"<<endl;
				
				cout<<"\nSelect the flight you want to book :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=14000;
					cout<<"\nYou have successfully booked the flight DUB - 498"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==2)
				{
				           charges=10000;
					cout<<"\nYou have successfully booked the flight DUB - 658"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;	
				}
				else if(choice1==3)
				{
				           charges=9000;
					cout<<"\nYou have successfully booked the flight DUB - 508"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;	
				}
				else{
					cout<<"Invalid input , shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go the main menu:"<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
				}
				
				case 2:
				{
				
				cout<<"______________________Welcome to Canadian Airlines_____________________________\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				cout<<"1.CA - 198"<<endl;
				cout<<"\t09-01-2022 2:00AM 20hrs Rs. 34000"<<endl;
				cout<<"2.CA - 158"<<endl;
				cout<<"\t11-01-2022 6:00AM 23hrs Rs. 29000"<<endl;
				cout<<"3.CA - 208"<<endl;
				cout<<"\t14-01-2022 12:00AM 21hrs Rs. 40000"<<endl;
				
				cout<<"\nSelect the flight you want to book :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=34000;
					cout<<"\nYou have successfully booked the flight CA - 198"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==2)
				{
				           charges=29000;
					cout<<"\nYou have successfully booked the flight CA - 158"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;	
				}
				else if(choice1==3)
				{
				           charges=40000;
					cout<<"\nYou have successfully booked the flight CA - 208"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;	
				}
				else{
					cout<<"Invalid input , shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go the main menu:"<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}	
				}
				
				case 3:
				{
				cout<<"______________________Welcome to UK Airways_____________________________\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				cout<<"1.UK - 798"<<endl;
				cout<<"\t12-01-2022 10:00AM 14hrs Rs. 44000"<<endl;
			
				
				cout<<"\nSelect the flight you want to book :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=44000;
					cout<<"\nYou have successfully booked the flight UK - 798"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else{
					cout<<"Invalid input , shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go the main menu:"<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}		
				}
				
				case 4:
				{
				cout<<"______________________Welcome to US Airways_____________________________\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				cout<<"1.US - 567"<<endl;
				cout<<"\t10-01-2022 09:00AM 22hrs Rs. 37000"<<endl;
				cout<<"2.US - 558"<<endl;
				cout<<"\t09-01-2022 06:00AM 22hrs Rs. 39000"<<endl;
				cout<<"3.US - 508"<<endl;
				cout<<"\t12-01-2022 10:00AM 11hrs Rs. 42000"<<endl;
				
				cout<<"\nSelect the flight you want to book :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=37000;
					cout<<"\nYou have successfully booked the flight US - 567"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==2)
				{
				           charges=39000;
					cout<<"\nYou have successfully booked the flight US - 558"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;	
				}
				else if(choice1==3)
				{
				           charges=42000;
					cout<<"\nYou have successfully booked the flight US - 508"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;	
				}
				else{
					cout<<"Invalid input , shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go the main menu:"<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}	
				}
				
				case 5:
				{
				cout<<"______________________Welcome to Australian Airlines_____________________________\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				cout<<"1.AS - 698"<<endl;
				cout<<"\t18-01-2022 09:00AM 20hrs Rs. 44000"<<endl;
				cout<<"2.As - 158"<<endl;
				cout<<"\t19-01-2022 4:00AM 12hrs Rs. 34000"<<endl;
				cout<<"3.As - 508"<<endl;
				cout<<"\t17-01-2022 10:00AM 21hrs Rs. 42000"<<endl;
				
				cout<<"\nSelect the flight you want to book :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=44000;
					cout<<"\nYou have successfully booked the flight As - 698"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==2)
				{
				           charges=34000;
					cout<<"\nYou have successfully booked the flight As - 158"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;	
				}
				else if(choice1==3)
				{
				           charges=42000;
					cout<<"\nYou have successfully booked the flight As - 508"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;	
				}
				else{
					cout<<"Invalid input , shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go the main menu:"<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}	
				}
				
				case 6:
				{
				cout<<"______________________Welcome to European Airlines_____________________________\n"<<endl;
				cout<<"Your comfort is our priority. Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				cout<<"1.EU - 898"<<endl;
				cout<<"\t02-01-2022 02:00AM 18hrs Rs. 36000"<<endl;
				cout<<"2.Eu - 958"<<endl;
				cout<<"\t03-01-2022 06:00AM 19hrs Rs. 37000"<<endl;
				cout<<"3.EU - 608"<<endl;
				cout<<"\t12-01-2022 10:00AM 20hrs Rs. 31000"<<endl;
				
				cout<<"\nSelect the flight you want to book :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=36000;
					cout<<"\nYou have successfully booked the flight EU - 898"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==2)
				{
				           charges=37000;
					cout<<"\nYou have successfully booked the flight EU - 958"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;	
				}
				else if(choice1==3)
				{
				           charges=31000;
					cout<<"\nYou have successfully booked the flight EU - 608"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;	
				}
				else{
					cout<<"Invalid input , shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go the main menu:"<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}	
				}
				default:
				{
				cout<<"Invalid input, Shifting you to the main menu !"<<endl;
				mainMenu();
				break;	
				}	
		}
		}	
};
float registration::charges;
int registration::choice;

class ticket : public registration, Details
{
     public:
     	
     void Bill()
     {
     string destination="";
     ofstream outf("records.txt");
     {
     	outf<<"_______________XYZ Airlines_______________"<<endl;
     	outf<<"_________________Ticket___________________"<<endl;
     	outf<<"__________________________________________"<<endl;
     	
     	outf<<"Customer ID:"<<Details::cId<<endl;
     	outf<<"Customer Name:"<<Details::name<<endl;
     	outf<<"Customer Gender:"<<Details::gender<<endl;
     	outf<<"\tDescription"<<endl<<endl;
     	
     	if(registration::choice==1)
     	{
     		destination="Dubai";
	}
	
	else if(registration::choice==2)
     	{
     		destination="Canada";
	}
	
	else if(registration::choice==3)
     	{
     		destination="UK";
	}
	
	else if(registration::choice==4)
     	{
     		destination="USA";
	}
	
	else if(registration::choice==5)
     	{
     		destination="Australia";
	}
	
	else if(registration::choice==6)
     	{
     		destination="Europe";
	}
	
	outf<<"Destination\t\t"<<destination<<endl;
	outf<<"Flight cost :\t\t"<<registration::charges<<endl;
	     }	
	     outf.close();
      }	
      void dispBill()
      {
      	ifstream ifs("records.txt");
      	{
      		if(!ifs)
      		{
      			cout<<"File error!"<<endl;
		}
		      while(!ifs.eof())
		      {
		      	ifs.getline(arr, 100);
		      	cout<<arr<<endl;
		      }
	      }
	      ifs.close();
      }
};



void mainMenu()
{
	int lchoice;
	int schoice;
	int back;
	cout<<"\t                XYZ Airlines \n"<<endl;
	cout<<"\t_____________Main Menu________________"<<endl;
	
	cout<<"\t_____________________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t|" <<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details     \t|"<<endl;
	cout<<"\t|\t Press 2 for flight Registration         \t|"<<endl;
	cout<<"\t|\t Press 3 for Ticket and Charges          \t|"<<endl;
	cout<<"\t|\t Press 4 to Exit                         \t|"<<endl;
	cout<<"\t|\t\t\t\t\t\t|" <<endl;
	cout<<"\t_____________________________________________________"<<endl;
	cout<<"Enter the choice : ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	switch(lchoice)
	{
		case 1:
			{
			cout<<"___________Customers_________\n"<<endl;
			d.information();
			cout<<"Press any key to go back to Main menu ";
			cin>>back;
			
			if(back==1)
			{
			mainMenu();
			}
			else {
				mainMenu();
			}
			break;	
		}
		case 2:
			{
			cout<<"_____Book a flight using this system______\n"<<endl;
			r.flights();
			break;	
			}
		case 3:
			{
			
		cout<<"_____GET YOUR TICKET_____\n"<<endl;
		t.Bill();
		
		cout<<"Your ticket is printed, you can collect it \n"<<endl;
		cout<<"Press 1 to display your ticket ";
		
		cin>>back;
		
		if(back==1)
		{
			t.dispBill();
			cout<<"Press any key to go back to main menu:";
			cin>>back;
			if(back==1)
			{
				mainMenu();
			}
			else{
				mainMenu();
			}
			}	
			else{
				mainMenu();
			}
			break;
		}
		case 4:
			{
			cout<<"\n\n\t_________Thank-you________"<<endl;
			break;	
			}
			
			defualt:
				{
				cout<<"Invalid input, Please try again!\n"<<endl;
				mainMenu();
				break;
				}
	}
	
}

int main()
{
	Managment Mobj;
	return 0;
}
