// Bank GCSE challange.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;


int main()
{
	string opench; //the first choice of whether you want to create or login to an account
	int tru; //if login is succesful then this = 1, if not then this = 0
	int accno; //account number (for example account number for 'Oli' is 1. This allows you to acces your money.
	int create; //to tell if youve created an account
	create = 2;

	struct accounts //a struct containing all of the accounts
	{
		string name;
		string pass;
		int money;
	};

	accounts Oli; //my account for testing (account munber of 1)
	Oli.name = "Oliver";
	Oli.pass = "Okthen1";
	Oli.money = 200;

	accounts WillC; //another testing account (account number of 5)
	WillC.name = "Will";
	WillC.pass = "Balence21";
	WillC.money = 500;

	accounts new1; //first empty account (account number of 2)
	accounts new2; //seccond empty account (acc no of 3)
	accounts new3; //third empty account (acc no of 4)

	cout << "Welcome to CoBank" << endl;
	cout << "CoBank is a C++ console app designed to help young people help to manage their own money" << endl;
	cout << "We hope you like it :)" << endl;
	yeet: //if you later on choose to login to another account then you start from here
	//starting the first opening choice 
	cout << "Would you like to login or create a new account?" << endl;
	cout << "Please use the words LOGIN or CREATE in block caps to make a choice." << endl;
	cin >> opench;

	while (opench != "LOGIN" and opench != "CREATE") //if you dont enter login or create
	{
		cout << "Error: PEBKAC" << endl;
		break;
	}
	

	//login section begin
	if (opench == "LOGIN") //if you want to login
	{
		string loginusr; //allows user input of username
		cout << "Please enter account name." << endl;
		cin >> loginusr; //gets input for loginusr
		if (loginusr == Oli.name) //if input is the same as data stored in the struct
		{
			loginpassoli:
			string loginpass; //allows password input
			cout << "Account found." << endl;
			cout << "Please enter password." << endl;
			cin >> loginpass;
			if (loginpass == Oli.pass) //if password is correct
			{
				cout << "Account login succesful." << endl;
				tru = 1; //allows you to continue
			
			}
			while (loginpass != Oli.pass) //if password is incorrect
			{
				cout << "Error: PEBKAC" << endl;
				cout << "Password incorrect." << endl;
				goto loginpassoli;
				break;
			}
		}
		/*
		while (loginusr != Oli.name) //if the account name is not in struct
		{
			cout << "<<Please follow instructuins.>>" << endl;
			cout << "Account not found..." << endl;

			string chtwi; //if you want to create an account option
			cout << "<<Would you like to create account instead.>> <<YES/NO>> <<Please answer iun block caps>>" << endl;
			cin >> chtwi;
			if (chtwi == "YES") //if create new account seceted 
			{
				opench = "CREATE";
				break;
			}
			else
			{
				break;
			}
		}
		*/

		if (loginusr == WillC.name) //if input is the same as data stored in the struct
		{
			string loginpass; //allows password input
			cout << "Account found." << endl;
			cout << "Please enter password." << endl;
			cin >> loginpass;
			if (loginpass == WillC.pass) //if password is correct
			{
				cout << "Account login succesful." << endl;
				tru = 5; //allows you to continue

			}
			while (loginpass != WillC.pass) //if password is incorrect
			{
				cout << "Error: PEBKAC" << endl;
				cout << "Password incorrect." << endl;
				break;
			}
		}
		while (loginusr != WillC.name and loginusr != Oli.name) //if the account name is not in struct
		{
			cout << "Please follow instructuins." << endl;
			cout << "Account not found..." << endl;

			string chtwi; //if you want to create an account option
			cout << "Would you like to create account instead.>> <<YES/NO>> <<Please answer iun block caps" << endl;
			cin >> chtwi;
			if (chtwi == "YES") //if create new account seceted 
			{
				opench = "CREATE";
				break;
			}
			else
			{
				break;
			}
		}
	}
	//login sectiuon end


	//create account begin
	if (opench == "CREATE")
	{
		int newnum;
		cout << "You have selected to create an account for CoBank" << endl;
		if (create == 2) //if no account has been created during this session
		{
			cout << "Please choose a number of two to four." << endl; //choose acccount number
			cin >> newnum;
			while (newnum != 2 or newnum != 3 or newnum != 4) //if your  chosen account number is taken
			{
				cout << "Enter a number between 2 and 3." << endl;
				break;
			}
			tru = newnum; //sets chosen acc no to a valued and usable acc num
			cout << "Please enter an account name." << endl;
			cin >> new1.name;
			cout << "Please enter a password..." << endl;
			cin >> new1.pass;
			new1.money = 50;
			cout << "cingratulations on crearing an account" << endl;
			cout << "you have been gifted £50" << endl;
			create = 3;
		}
		else if (create == 3) //if one account has been created during this session
		{
			cout << "Please choose a number of three or four." << endl; //choose acccount number
			cin >> newnum;
			while (newnum != 3 or newnum != 4) //if your  chosen account number is taken
			{
				cout << "Enter a number between 2 and 3." << endl;
				break;
			}
			tru = newnum; //sets chosen acc no to a valued and usable acc num
			cout << "Please enter an account name." << endl;
			cin >> new2.name;
			cout << "Please enter a password..." << endl;
			cin >> new2.pass;
			new2.money = 50;
			cout << "cingratulations on crearing an account" << endl;
			cout << "you have been gifted £50" << endl;
			create = 4;
		}
		else if (create == 4) //if two accounts hves been created during this session
		{
			cout << "Please choose a number of four." << endl; //choose acccount number
			cin >> newnum;
			while (newnum != 4) //if your  chosen account number is taken
			{
				cout << "Enter a number between 2 and 3." << endl;
				break;
			}
			tru = newnum; //sets chosen acc no to a valued and usable acc num
			cout << "Please enter an account name." << endl;
			cin >> new3.name;
			cout << "Please enter a password..." << endl;
			cin >> new3.pass;
			new3.money = 50;
			cout << "cingratulations on crearing an account" << endl;
			cout << "you have been gifted £50" << endl;
			create = 5;
		}
		while (create > 4)
		{
			cout << "Maximum number of accounts made." << endl;
			break;
		}
		

	}
	//create account end


	//if neither is entered
	/*
	else
	{
		cout << "Please enter either login or create..." << endl;
		goto yeet;
	}
	*/


	//interface for account Oli
	if (tru == 1)
	{
		string olich; //allows you to choose what you want to do
		nopayoli: //where homepage starts
		cout << "Welcome to your account " + Oli.name + "." << endl;
		cout << "What would you like to do?" << endl;
		cout << "WITHDRAW, TRANSFER or LOGOUT." << endl;
		cin >> olich;
		if (olich == "LOGOUT" or olich == "logout" or olich == "Logout")
		{
			string ch69; //lest you choose whether you want to login to or create another account 
			cout << "Would you like to login to another account?" << endl;
			cin >> ch69;
			if (ch69 == "YES" or ch69 == "yes" or ch69 == "Yes")
			{
				goto yeet; //goto just before account login/creation choice
			}
			else
			{
				cout << "Logging out..." << endl;
				system("pause");
				return 0; //just shuts down the application
			}
		}
		else if (olich == "WITHDRAW" or olich == "withdraw" or olich == "Withdraw") //if you select to withdraw
		{
			int oliwithdraw; // the amount you choose to withdraw
			string oliwithdraw1; //allows you the option to return to the account homepage later on 
			cout << "You have chosen to withdraw money from you account." << endl;
			cout << "Is this what you wanted?" << endl;
			cin >> oliwithdraw1;
			if (oliwithdraw1 == "YES" or oliwithdraw1 == "yes" or oliwithdraw1 == "Yes")
			{
				cout << "You have:" << endl;
				cout << Oli.money << endl;
				cout << "How much do you want to withdraw?" << endl;
				cin >> oliwithdraw;
				Oli.money = Oli.money - oliwithdraw; //works out how much money you have after withdrawl
				cout << "Done..." << endl;
				cout << "You now have:" << endl;
				cout << Oli.money << endl;
				cout << "Returning to main page." << endl;
				goto nopayoli; //returns to account main page to enable you to do other thing w/o logging out 
			}
			else
			{
				goto nopayoli; //returns to account homepage since you selected the wrong option
			}
		}
		else if (olich == "TRANSFER" or olich == "transfer" or olich == "Transfer") //if you say you want to pay somebody
		{
			backpayoli:
			string topay; //who you want to pay
			string returnhomeoli; //lets you go back to home later if you want
			cout << "You have selected to pay someone." << endl;
			cout << "Is this correct?" << endl;
			cin >> returnhomeoli;
			if (returnhomeoli == "YES" or returnhomeoli == "yes" or returnhomeoli == "Yes")
			{
				cout << "You have:" << endl;
				cout << Oli.money << endl;
				cout << "Who do you want to pay?" << endl;
				cout << "You can pay:" << endl;
				cout << WillC.name << endl;
				cout << new1.name << endl;
				cout << new2.name << endl;
				cout << new3.name << endl;
				cin >> topay;
				if (topay == new1.name) //pays new1
				{
					int howpay1; //how much you will pay
					string yesnopay1; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << new1.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay1;
					if (yesnopay1 == "YES" or yesnopay1 == "yes" or yesnopay1 == "Yes")
					{
						goto paycorrectoli; //goes on to payment
					}
					else
					{
						goto backpayoli; //returns to user selection page
					}
				paycorrectoli: //where you go if you have proceeded to payment
					string confirmpayoli1; //final comfirmation for payment
					payconfirmoli11: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay1;
					cout << "Pay " + howpay1 << endl;
					cout << "To " + new1.name << endl;
					cin >> confirmpayoli1;
					if (confirmpayoli1 == "YES" or confirmpayoli1 == "yes" or confirmpayoli1 == "Yes")
					{
						cout << "Payment pending..." << endl;
						Oli.money = Oli.money - howpay1;
						new1.money = new1.money + howpay1;
					}
					else
					{
						goto payconfirmoli11; //go to reselet amount
					}
				}
				if (topay == new2.name) //pays new2
				{
					int howpay2; //how much you will pay
					string yesnopay2; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << new2.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay2;
					if (yesnopay2 == "YES" or yesnopay2 == "yes" or yesnopay2 == "Yes")
					{
						goto paycorrectoli2; //goes on to payment
					}
					else
					{
						goto backpayoli; //returns to user selection page
					}
				paycorrectoli2: //where you go if you have proceeded to payment
					string confirmpayoli2; //final comfirmation for payment
				payconfirmoli22: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay2;
					cout << "Pay " + howpay2 << endl;
					cout << "To " + new2.name << endl;
					cin >> confirmpayoli2;
					if (confirmpayoli2 == "YES" or confirmpayoli2 == "yes" or confirmpayoli2 == "Yes")
					{
						cout << "Payment pending..." << endl;
						Oli.money = Oli.money - howpay2;
						new2.money = new2.money + howpay2;
						goto backpayoli;
					}
					else
					{
						goto payconfirmoli22; //go to reselet amount
					}
				}
				if (topay == new3.name) //pays new3
				{
					int howpay3; //how much you will pay
					string yesnopay3; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << new3.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay3;
					if (yesnopay3 == "YES" or yesnopay3 == "yes" or yesnopay3 == "Yes")
					{
						goto paycorrectoli3; //goes on to payment
					}
					else
					{
						goto backpayoli; //returns to user selection page
					}
				paycorrectoli3: //where you go if you have proceeded to payment
					string confirmpayoli3; //final comfirmation for payment
				payconfirmoli33: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay3;
					cout << "Pay " + howpay3 << endl;
					cout << "To " + new3.name << endl;
					cin >> confirmpayoli3;
					if (confirmpayoli3 == "YES" or confirmpayoli3 == "yes" or confirmpayoli3 == "Yes")
					{
						cout << "Payment pending..." << endl;
						Oli.money = Oli.money - howpay3;
						new3.money = new3.money + howpay3;
					}
					else
					{
						goto payconfirmoli33; //go to reselet amount
					}
				}

				if (topay == WillC.name)
				{
					int howpaywill; //how much you will pay
					string yesnopaywill; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << WillC.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopaywill;
					if (yesnopaywill == "YES" or yesnopaywill == "yes" or yesnopaywill == "Yes")
					{
						//goto paycorrectoliwill; //goes on to payment
					paycorrectoliwill: //where you go if you have proceeded to payment
						string confirmpayoliwill; //final comfirmation for payment
					payconfirmoliwill: //if you select the wrong amount for payment you restart here
						cout << "How much would you like to pay?" << endl;
						cin >> howpaywill;
						cout << "Pay " + howpaywill << endl;
						cout << "to " + WillC.name << endl;
						cin >> confirmpayoliwill;
						if (confirmpayoliwill == "YES" or confirmpayoliwill == "yes" or confirmpayoliwill == "Yes")
						{
							cout << "Payment pending..." << endl;
							int olipaywillc;
							olipaywillc = WillC.money;
							int willcpayedbyoli;
							willcpayedbyoli = Oli.money;
							Oli.money = willcpayedbyoli - howpaywill;
							WillC.money = olipaywillc + howpaywill;
							cout << "Will has " + WillC.money << endl;
							cout << "You have " + Oli.money << endl;

						}
						else
						{
							goto payconfirmoliwill; //go to reselet amount
						}
					}
					else
					{
						goto backpayoli; //returns to user selection page
					}
				}

				
			}
			else
			{
				goto nopayoli; //returns to oli's homepage
			}
		}
	}


	//interface for account new1
	else if (tru == 2)
	{
		string onech; //allows you to choose what you want to do
	nopayone: //where homepage starts
		cout << "Welcome to your account " + new1.name + "." << endl;
		cout << "What would you like to do?" << endl;
		cout << "WITHDRAW, TRANSFER or LOGOUT." << endl;
		cin >> onech;
		if (onech == "LOGOUT" or onech == "logout" or onech == "Logout")
		{
			string ch79; //lest you choose whether you want to login to or create another account 
			cout << "Would you like to login to another account?" << endl;
			cin >> ch79;
			if (ch79 == "YES" or ch79 == "yes" or ch79 == "Yes")
			{
				goto yeet; //goto just before account login/creation choice
			}
			else
			{
				cout << "Logging out..." << endl;
				system("pause");
				return 0; //just shuts down the application
			}
		}
		else if (onech == "WITHDRAW" or onech == "withdraw" or onech == "Withdraw") //if you select to withdraw
		{
			int onewithdraw; // the amount you choose to withdraw
			string onewithdraw1; //allows you the option to return to the account homepage later on 
			cout << "You have chosen to withdraw money from you account." << endl;
			cout << "Is this what you wanted?" << endl;
			cin >> onewithdraw1;
			if (onewithdraw1 == "YES" or onewithdraw1 == "yes" or onewithdraw1 == "Yes")
			{
				cout << "You have:" << endl;
				cout << new1.money << endl;
				cout << "How much do you want to withdraw?" << endl;
				cin >> onewithdraw;
				new1.money = new1.money - onewithdraw; //works out how much money you have after withdrawl
				cout << "Done..." << endl;
				cout << "You now have:" << endl;
				cout << new1.money << endl;
				cout << "Returning to main page." << endl;
				goto nopayone; //returns to account main page to enable you to do other thing w/o logging out 
			}
			else
			{
				goto nopayone; //returns to account homepage since you selected the wrong option
			}
		}
		else if (onech == "TRANSFER" or onech == "transfer" or onech == "Transfer") //if you say you want to pay somebody
		{
		backpayone:
			string topayone; //who you want to pay
			string returnhomeone; //lets you go back to home later if you want
			cout << "You have selected to pay someone." << endl;
			cout << "Is this correct?" << endl;
			cin >> returnhomeone;
			if (returnhomeone == "YES" or returnhomeone == "yes" or returnhomeone == "Yes")
			{
				cout << "You have:" << endl;
				cout << new1.money << endl;
				cout << "Who do you want to pay?" << endl;
				cout << "You can pay:" << endl;
				cout << WillC.name << endl;
				cout << Oli.name << endl;
				cout << new2.name << endl;
				cout << new3.name << endl;
				cin >> topayone;
				if (topayone == Oli.name) //pays new1
				{
					int howpay1; //how much you will pay
					string yesnopay1; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << Oli.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay1;
					if (yesnopay1 == "YES" or yesnopay1 == "yes" or yesnopay1 == "Yes")
					{
						goto paycorrectone; //goes on to payment
					}
					else
					{
						goto backpayone; //returns to user selection page
					}
				paycorrectone: //where you go if you have proceeded to payment
					string confirmpayone1; //final comfirmation for payment
				payconfirmone11: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay1;
					cout << "Pay " + howpay1 << endl;
					cout << "To " + Oli.name << endl;
					cin >> confirmpayone1;
					if (confirmpayone1 == "YES" or confirmpayone1 == "yes" or confirmpayone1 == "Yes")
					{
						cout << "Payment pending..." << endl;
						new1.money = new1.money - howpay1;
						Oli.money = Oli.money + howpay1;
					}
					else
					{
						goto payconfirmone11; //go to reselet amount
					}
				}
				if (topayone == new2.name) //pays new2
				{
					int howpay2; //how much you will pay
					string yesnopay2; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << new2.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay2;
					if (yesnopay2 == "YES" or yesnopay2 == "yes" or yesnopay2 == "Yes")
					{
						goto paycorrectone2; //goes on to payment
					}
					else
					{
						goto backpayone; //returns to user selection page
					}
				paycorrectone2: //where you go if you have proceeded to payment
					string confirmpayone2; //final comfirmation for payment
				payconfirmone22: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay2;
					cout << "Pay " + howpay2 << endl;
					cout << "To " + new2.name << endl;
					cin >> confirmpayone2;
					if (confirmpayone2 == "YES" or confirmpayone2 == "yes" or confirmpayone2 == "Yes")
					{
						cout << "Payment pending..." << endl;
						new1.money = new1.money - howpay2;
						new2.money = new2.money + howpay2;
					}
					else
					{
						goto payconfirmone22; //go to reselet amount
					}
				}
				if (topayone == new3.name) //pays new3
				{
					int howpay3; //how much you will pay
					string yesnopay3; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << new3.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay3;
					if (yesnopay3 == "YES" or yesnopay3 == "yes" or yesnopay3 == "Yes")
					{
						goto paycorrectone3; //goes on to payment
					}
					else
					{
						goto backpayone; //returns to user selection page
					}
				paycorrectone3: //where you go if you have proceeded to payment
					string confirmpayoli3; //final comfirmation for payment
				payconfirmone33: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay3;
					cout << "Pay " + howpay3 << endl;
					cout << "To " + new3.name << endl;
					cin >> confirmpayoli3;
					if (confirmpayoli3 == "YES" or confirmpayoli3 == "yes" or confirmpayoli3 == "Yes")
					{
						cout << "Payment pending..." << endl;
						new1.money = new1.money - howpay3;
						new3.money = new3.money + howpay3;
					}
					else
					{
						goto payconfirmone33; //go to reselet amount
					}
				}

				if (topayone == WillC.name)
				{
					int howpaywill; //how much you will pay
					string yesnopaywill; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << WillC.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopaywill;
					if (yesnopaywill == "YES" or yesnopaywill == "yes" or yesnopaywill == "Yes")
					{
						//goto paycorrectoliwill; //goes on to payment
					paycorrectonewill: //where you go if you have proceeded to payment
						string confirmpayoliwill; //final comfirmation for payment
					payconfirmonewill: //if you select the wrong amount for payment you restart here
						cout << "How much would you like to pay?" << endl;
						cin >> howpaywill;
						cout << "Pay " + howpaywill << endl;
						cout << "to " + WillC.name << endl;
						cin >> confirmpayoliwill;
						if (confirmpayoliwill == "YES" or confirmpayoliwill == "yes" or confirmpayoliwill == "Yes")
						{
							cout << "Payment pending..." << endl;
							int olipaywillc;
							olipaywillc = WillC.money;
							int willcpayedbyoli;
							willcpayedbyoli = new1.money;
							new1.money = willcpayedbyoli - howpaywill;
							WillC.money = olipaywillc + howpaywill;
							cout << "Will has " + WillC.money << endl;
							cout << "You have " + new1.money << endl;

						}
						else
						{
							goto payconfirmonewill; //go to reselet amount
						}
					}
					else
					{
						goto backpayone; //returns to user selection page
					}
				}


			}
			else
			{
				goto nopayone; //returns to one's homepage
			}
		}
	}


	//interface for account new2
	else if (tru == 3)
	{

		string twoch; //allows you to choose what you want to do
	nopaytwo: //where homepage starts
		cout << "Welcome to your account " + new2.name + "." << endl;
		cout << "What would you like to do?" << endl;
		cout << "WITHDRAW, TRANSFER or LOGOUT." << endl;
		cin >> twoch;
		if (twoch == "LOGOUT" or twoch == "logout" or twoch == "Logout")
		{
			string ch79; //lest you choose whether you want to login to or create another account 
			cout << "Would you like to login to another account?" << endl;
			cin >> ch79;
			if (ch79 == "YES" or ch79 == "yes" or ch79 == "Yes")
			{
				goto yeet; //goto just before account login/creation choice
			}
			else
			{
				cout << "Logging out..." << endl;
				system("pause");
				return 0; //just shuts down the application
			}
		}
		else if (twoch == "WITHDRAW" or twoch == "withdraw" or twoch == "Withdraw") //if you select to withdraw
		{
			int onewithdraw; // the amount you choose to withdraw
			string onewithdraw1; //allows you the option to return to the account homepage later on 
			cout << "You have chosen to withdraw money from you account." << endl;
			cout << "Is this what you wanted?" << endl;
			cin >> onewithdraw1;
			if (onewithdraw1 == "YES" or onewithdraw1 == "yes" or onewithdraw1 == "Yes")
			{
				cout << "You have:" << endl;
				cout << new2.money << endl;
				cout << "How much do you want to withdraw?" << endl;
				cin >> onewithdraw;
				new2.money = new2.money - onewithdraw; //works out how much money you have after withdrawl
				cout << "Done..." << endl;
				cout << "You now have:" << endl;
				cout << new2.money << endl;
				cout << "Returning to main page." << endl;
				goto nopaytwo; //returns to account main page to enable you to do other thing w/o logging out 
			}
			else
			{
				goto nopaytwo; //returns to account homepage since you selected the wrong option
			}
		}
		else if (twoch == "TRANSFER" or twoch == "transfer" or twoch == "Transfer") //if you say you want to pay somebody
		{
		backpaytwo:
			string topayone; //who you want to pay
			string returnhomeone; //lets you go back to home later if you want
			cout << "You have selected to pay someone." << endl;
			cout << "Is this correct?" << endl;
			cin >> returnhomeone;
			if (returnhomeone == "YES" or returnhomeone == "yes" or returnhomeone == "Yes")
			{
				cout << "You have:" << endl;
				cout << new2.money << endl;
				cout << "Who do you want to pay?" << endl;
				cout << "You can pay:" << endl;
				cout << WillC.name << endl;
				cout << Oli.name << endl;
				cout << new1.name << endl;
				cout << new3.name << endl;
				cin >> topayone;
				if (topayone == Oli.name) //pays new1
				{
					int howpay1; //how much you will pay
					string yesnopay1; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << Oli.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay1;
					if (yesnopay1 == "YES" or yesnopay1 == "yes" or yesnopay1 == "Yes")
					{
						goto paycorrecttwo; //goes on to payment
					}
					else
					{
						goto backpaytwo; //returns to user selection page
					}
				paycorrecttwo: //where you go if you have proceeded to payment
					string confirmpayone1; //final comfirmation for payment
				payconfirmtwo11: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay1;
					cout << "Pay " + howpay1 << endl;
					cout << "To " + Oli.name << endl;
					cin >> confirmpayone1;
					if (confirmpayone1 == "YES" or confirmpayone1 == "yes" or confirmpayone1 == "Yes")
					{
						cout << "Payment pending..." << endl;
						new2.money = new2.money - howpay1;
						Oli.money = Oli.money + howpay1;
					}
					else
					{
						goto payconfirmtwo11; //go to reselet amount
					}
				}
				if (topayone == new1.name) //pays new2
				{
					int howpay2; //how much you will pay
					string yesnopay2; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << new1.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay2;
					if (yesnopay2 == "YES" or yesnopay2 == "yes" or yesnopay2 == "Yes")
					{
						goto paycorrecttwo2; //goes on to payment
					}
					else
					{
						goto backpaytwo; //returns to user selection page
					}
				paycorrecttwo2: //where you go if you have proceeded to payment
					string confirmpayone2; //final comfirmation for payment
				payconfirmtwo22: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay2;
					cout << "Pay " + howpay2 << endl;
					cout << "To " + new1.name << endl;
					cin >> confirmpayone2;
					if (confirmpayone2 == "YES" or confirmpayone2 == "yes" or confirmpayone2 == "Yes")
					{
						cout << "Payment pending..." << endl;
						new1.money = new1.money + howpay2;
						new2.money = new2.money - howpay2;
					}
					else
					{
						goto payconfirmtwo22; //go to reselet amount
					}
				}
				if (topayone == new3.name) //pays new3
				{
					int howpay3; //how much you will pay
					string yesnopay3; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << new3.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay3;
					if (yesnopay3 == "YES" or yesnopay3 == "yes" or yesnopay3 == "Yes")
					{
						goto paycorrecttwo3; //goes on to payment
					}
					else
					{
						goto backpaytwo; //returns to user selection page
					}
				paycorrecttwo3: //where you go if you have proceeded to payment
					string confirmpayoli3; //final comfirmation for payment
				payconfirmtwo33: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay3;
					cout << "Pay " + howpay3 << endl;
					cout << "To " + new3.name << endl;
					cin >> confirmpayoli3;
					if (confirmpayoli3 == "YES" or confirmpayoli3 == "yes" or confirmpayoli3 == "Yes")
					{
						cout << "Payment pending..." << endl;
						new2.money = new2.money - howpay3;
						new3.money = new3.money + howpay3;
					}
					else
					{
						goto payconfirmtwo33; //go to reselet amount
					}
				}

				if (topayone == WillC.name)
				{
					int howpaywill; //how much you will pay
					string yesnopaywill; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << WillC.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopaywill;
					if (yesnopaywill == "YES" or yesnopaywill == "yes" or yesnopaywill == "Yes")
					{
						//goto paycorrectoliwill; //goes on to payment
					paycorrecttwowill: //where you go if you have proceeded to payment
						string confirmpayoliwill; //final comfirmation for payment
					payconfirmtwowill: //if you select the wrong amount for payment you restart here
						cout << "How much would you like to pay?" << endl;
						cin >> howpaywill;
						cout << "Pay " + howpaywill << endl;
						cout << "to " + WillC.name << endl;
						cin >> confirmpayoliwill;
						if (confirmpayoliwill == "YES" or confirmpayoliwill == "yes" or confirmpayoliwill == "Yes")
						{
							cout << "Payment pending..." << endl;
							int olipaywillc;
							olipaywillc = WillC.money;
							int willcpayedbyoli;
							willcpayedbyoli = new2.money;
							new2.money = willcpayedbyoli - howpaywill;
							WillC.money = olipaywillc + howpaywill;
							cout << "Will has " + WillC.money << endl;
							cout << "You have " + new2.money << endl;

						}
						else
						{
							goto payconfirmtwowill; //go to reselet amount
						}
					}
					else
					{
						goto backpaytwo; //returns to user selection page
					}
				}


			}
			else
			{
				goto nopaytwo; //returns to one's homepage
			}
		}
	}


	//interface for account new3
	else if (tru == 4)
	{

		string onech; //allows you to choose what you want to do
	nopaythree: //where homepage starts
		cout << "Welcome to your account " + new3.name + "." << endl;
		cout << "What would you like to do?" << endl;
		cout << "WITHDRAW, TRANSFER or LOGOUT." << endl;
		cin >> onech;
		if (onech == "LOGOUT" or onech == "logout" or onech == "Logout")
		{
			string ch79; //lest you choose whether you want to login to or create another account 
			cout << "Would you like to login to another account?" << endl;
			cin >> ch79;
			if (ch79 == "YES" or ch79 == "yes" or ch79 == "Yes")
			{
				goto yeet; //goto just before account login/creation choice
			}
			else
			{
				cout << "Logging out..." << endl;
				system("pause");
				return 0; //just shuts down the application
			}
		}
		else if (onech == "WITHDRAW" or onech == "withdraw" or onech == "Withdraw") //if you select to withdraw
		{
			int onewithdraw; // the amount you choose to withdraw
			string onewithdraw1; //allows you the option to return to the account homepage later on 
			cout << "You have chosen to withdraw money from you account." << endl;
			cout << "Is this what you wanted?" << endl;
			cin >> onewithdraw1;
			if (onewithdraw1 == "YES" or onewithdraw1 == "yes" or onewithdraw1 == "Yes")
			{
				cout << "You have:" << endl;
				cout << new3.money << endl;
				cout << "How much do you want to withdraw?" << endl;
				cin >> onewithdraw;
				new3.money = new3.money - onewithdraw; //works out how much money you have after withdrawl
				cout << "Done..." << endl;
				cout << "You now have:" << endl;
				cout << new3.money << endl;
				cout << "Returning to main page." << endl;
				goto nopaythree; //returns to account main page to enable you to do other thing w/o logging out 
			}
			else
			{
				goto nopaythree; //returns to account homepage since you selected the wrong option
			}
		}
		else if (onech == "TRANSFER" or onech == "transfer" or onech == "Transfer") //if you say you want to pay somebody
		{
		backpaythree:
			string topayone; //who you want to pay
			string returnhomeone; //lets you go back to home later if you want
			cout << "You have selected to pay someone." << endl;
			cout << "Is this correct?" << endl;
			cin >> returnhomeone;
			if (returnhomeone == "YES" or returnhomeone == "yes" or returnhomeone == "Yes")
			{
				cout << "You have:" << endl;
				cout << new1.money << endl;
				cout << "Who do you want to pay?" << endl;
				cout << "You can pay:" << endl;
				cout << WillC.name << endl;
				cout << Oli.name << endl;
				cout << new2.name << endl;
				cout << new1.name << endl;
				cin >> topayone;
				if (topayone == Oli.name) //pays new1
				{
					int howpay1; //how much you will pay
					string yesnopay1; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << Oli.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay1;
					if (yesnopay1 == "YES" or yesnopay1 == "yes" or yesnopay1 == "Yes")
					{
						goto paycorrectthree; //goes on to payment
					}
					else
					{
						goto backpaythree; //returns to user selection page
					}
				paycorrectthree: //where you go if you have proceeded to payment
					string confirmpaythree1; //final comfirmation for payment
				payconfirmthree11: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay1;
					cout << "Pay " + howpay1 << endl;
					cout << "To " + Oli.name << endl;
					cin >> confirmpaythree1;
					if (confirmpaythree1 == "YES" or confirmpaythree1 == "yes" or confirmpaythree1 == "Yes")
					{
						cout << "Payment pending..." << endl;
						new3.money = new3.money - howpay1;
						Oli.money = Oli.money + howpay1;
					}
					else
					{
						goto payconfirmthree11; //go to reselet amount
					}
				}
				if (topayone == new2.name) //pays new2
				{
					int howpay2; //how much you will pay
					string yesnopay2; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << new2.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay2;
					if (yesnopay2 == "YES" or yesnopay2 == "yes" or yesnopay2 == "Yes")
					{
						goto paycorrectthree2; //goes on to payment
					}
					else
					{
						goto backpaythree; //returns to user selection page
					}
				paycorrectthree2: //where you go if you have proceeded to payment
					string confirmpaythree2; //final comfirmation for payment
				payconfirmthree22: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay2;
					cout << "Pay " + howpay2 << endl;
					cout << "To " + new2.name << endl;
					cin >> confirmpaythree2;
					if (confirmpaythree2 == "YES" or confirmpaythree2 == "yes" or confirmpaythree2 == "Yes")
					{
						cout << "Payment pending..." << endl;
						new3.money = new3.money - howpay2;
						new2.money = new2.money + howpay2;
					}
					else
					{
						goto payconfirmthree22; //go to reselet amount
					}
				}
				if (topayone == new1.name) //pays new3
				{
					int howpay3; //how much you will pay
					string yesnopay3; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << new1.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay3;
					if (yesnopay3 == "YES" or yesnopay3 == "yes" or yesnopay3 == "Yes")
					{
						goto paycorrectthree3; //goes on to payment
					}
					else
					{
						goto backpaythree; //returns to user selection page
					}
				paycorrectthree3: //where you go if you have proceeded to payment
					string confirmpaythree3; //final comfirmation for payment
				payconfirmthree33: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay3;
					cout << "Pay " + howpay3 << endl;
					cout << "To " + new1.name << endl;
					cin >> confirmpaythree3;
					if (confirmpaythree3 == "YES" or confirmpaythree3 == "yes" or confirmpaythree3 == "Yes")
					{
						cout << "Payment pending..." << endl;
						new3.money = new3.money - howpay3;
						new1.money = new1.money + howpay3;
					}
					else
					{
						goto payconfirmthree33; //go to reselet amount
					}
				}

				if (topayone == WillC.name)
				{
					int howpaywill; //how much you will pay
					string yesnopaywill; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << WillC.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopaywill;
					if (yesnopaywill == "YES" or yesnopaywill == "yes" or yesnopaywill == "Yes")
					{
						//goto paycorrectoliwill; //goes on to payment
					paycorrectthreewill: //where you go if you have proceeded to payment
						string confirmpayoliwill; //final comfirmation for payment
					payconfirmthreewill: //if you select the wrong amount for payment you restart here
						cout << "How much would you like to pay?" << endl;
						cin >> howpaywill;
						cout << "Pay " + howpaywill << endl;
						cout << "to " + WillC.name << endl;
						cin >> confirmpayoliwill;
						if (confirmpayoliwill == "YES" or confirmpayoliwill == "yes" or confirmpayoliwill == "Yes")
						{
							cout << "Payment pending..." << endl;
							int olipaywillc;
							olipaywillc = WillC.money;
							int willcpayedbyoli;
							willcpayedbyoli = new3.money;
							new3.money = willcpayedbyoli - howpaywill;
							WillC.money = olipaywillc + howpaywill;
							cout << "Will has " + WillC.money << endl;
							cout << "You have " + new3.money << endl;

						}
						else
						{
							goto payconfirmthreewill; //go to reselet amount
						}
					}
					else
					{
						goto backpaythree; //returns to user selection page
					}
				}


			}
			else
			{
				goto nopaythree; //returns to one's homepage
			}
		}
	}

	//interface for willc
	else if (tru == 5)
	{

		string onech; //allows you to choose what you want to do
	nopaywill: //where homepage starts
		cout << "Welcome to your account " + WillC.name + "." << endl;
		cout << "What would you like to do?" << endl;
		cout << "WITHDRAW, TRANSFER or LOGOUT." << endl;
		cin >> onech;
		if (onech == "LOGOUT" or onech == "logout" or onech == "Logout")
		{
			string ch79; //lest you choose whether you want to login to or create another account 
			cout << "Would you like to login to another account?" << endl;
			cin >> ch79;
			if (ch79 == "YES" or ch79 == "yes" or ch79 == "Yes")
			{
				goto yeet; //goto just before account login/creation choice
			}
			else
			{
				cout << "Logging out..." << endl;
				system("pause");
				return 0; //just shuts down the application
			}
		}
		else if (onech == "WITHDRAW" or onech == "withdraw" or onech == "Withdraw") //if you select to withdraw
		{
			int onewithdraw; // the amount you choose to withdraw
			string onewithdraw1; //allows you the option to return to the account homepage later on 
			cout << "You have chosen to withdraw money from you account." << endl;
			cout << "Is this what you wanted?" << endl;
			cin >> onewithdraw1;
			if (onewithdraw1 == "YES" or onewithdraw1 == "yes" or onewithdraw1 == "Yes")
			{
				cout << "You have:" << endl;
				cout << WillC.money << endl;
				cout << "How much do you want to withdraw?" << endl;
				cin >> onewithdraw;
				WillC.money = WillC.money - onewithdraw; //works out how much money you have after withdrawl
				cout << "Done..." << endl;
				cout << "You now have:" << endl;
				cout << WillC.money << endl;
				cout << "Returning to main page." << endl;
				goto nopaywill; //returns to account main page to enable you to do other thing w/o logging out 
			}
			else
			{
				goto nopaywill; //returns to account homepage since you selected the wrong option
			}
		}
		else if (onech == "TRANSFER" or onech == "transfer" or onech == "Transfer") //if you say you want to pay somebody
		{
		backpaywill:
			string topayone; //who you want to pay
			string returnhomeone; //lets you go back to home later if you want
			cout << "You have selected to pay someone." << endl;
			cout << "Is this correct?" << endl;
			cin >> returnhomeone;
			if (returnhomeone == "YES" or returnhomeone == "yes" or returnhomeone == "Yes")
			{
				cout << "You have:" << endl;
				cout << WillC.money << endl;
				cout << "Who do you want to pay?" << endl;
				cout << "You can pay:" << endl;
				cout << new1.name << endl;
				cout << Oli.name << endl;
				cout << new2.name << endl;
				cout << new3.name << endl;
				cin >> topayone;
				if (topayone == Oli.name) //pays new1
				{
					int howpay1; //how much you will pay
					string yesnopay1; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << Oli.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay1;
					if (yesnopay1 == "YES" or yesnopay1 == "yes" or yesnopay1 == "Yes")
					{
						goto paycorrectwill; //goes on to payment
					}
					else
					{
						goto backpaywill; //returns to user selection page
					}
				paycorrectwill: //where you go if you have proceeded to payment
					string confirmpayone1; //final comfirmation for payment
				payconfirmwill11: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay1;
					cout << "Pay " + howpay1 << endl;
					cout << "To " + Oli.name << endl;
					cin >> confirmpayone1;
					if (confirmpayone1 == "YES" or confirmpayone1 == "yes" or confirmpayone1 == "Yes")
					{
						cout << "Payment pending..." << endl;
						WillC.money = WillC.money - howpay1;
						Oli.money = Oli.money + howpay1;
					}
					else
					{
						goto payconfirmwill11; //go to reselet amount
					}
				}
				if (topayone == new2.name) //pays new2
				{
					int howpay2; //how much you will pay
					string yesnopay2; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << new2.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay2;
					if (yesnopay2 == "YES" or yesnopay2 == "yes" or yesnopay2 == "Yes")
					{
						goto paycorrectwill2; //goes on to payment
					}
					else
					{
						goto backpaywill; //returns to user selection page
					}
				paycorrectwill2: //where you go if you have proceeded to payment
					string confirmpayone2; //final comfirmation for payment
				payconfirmwill22: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay2;
					cout << "Pay " + howpay2 << endl;
					cout << "To " + new2.name << endl;
					cin >> confirmpayone2;
					if (confirmpayone2 == "YES" or confirmpayone2 == "yes" or confirmpayone2 == "Yes")
					{
						cout << "Payment pending..." << endl;
						WillC.money = WillC.money - howpay2;
						new2.money = new2.money + howpay2;
					}
					else
					{
						goto payconfirmwill22; //go to reselet amount
					}
				}
				if (topayone == new3.name) //pays new3
				{
					int howpay3; //how much you will pay
					string yesnopay3; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << new3.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopay3;
					if (yesnopay3 == "YES" or yesnopay3 == "yes" or yesnopay3 == "Yes")
					{
						goto paycorrectwill3; //goes on to payment
					}
					else
					{
						goto backpaywill; //returns to user selection page
					}
				paycorrectwill3: //where you go if you have proceeded to payment
					string confirmpayoli3; //final comfirmation for payment
				payconfirmwill33: //if you select the wrong amount for payment you restart here
					cout << "How much would you like to pay?" << endl;
					cin >> howpay3;
					cout << "Pay " + howpay3 << endl;
					cout << "To " + new3.name << endl;
					cin >> confirmpayoli3;
					if (confirmpayoli3 == "YES" or confirmpayoli3 == "yes" or confirmpayoli3 == "Yes")
					{
						cout << "Payment pending..." << endl;
						WillC.money = WillC.money - howpay3;
						new3.money = new3.money + howpay3;
					}
					else
					{
						goto payconfirmwill33; //go to reselet amount
					}
				}

				if (topayone == Oli.name)
				{
					int howpaywill; //how much you will pay
					string yesnopaywill; //allows return to user selection page
					cout << "You have chosen to pay:" << endl;
					cout << Oli.name << endl;
					cout << "Is this correct?" << endl;
					cin >> yesnopaywill;
					if (yesnopaywill == "YES" or yesnopaywill == "yes" or yesnopaywill == "Yes")
					{
						//goto paycorrectoliwill; //goes on to payment
					paycorrectwillwill: //where you go if you have proceeded to payment
						string confirmpayoliwill; //final comfirmation for payment
					payconfirmwillwill: //if you select the wrong amount for payment you restart here
						cout << "How much would you like to pay?" << endl;
						cin >> howpaywill;
						cout << "Pay " + howpaywill << endl;
						cout << "to " + Oli.name << endl;
						cin >> confirmpayoliwill;
						if (confirmpayoliwill == "YES" or confirmpayoliwill == "yes" or confirmpayoliwill == "Yes")
						{
							cout << "Payment pending..." << endl;
							int olipaywillc;
							olipaywillc = Oli.money;
							int willcpayedbyoli;
							willcpayedbyoli = WillC.money;
							WillC.money = willcpayedbyoli - howpaywill;
							Oli.money = olipaywillc + howpaywill;
							cout << "Oli has " + Oli.money << endl;
							cout << "You have " + WillC.money << endl;

						}
						else
						{
							goto payconfirmwillwill; //go to reselet amount
						}
					}
					else
					{
						goto backpaywill; //returns to user selection page
					}
				}


			}
			else
			{
				goto nopaywill; //returns to one's homepage
			}
		}
	}
	system("pause");
	return 0;
}

