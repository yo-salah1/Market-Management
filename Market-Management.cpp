#include<iostream>
#include<String>

using namespace std;
class Market
{
private :
	int ID;
	string Name;
	string ExpiredDate;
	double Profit;
	double Price;
	int Quantity;
public : 
	Market()  : ID(0),Name ("YS"),ExpiredDate ("2024/10/1"),Profit (0),Price (0),Quantity (0)           // Default Constructor
	{
		
		cout<<"-------------------YS---------------------------\n";
	}
	
	Market(int i , string n, string ex ,double pro ,double pr , int q )
	{
		ID = i;
		Name = n;
		ExpiredDate = ex;
		Profit = pro;
		Price = pr;
		Quantity = q;
	}

    	Market(int i , string n, string ex ,double pr , int q )
	{
		ID = i;
		Name = n;
		ExpiredDate = ex;
		Price = pr;
		Quantity = q;
	}
	
	void SetId (int I)
	{
		ID = I;
	}
	
		int GetId ()
	{
		return ID;
	}
		void SetName (string N)
	{
		Name = N;
	}
	
	
		string GetName ()
	{
		return Name ;
	}
	
		void SetExpiredDate (string Ex)
	{
		ExpiredDate = Ex;
	}
	
		string GetExpiredDate ()
	{
	
		return ExpiredDate;
	}
	
		void SetProfit (double Pro )
	{
		Profit = Pro;
	}
	
		double GetProfit ()
	{
      	return	Profit ;
	}
	
		void SetPrice (double Pr)
	{
		Price = Pr ;
	}
	
	
		double GetPrice ()
	{
		return Price ;
	}
		void SetQuantity (int Q)
	{
		Quantity = Q;
	}
	
		int GetQuantity ()
	{
		return Quantity;
	}
	
	void Withdraw (int Amount)
	{
		if(Amount <= Quantity)
		Quantity-=Amount;
		else 
		cout<<"Quantity required is more than available \n";
	}
	
	void Deposit(int Amount)
	{
		Quantity+=Amount;
	}
	
	void Interest ()
	{	
     	Profit = Price + (0.10f)*Price;
	}
	
	void PrintInfo()
	{
		cout<<"ID is "<<ID<<endl
		    <<"Product Name is "<<Name<<endl
		    <<Name<<" Expired Date : "<<ExpiredDate<<endl
		    <<Name<<" Price : "<<Price<<endl
		    <<Name<<" Quantity : "<<Quantity<<endl
		    <<Name<<" profit : "<<Profit;


	}


	~Market ()                                  //Destructor
	{
		cout<<"\n\n\n*******************YS***************************\n\n\n	";
	}
	

};

int main()

     
{
while(true)
{
	Market M1(1001,"YS Peoduct 1","1/10/2024",500,3) ;
	cout<<"choose The Operation num\n"
	    <<"-------------------------\n\n"
	    <<"1.Enter all Product Info\t\t"<<"--YS--\t\t"
	    <<"2.Print all Product Info\n\n"
	    <<"3.Print Profit of the product"<<"\t\t--YS--"<<"\t\t4.Print ExpiredDate"
	    <<"\n\n5.Deposit"<<"\t\t\t\t--YS--"
	    <<"\t\t6.Withdraw\n\n"
	    <<"------------------------------------------------------\n";
	
	int Order;
	cin>>Order;
	if(Order==1)
	{
	int ID;
	string Name;
	string ExpiredDate;
	double Price;
	int Quantity;
	
		cout<<"Enter product Id\n";
		cin>>ID;
		M1.SetId(ID);	
		cout<<"Enter product Name\n";
		cin>>Name;
		M1.SetName(Name);
		cout<<"Enter product Price\n";
		cin>>Price;
		M1.SetPrice(Price);
		cout<<"Enter product Expired Date\n";
		cin>>ExpiredDate;
		M1.SetExpiredDate(ExpiredDate);
		cout<<"Enter product Quantity\n";
		cin>>Quantity;
		M1.SetQuantity(Quantity);
	}
	else if(Order==2)
	{
		M1.PrintInfo();
	}
	else if(Order==3)
	{
		cout<<"The Profit of "<<M1.GetName()<<": "<<M1.GetProfit()<<endl;
	}
	else if(Order==4)
	{
		cout<<"Expired Data of "<<M1.GetName()<<" : "<<M1.GetExpiredDate()<<endl;
	}
	else if(Order==5)
	{
		cout<<"Set Deposit Amount of "<<M1.GetName()<<endl;
		int a;
		cin>>a;
		M1.Deposit(a);
		cout<<"The Quantity Now Is : "<<M1.GetQuantity();
	}
	else if(Order==6)
	{
		cout<<"Set Withdraw Amount of "<<M1.GetName()<<endl;
		int a;
		cin>>a;
		M1.Withdraw(a);
		cout<<"The Quantity Now Is : "<<M1.GetQuantity();
	}
}
return 0;

}                                                                                 // This Code Made By Yousif Salah (YS)
