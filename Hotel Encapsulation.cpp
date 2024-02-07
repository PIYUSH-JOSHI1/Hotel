#include<iostream>
#include<string.h>

using namespace std;
int comp=0;
int j;
int valid=0;

class information
{
	string newi;
	string pass;
	string passn;
	string newii;
	string pass1;
public:
void resistration();
void login();
void password();

};

 void information :: resistration()
 {


cout<<"Resistration\n\n";
cout<<"Enter user name :";

cin>> newi;
cout<<"Enter password :";
cin>>pass;	
cout<<"Reenter password:";
cin>>passn;
if(pass==passn)
{
	cout<<"...............................\n";
	cout<<" RESISTERED SUCCESSFULLY\n";
		cout<<"...............................\n";

		cout<<" LOGGED IN \n";
			cout<<"...............................\n";



}
else{
	cout<<"** ERROR **";
	cout<<"\nPASSWORD DOES NOT MATCH   ";
}

}



 void information::login()
 {
	cout<<"Enter User Name :";
cin>> newii;
cout<<"Enter Password :";
cin>>pass1;
if(newii!=newi)
{
		cout<<"...............................\n";
	cout<<"USER NAME NOT FOUND \n";
		cout<<"...............................\n";
	cout<<"RESISTER FIRST  \n\n";
		cout<<"...............................\n";

	resistration();
}

 }

void information:: password()
{
// 	cout<<"Enter your user name : ";
// 	 string name;
// 	cin>>name;

//  	cout<<"Set password :";
// char  pass[100];
// for (int i = 0; i < strlen(pass); i++)
// {
//     /* code */
//     cin>>pass[i];
       
// 		if(pass[i]<7)
// 		{
// cout<<"password must containt greater than 7";	
// valid=0;
// break;

// }
		// else if (isupper(pass[i])==0)
		// {
		// 	cout<<"error \npassword must contain capital letter ";
		// 	valid=0;
        //     break;
        //     	}
        // else
        //     	{
        //     	    cout<<"your password is set";
		// 			cout<<"\n\n LOGIN SUCCESSFULL\n";
		// 			cout<<" User name  = "<<name<<endl;
		// for(int i=0;i<=strlen(pass);i++)
		//{
		// 			cout<<" Password   ="<<pass[i];}
		// 			valid=1;
        //             break;
        //     	}
} 

    

int n[100];
int d;
	int book;
int main()
{
	information b;
	int g,quantity;
	string arr[1000];
	int count=1;
	cout<<"\n\n1. FOR ADMIN\t\t\t2.FOR USER\n\n";
	int s;
	cin>>s;
	if(s==1)
	{
cout<<" FOR ADMIN \n";
cout<<"\nENTER ROOMS IN HOTEL:";

cin>>d;
cout<<"\nENTER HOW MANY TYPES OF DISHES AVAILABLE :";

cin>>g;

		cout<<"\nENTER DISHES NAME AND QUANTITY AVAILABLE:\n\n";
for(int i=1;i<=g;i++)
{
	cout<<i<<"."<<"NAME :";
	cin>>arr[i];
	cout<<"\t\t\tQUANTITY :";
	cin>>n[i];
	cout<<"\n";
}
	cout<<"\n\n...............DATA ........................\n";
cout<<" \n\nROOMS AVAILABLE  :"<<d<<"\n";
cout<<"\nMENU  :"<<g<<"\n";
	cout<<".......................................\n";

cout<<"no. |   "<<" DISH      |"<<" 	AVAILABLE    |\n";
	cout<<".......................................\n";
	for(int i=1;i<=g;i++)
{
	
	cout<<count<<"   |   "<<arr[i]<<"        |"<<"		"<<n[i]<<"     |" <<endl;
	cout<<".........................................."<<endl;
	count++;
}
	}
	else if (s==2){

cout<<" For COSTUMER \n\n";
cout<<" FOR ADMIN PLEASE ENTER DATA OF YOUR HOTEL FOR COSTUMER REFERENCE  \n";
cout<<"\nENTER AVAILABLE ROOMS  :";

cin>>d;
cout<<"\nENTER HOW MANY TYPES OF DISHES AVAILABLE :";

cin>>g;

	cout<<"\nENTER DISHES NAME AND QUANTITY :\n\n";
for(int i=1;i<=g;i++)
{
	cout<<i<<"."<<"NAME :";
	cin>>arr[i];
	cout<<"\t\t\tQUANTITY :";
	cin>>n[i];
	cout<<"\n";
}

for(int h=1;h<=1000;h++)
{
cout<<"\n.........................OPTION SELECTION.......................";
cout<<"\n\n1. RESISTRATION \n2. LOGIN \n3. BOOK ROOM\n4. ORDER DISHES\n5. INFORMATION BROUCHER\n6. EXIT\n\n";
cout<<"SELECT OPTION :";
int a;
cin>>a;
if(a==1)
{
b.resistration();
}
else if (a==2)
{
b.login();
}
else if (a==3)
{
	
	cout<<"\nENTER NUMBERS OF ROOMS DO YOU WANTS TO BOOK : ";

	cin>>book;
	if(book>d)
	{

		cout<<"\n**Sorry** \n WE HAVE ONLY AVAILABLE... "<<d<<"....ROOMS";
	}
	else 
	{
				cout<<"...............................\n";

		cout<<"\n CONGRATULATION  \n...............................\nYOUR ROOM BOOK SUCCESSFULLY\n...............................\n";
	}
}
else if(a==4)
{
	cout<<"SELECT YOUR DISH \n\n";
	cout<<".......................................\n";

cout<<"no. |   "<<" DISH      |"<<" 	AVAILABLE    |\n";
	cout<<".......................................\n";
	for(int i=1;i<=g;i++)
{
	
	cout<<count<<"   |   "<<arr[i]<<"        |"<<"		"<<n[i]<<"     |" <<endl;
	cout<<".........................................."<<endl;
	count++;
}
	cout<<".......................................\n";

int order;
cout<<"SELECT YOUR OPTION :";
cin>>order;
for(int j=1;j<=g;j++)
{
if(order==j)
{
	cout<<arr[j]<<"\t\t";
	cout<<"ENTER QUANTITY :";
	cin>>quantity;
	cout<<"\n\n";
	if(quantity>n[j])
	{
	cout<<"\n**Sorry** \n WE HAVE ONLY AVAILABLE... "<<n[j]<<"....QUANTITY";
	}
	else{
					cout<<"\n...............................\n";

	cout<<"ORDERED SUCCESSFULL \n";
					cout<<"...............................\n";
	}
}

}


}
else if (a==5)
{
						cout<<"\n...............................\n";

	cout<<" \n\nINFORMATION BROUCHER \n ";
						cout<<"\n...............................\n";

	cout<<"\n\n ROOMS AVAILABLE :"<<d-book;
	cout<<"\n DISHES AVAILABLE  : \n";
	cout<<".......................................\n";

cout<<"no. |   "<<" DISH      |"<<" 	AVAILABLE    |\n";
	cout<<".......................................\n";
	for(int i=1;i<=g;i++)
{
	
	cout<<count<<"   |   "<<arr[i]<<"        |"<<"		"<<n[i]-quantity<<"     |" <<endl;
	cout<<".........................................."<<endl;
	count++;
}

}

else if(a==6)
{
	cout<<" \n\n................Thank You For Visiting ................";
	
}
	}
	}
	else{
		cout<<"WRONG INPUT ";
	}
	
	return 0;
	
}