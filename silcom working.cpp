#include <iostream>

#include <string>

#include <conio.h>

#include <windows.h>

#include <stdio.h>

#include <fstream>

#include <cmath>

#include <iomanip>



using namespace std;





void Main();

void top();

void userlogin();

void addcus();

void usermenu();

void access();

void exit();

void help();

void helpexit();

void viewcus();

void bill();

void pkg();



int main()

{


	top();

	cout << "\t\tWELCOME TO SLCOM BILLING SYSTEM\t\t" << endl;

	cout << "\t\t________________________________\t\t" << endl;

	

	userlogin();

	system("pause");

}



void userlogin()

{

	string username;

	string password;

	int loginattempt = 0;



	while (loginattempt < 5)

	{

		cout << "\t  Enter Username & Password" << endl;

		cout << "\t  Username: ";

		cin >> username;

		cout << "\t  Password: ";

		cin >> password;



		if (username == "slcom" && password == "slcom+1234")

		{

			access();

			usermenu();

		}

		else

		{

			cout << " - - " << endl << "\t ********invalid login******** " << endl << "\t **********TRY AGAIN********** " << endl;

			loginattempt++;



		}

		if (loginattempt == 5)

		{

			cout << "\n *************too many login attempts! try again later**************";

			exit();



		}

	}

}



void access()

{

	cout << "\n";

	cout << "\t\t\t\tSUCCESSFULLY ACCESSED" << endl;

	cout << "\n";

	cout << "\n";

	system("pause");

	system("cls");

}

void exit()

{



	system("cls");

	cout << "\n";

	cout << "\t\t\t\tSystem is going to be closed !!!!" << endl;

	cout << "\n";

	cout << "\n";

	cout << "\t\t\t\t Thankyou" << endl;

	cout << "\n";

	cout << "\n";

	system("pause");

	exit(0);

}



void top()

{

	SYSTEMTIME x;

	GetSystemTime(&x);

	cout << x.wDay << "-" << x.wMonth << "-" << x.wYear<<endl;

	cout << " ____________________________________________________________________________________________________________" << endl;

	cout << "|  |                                                                                                      |  |" << endl;

	cout << "|  |                                            SLCOM BILLILNG SYSTEM                                     |  |" << endl;

	cout << "|__|______________________________________________________________________________________________________|__|" << endl;

}

void usermenu()

{

	start:

	int btn;

	{

		top();

		cout << " __________________________________________" << endl;

		cout << "|     User options                         |" << endl;

		cout << "|__________________________________________|" << endl;

		cout << "|     Press 1 for Add new customer         |" << endl;

		cout << "|__________________________________________|" << endl;

		cout << "|     Press 2 for View customer Details    |" << endl;

		cout << "|__________________________________________|" << endl;

		cout << "|     Press 3 for view bills               |" << endl;

		cout << "|__________________________________________|" << endl;

		cout << "|     Press 0 for help                     |" << endl;

		cout << "|__________________________________________|" << endl;

		cout << "|     Press 9 for exit                     |" << endl;

		cout << "|__________________________________________|" << endl;





		cout << "\tSelect an option: ";

		cin >> btn;



		if (btn == 1)

		{

			access();

			addcus();

		}

		else if (btn == 2)

		{

			access();

			viewcus();

		}

		else if (btn == 3)

		{

			access();

			bill();

		}

		else if(btn==0)

		{

			help();

		}

		else if(btn==9)

		{

			exit();

		}

		else

		{

			

			usermenu();

		}



	}

}

void help()

{

	int btn;

	system("cls");

	top();

	cout << "\n";

	cout << " ______________________________________________________________________________________________________" << endl;

	cout << "|                                                                                                      |" << endl;

	cout << "|                                              HELP AND SUPPORT                                        |" << endl;

	cout << "|______________________________________________________________________________________________________|" << endl;

	cout << "|\n                                                                                                    |" << endl;

	cout << "|1.user have seperate passwords for the login.                                                         |" << endl;

	cout << "|\n                                                                                                    |" << endl;

	cout << "|2.Before loging please check if your username and password are correct.                               |" << endl;

	cout << "|\n                                                                                                    |" << endl;

	cout << "|3.You get five chances for entering the username and password for those logins.                       |" << endl;

	cout << "|\n                                                                                                    |" << endl;

	cout << "|4.in this system you can choose a correct option by entering numbers and go through that.             |" << endl;

	cout << "|\n                                                                                                    |" << endl;

	cout << "|5.IN Selecting options; You can choose a correct option by entering numbers and go through that.      |" << endl;

	cout << "|\n                                                                                                    |" << endl;

	cout << "|6.If you entered wrong options the system will be closing automatically.                              |" << endl;

	cout << "|\n                                                                                                    |" << endl;

	cout << "|7.in billing option you have choose connection name and connection amount to calculate the bill'      |" << endl;

	cout << "|\n                                                                                                    |" << endl;

	cout << "|8.in view bill option you can view last bill options                                                  |" << endl;

	cout << "|\n                                                                                                    |" << endl;

	cout << "|\n                                                                                                    |" << endl;

	cout << "|                                                THANKYOU                                              |" << endl;

	cout << "|\n                                                                                                    |" << endl;

	cout << "|______________________________________________________________________________________________________|" << endl;

	system("pause");

	

	

	cout << "\t\t\t\tpress 1 for user menu " << endl;

	cout << "\t\t\t\tpress anykey except 1 for Exit"<<endl;

	cout << "Select a option:";

	cin >> btn;

	if (btn == 1) { usermenu(); }

	else { exit(); }



}

