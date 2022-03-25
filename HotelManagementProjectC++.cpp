// Hotel Management Project Using C++ Programming Language

#include<iostream>
using namespace std;
int main()
{
	int quant;
	int choice;
	//Quantity
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshakes=0, Qchicken=0;
	// Food items sold
	int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshakes=0, Schicken=0;
	// Total price of items
	int Total_room=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shakes=0, Total_chicken=0;
	
	
	cout<<"\n\t Quantity of items we have";
	cout<<"\n Rooms available:";
	cin>>Qrooms;
	cout<<"\n Quantity of pasta : ";
	cin>>Qpasta;
	cout<<"\n Quantity of Burger : ";
	cin>>Qburger;
	cout<<"\n Quantity of noodles : ";
	cin>>Qnoodles;
	cout<<"\n Quantity of shakes : ";
	cin>>Qshakes;
	cout<<"\n Quantity of chicken roll : ";
	cin>>Qchicken;
	
	m:
	cout<<"\n\t\t\t Please select from the menu option ";
	cout<<"\n\n1) Rooms ";
		cout<<"\n\n2) Pasta ";
			cout<<"\n\n3) Burger ";
				cout<<"\n\n4) Noodles ";
					cout<<"\n\n5) Shakes ";
						cout<<"\n\n6) Chicken Roll ";
							cout<<"\n\n7) Information regarding sales and collection ";
								cout<<"\n\n8) Exit ";
								
	cout<<"\n\n Please enter your choice! ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter the number of rooms you want : ";
			
			cin>>quant;
			if(Qrooms-Srooms >= quant)
			{
				Srooms = Srooms + quant;
				Total_room = Total_room + quant*1200;
				cout<<"\n\n\t\t"<<quant<<" room/rooms have been alloted to you! ";
			}
			else
			{
				cout<<"\n\t Only "<<Qrooms-Srooms<<" Rooms remaining in hotel ";
			}
			break;
			
		case 2:
			cout<<"\n\n Enter Pasta Quantity : ";
			
			cin>>quant;
			if(Qpasta-Spasta >= quant)
			{
				Spasta = Spasta + quant;
				Total_pasta = Total_pasta + quant*250;
				cout<<"\n\n\t\t"<<quant<<" Pasta is the order! ";
			}
			else
			{
				cout<<"\n\t Only "<<Qpasta-Spasta<<" Pasta remaining in hotel ";
			}
			break;
			
		case 3:
			cout<<"\n\n Enter Burger Quantity : ";
			
			cin>>quant;
			if(Qburger-Sburger >= quant)
			{
				Sburger = Sburger + quant;
				Total_burger = Total_burger + quant*250;
				cout<<"\n\n\t\t"<<quant<<" Burger is the order! ";
			}
			else
			{
				cout<<"\n\t Only "<<Qburger-Sburger<<" Burger remaining in hotel ";
			}
			break;
			
		case 4:
			cout<<"\n\n Enter Noodles Quantity : ";
			
			cin>>quant;
			if(Qnoodles-Snoodles >= quant)
			{
				Snoodles = Snoodles + quant;
				Total_noodles = Total_noodles + quant*140;
				cout<<"\n\n\t\t"<<quant<<" Noodles is the order! ";
			}
			else
			{
				cout<<"\n\t Only "<<Qnoodles-Snoodles<<" Noodles remaining in hotel ";
			}
			break;
			
		case 5:
			cout<<"\n\n Enter Shakes Quantity : ";
			
			cin>>quant;
			if(Qshakes-Sshakes >= quant)
			{
				Sshakes = Sshakes + quant;
				Total_shakes = Total_shakes + quant*120;
				cout<<"\n\n\t\t"<<quant<<" Shakes is the order! ";
			}
			else
			{
				cout<<"\n\t Only "<<Qshakes-Sshakes<<" Shakes remaining in hotel ";
			}
			break;
			
		case 6:
			cout<<"\n\n Enter Chicken Roll Quantity : ";
			
			cin>>quant;
			if(Qchicken-Schicken >= quant)
			{
				Schicken = Schicken + quant;
				Total_chicken = Total_chicken + quant*150;
				cout<<"\n\n\t\t"<<quant<<" Chicken Roll is the order! ";
			}
			else
			{
				cout<<"\n\t Only "<<Qchicken-Schicken<<" Chicken Roll remaining in hotel ";
			}
			break;
			
		case 7:
			cout<<"\n\t\t Details of sales and collections ";
			cout<<"\n\n Number of rooms we had : "<<Qrooms;
			cout<<"\n\n Number of rooms we gave for rent : "<<Srooms;
			cout<<"\n\n Remaining rooms : "<<Qrooms-Srooms;
			cout<<"\n\n Total rooms collection for the day : "<<Total_room;
						
			cout<<"\n\n Number of Pasta we had : "<<Qpasta;
			cout<<"\n\n Number of Pasta we gave for rent : "<<Spasta;
			cout<<"\n\n Remaining Pasta : "<<Qpasta-Spasta;
			cout<<"\n\n Total Pasta collection for the day : "<<Total_pasta;
						
			cout<<"\n\n Number of Burger we had : "<<Qburger;
			cout<<"\n\n Number of Burger we gave for rent : "<<Sburger;
			cout<<"\n\n Remaining Burger : "<<Qburger-Sburger;
			cout<<"\n\n Total Burger collection for the day : "<<Total_burger;
			
			cout<<"\n\n Number of Noodles we had : "<<Qnoodles;
			cout<<"\n\n Number of Noodles we gave for rent : "<<Snoodles;
			cout<<"\n\n Remaining Noodles : "<<Qnoodles-Snoodles;
			cout<<"\n\n Total Noodles collection for the day : "<<Total_noodles;
			
			cout<<"\n\n Number of Shakes we had : "<<Qshakes;
			cout<<"\n\n Number of Shakes we gave for rent : "<<Sshakes;
			cout<<"\n\n Remaining Shakes : "<<Qshakes-Sshakes;
			cout<<"\n\n Total Shakes collection for the day : "<<Total_shakes;
			
			cout<<"\n\n Number of Chicken roll we had : "<<Qchicken;
			cout<<"\n\n Number of Chicken roll we gave for rent : "<<Schicken;
			cout<<"\n\n Remaining Chicken roll : "<<Qchicken-Schicken;
			cout<<"\n\n Total Chicken roll collection for the day : "<<Total_chicken;
			
			cout<<"\n\n\n Total collection for the day: "<< Total_room+Total_burger+Total_pasta+Total_noodles+Total_shakes+Total_chicken;
			break;
		case 8:
			exit(0);
		
		default :
			cout<<"\n Please select the numbers mentioned above!";
	}		
	goto m;
					
	
	return 0;
}
