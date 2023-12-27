#include<iostream>
using namespace std;

int main()
{
	int QROOMS=0,QPASTA=0,QBURGER=0,QNOODLES=0,QSHAKE=0,QMOMOS=0;
	
	int SROOMS=0,SPASTA=0,SBURGER=0,SNOODLES=0,SSHAKE=0,SMOMOS=0;
	
	int TOTAL_ROOMS=0,TOTAL_PASTA=0,TOTAL_BURGER=0,TOTAL_NOODLES=0,TOTAL_SHAKE=0,TOTAL_MOMOS=0;
	
	int choice,q;
	
	cout<<"\n\t\t---Quantity of items we have---";
	cout<<"\n Rooms avaliable : ";
	cin>>QROOMS;
	cout<<"\n Quantity of Pasta : ";
	cin>>QPASTA;
	cout<<"\n Quantity of Burger : ";
	cin>>QBURGER;
	cout<<"\n Quantity of Noodles : ";
	cin>>QNOODLES;
	cout<<"\n Quantity of Shake : ";
	cin>>QSHAKE;
	cout<<"\n Quantity of Momos : ";
	cin>>QMOMOS;
	p:
//	system("cls");
	cout<<"\n\t\t\tPlease select from the given menu options";
	cout<<"\n\n [1] Rooms";
	cout<<"\n [2] Pasta";
	cout<<"\n [3] Burger";
	cout<<"\n [4] Noodles";
	cout<<"\n [5] Shake";
	cout<<"\n [6] Momos";
	cout<<"\n [7] Information regarding sales and collection";
	cout<<"\n [8] Exit";
	cout<<"\n\n Please enter Your Choice : ";
	cin>>choice;
	
	switch(choice)
	{
	    case 1:
			cout<<"\n\n Enter Number of rooms you want : ";
			cin>>q;
			if(QROOMS-SROOMS >= q)
			{
				SROOMS = SROOMS + q;
				TOTAL_ROOMS =TOTAL_ROOMS + (q*1200);
				cout<<"\n\n\t\t"<<q<<" Room/Rooms have been alotted! ";	
			}
			else
			
			cout<<"\n\tOnly "<<QROOMS-SROOMS<<" Rooms Remaining in hotel";
			break;
			
	    
		case 2:
			cout<<"\n\n Enter PASTA Quantity : ";
			cin>>q;
			if(QPASTA-SPASTA >= q)
			{
				SPASTA =SPASTA + q;
				TOTAL_PASTA =TOTAL_PASTA + (q*250);
				cout<<"\n\t"<<q<<" PASTA is the order";	
			}
			else
			cout<<"\n\n\t\tOnly "<<QPASTA-SPASTA<<" Pastas Remaining in stock";
			break;
			
		case 3:
			cout<<"\n\n Enter BURGER Quantity : ";
			cin>>q;
			if(QBURGER-SBURGER >= q)
			{
				SBURGER =SBURGER + q;
				TOTAL_BURGER =TOTAL_BURGER + q*50;
				cout<<"\n\n\t\t"<<q<<" BURGER is the order";	
			}
			else
			cout<<"\n\tOnly "<<QBURGER-SBURGER<<" Burgers Remaining in stock";
			break;
			
		case 4:
			cout<<"\n\n Enter NOODLES Quantity : ";
			cin>>q;
			if(QNOODLES-SNOODLES >= q)
			{
				SNOODLES =SNOODLES + q;
				TOTAL_NOODLES =TOTAL_NOODLES + (q*200);
				cout<<"\n\n\t\t"<<q<<" NOODLES is the order";	
			}
			else
			cout<<"\n\tOnly "<<QNOODLES-SNOODLES<<" Noodles Remaining in stock";
			break;
			
		case 5:
			cout<<"\n\n Enter SHAKE Quantity : ";
			cin>>q;
			if(QSHAKE-SSHAKE >= q)
			{
				SSHAKE =SSHAKE + q;
				TOTAL_SHAKE =TOTAL_SHAKE + q*170;
				cout<<"\n\n\t\t"<<q<<" SHAKE is the order";	
			}
			else
			cout<<"\n\tOnly "<<QSHAKE-SSHAKE<<" shakes Remaining in stock";
			break;
			
		case 6:
			cout<<"\n\n Enter MOMOS Quantity : ";
			cin>>q;
			if(QMOMOS-SMOMOS >= q)
			{
				SMOMOS =SMOMOS + q;
				TOTAL_PASTA =TOTAL_PASTA + q*160;
				cout<<"\n\n\t\t"<<q<<" MOMOS is the order";	
			}
			else
			cout<<"\n\tOnly "<<QMOMOS-SMOMOS<<" MOMOS Remaining in stock";
			break;
			
		case 7:

			cout<<"\n\t\tDetails of sales and collection ";
			cout<<"\n\n Number of Rooms we had : "<<QROOMS;
			cout<<"\n Number of Rooms we gave for rent : "<<SROOMS;
			cout<<"\n Remaining Rooms : "<<QROOMS-SROOMS;
			cout<<"\n\n Total Rooms collection for the Day : "<<TOTAL_ROOMS;
			
			cout<<"\n\n Number of Pastas we had : "<<QPASTA;
			cout<<"\n Number of Pastas we sold : "<<SPASTA;
			cout<<"\n Remaining Pastas : "<<QPASTA-SPASTA;
			cout<<"\n\n Total Pasta collection for the Day : "<<TOTAL_PASTA;
			
			cout<<"\n\n Number of burgers we had : "<<QBURGER;
			cout<<"\n Number of burgers we sold : "<<SBURGER;
			cout<<"\n Remaining Burgers : "<<QBURGER-SBURGER;
			cout<<"\n\n Total Burger collection for the Day : "<<TOTAL_BURGER;
			
			cout<<"\n\n Number of Noodles we had : "<<QNOODLES;
			cout<<"\n Number of Noodles we sold : "<<SNOODLES;
			cout<<"\n Remaining Noodles : "<<QNOODLES-SNOODLES;
			cout<<"\n\n Total Noodles collection for the Day : "<<TOTAL_NOODLES;
			
			cout<<"\n\n Number of shakes we had : "<<QSHAKE;
			cout<<"\n Number of Shakes we sold : "<<SSHAKE;
			cout<<"\n Remaining Shakes : "<<QSHAKE-SSHAKE;
			cout<<"\n\n Total Shakes collection for the Day : "<<TOTAL_SHAKE;
			
			cout<<"\n\n Number of Momos we had : "<<QMOMOS;
			cout<<"\n Number of Momos we sold : "<<SMOMOS;
			cout<<"\n Remaining Momos : "<<QMOMOS-SMOMOS;
			cout<<"\n\n Total Momos collection for the Day : "<<TOTAL_MOMOS;
			
			cout<<"\n\n\n Total Collection for the day : "<<TOTAL_ROOMS+TOTAL_PASTA+TOTAL_BURGER+TOTAL_NOODLES+TOTAL_SHAKE+TOTAL_MOMOS;
			break;
		case 8:
			exit(0);
		default:
			cout<<"\n Please select from the numbers mentioned above!";
	}

	goto p;
}