void helpexit()

{

	cout << "\n" << endl;

	cout << "\t\t\t\tPress 0 for Help " << endl;

	cout << "\t\t\t\tPress 9 for Exit " << endl;

}

void addcus()

{

	

	string cusn, add, acn, ct, ict;

	int tel,btn;

	

		cout << "\t\t\t   Add New Customer  \t\t\t" << endl;

		cout << "\t\t\t   ________________  \t\t\t" << endl;

		cout << "\n";

		cout << "\t Customer name            : ";

		cin >> cusn;

		cout << "\t           " << endl;

		cout << "\t Account number           : ";

		cin >> acn; 

		cout << "\t          " << endl;

		cout << "\t Address                  : ";

		cin >> add;

		cout << "\t           " << endl;

		cout << "\t Connection Type          : ";

		cin >> ct;

		cout << "\t           " << endl;

		cout << "\t Internet Connection Type : ";

		cin >> ict;

		cout << "\t           " << endl;

		cout << "\t Telephone number         : ";

		cin >> tel;

		cout << "\t           " << endl;

		cout << "\n";

		cout << "_____________________________________________________________"<<endl;

		cout << "|                                                           |" << endl;

		cout << "                       "<<cusn<<"                            " << endl;

		cout << "|___________________________________________________________|" << endl;

		cout << "| Customer name           :" << cusn << endl;

		cout << "| Customer account number :" << acn << endl;

		cout << "| Connection type         :" << ct << endl;

		cout << "| Address                 :" << add<< endl;

		cout << "| Internet Connection Type:" << ict<< endl;

		cout << "| Telephone number        :" << tel<< endl;

		cout << "|___________________________________________________________"<< endl;

		cout << "\n";



		cout << "\t\t\t\tPress 1 FOR SelectPackages !!!" << endl;

		cout << "\t\t\t\tPress 2 FOR UserMenu !!!" << endl;

		helpexit();

		cin >> btn;

		if(btn == 1)

		{

			access();

			pkg();

		}

		else if(btn==2)

		{

			access();

			usermenu();

		}

		else if(btn==0)

		{

			help();

		}

		else if(btn==9)

		{

			exit();

		}

		else

		{

			cout << "\t\tWrong command!!\n auto matically switching for help option";

			help();

		}



	}



void viewcus()

{

	int btn;

	top();

	cout << "_____________________________________________________________________________________________________________________________________________"<<endl;

	cout << "|   Customer name   | Account Num  |               Address           |   Connection type   |  Internet connection type  | Telephone number  |"<<endl;

	cout << "|___________________________________________________________________________________________________________________________________________|"<<endl;

	cout << "|  Jhon Willium     |   123476     |    21 mcluie ln wellawaththa    |      domestic       |       home starter         |    0756423156     |" << endl;

	cout << "|  Rizan cassim     |   123475     |    41 malwa jun peheliyagoda    |      business       |       internetpro          |    0765465946     |" << endl;

	cout << "|  Amjad basi       |   123478     |    14 megoda ave wellampitiya   |      domestic       |       home advance         |    0775462134     |" << endl;

    cout << "|___________________________________________________________________________________________________________________________________________|"<< endl;

	cout << "\t\tPress1 for Usermenu" << endl;

	helpexit();

	cin >> btn;

	if(btn==1)

	{

		usermenu();

	}

	else if(btn==0)

	{

		help();

	}

	else if(btn==9)

	{

		exit();

	}

	else

	{

		viewcus();

	}

}

void bill()

{

	int btn;

	top();

	cout<<"\n";

	cout << "______________________________________________________" << endl;

	cout << "|               |                |                   |" << endl;

	cout << "| customer_name |  paid_amount   |  payable_amount   |" << endl;

	cout << "|_______________|________________|___________________|" << endl;

	cout << "|               |                |                   |" << endl;

	cout << "| Jhone_Willium |     3500       |        2500       |" << endl;

	cout << "|               |                |                   |" << endl;

	cout << "| Rizan_cassim  |     9500       |         500       |" << endl;

	cout << "|               |                |                   |" << endl;

	cout << "| Amjadh_abhi   |     1500       |        3000       |" << endl;

	cout << "|_______________|________________|___________________|" << endl;

	cin >> btn;

	helpexit();

	cout << "\t\t\tPress 1 for user menu";

	helpexit();

	if (btn == 1)

	{

		usermenu();

	}

	else if (btn == 0)

	{

		help();

	}

	else if(btn== 9)

	{

		exit();

	}

	else 

	{

		bill();

	}

}

void pkg()

{

	SYSTEMTIME x;

	GetSystemTime(&x);

	cout << x.wDay << "-" << x.wMonth << "-" << x.wYear;;

	int btn;

	int calpn, inpn, exgb;

	int a,b,c,d;

	 

	top();

	cout << " ____________________________________________________________________________________________"<<endl;

	cout << "|                            |                                    |                          |"<<endl;

    cout << "|  Pakages                   |    Package  type                   |       Pakage price       |" << endl;

	cout << "|____________________________|____________________________________|__________________________|" << endl;

	cout << "|                            |                                    |                          |" << endl;

	cout << "|  Calling plans             | *  press 1 for Domestic pakage     |       Rs.  410.00        |" << endl;

	cout << "|                            | *  press 2 for Business pakage     |       Rs.  500.00        |" << endl;

	cout << "|____________________________|____________________________________|__________________________|" << endl;

	cout << "|                            |                                    |                          |" << endl;

	cout << "|  Internet Pakages          | *  Home Starter Package            |       Rs.  499.00        |" << endl;

	cout << "|                            | *  Home Advance Package            |       Rs.  500.00        |" << endl;

	cout << "|                            | *  Internet Pro                    |       Rs. 4890.00        |" << endl;

	cout << "|                            | *  Internet Master                 |       Rs. 8890.00        |" << endl;

	cout << "|____________________________|____________________________________|__________________________|" << endl;

	cout << "|                            |                                    |                          |" << endl;

	cout << "|  Extra GB option           | *  1 GB                            |       Rs.  250           |" << endl;

	cout << "|                            | *  2 GB                            |       Rs.  500           |" << endl;

	cout << "|                            | *  5 GB                            |       Rs.  750           |" << endl;

	cout << "|                            | *  Above 5 GB                      |       Rs.  150 per GB    |" << endl;

	cout << "|____________________________|____________________________________|__________________________|" << endl;

	cout <<"\n" ;

	cout << "\t\t\tSelect a calling plan: " << endl;

	cout << "\t\t\tSelect a Internet pakage plan: " << endl;

	cout << "\t\t\tExtra gb option?: " << endl;

	

	

	cin >> calpn;

    cin >> inpn;

	cin >> exgb;



	cout << "\t\t\tenter a calling plan amount: " << endl;

	cout << "\t\t\tenter a Internet pakage plan amount: " << endl;

	cout << "\t\t\tExtra gb option amount: " << endl;

    cout << "\t\t\tCli charge: " << endl;	



    cin >> a;

	cin >> b;

	cin >> c;

	cin >> d;

	

	 

		

	cout << "___________________________" << endl;

	cout << "||                       ||" << endl;

	cout << "|| SLCOM PLC             ||"<<"\t\t\t"<< x.wDay << " - " << x.wMonth << " - " << x.wYear << endl;

	cout << "||                       ||" << endl;

	cout << "|| flower rd,colombo-03  ||" << endl;

	cout << "||_______________________||" << endl;

	cout << "||" << calpn <<"[Call Plan]      "<< "\t\t\t\t\t" << a << endl;

	cout << "||" << inpn  <<"[Internet pkg]   "<< "\t\t\t\t\t" << b << endl;

	cout << "||" << exgb  <<"[Extra gb option]"<< "\t\t\t\t\t" << c << endl;

	cout << "||" << "[CLI]             "<< "\t\t\t\t\t" << d << endl;

	cout << "||" << "Final Charge" << "\t\t\t\t\t" << a + b + c + d<< endl;



	system("pause");

	return usermenu();

	

}
