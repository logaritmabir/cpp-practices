#include <iostream>
#include <string>

using namespace std;

class Bill{
	private:
		string productNumber;
		string productDescription;
		int orderQuantity;
		int productPrice;
	public:
		Bill(string,string,int,int);
		
		int calculatePayment(int,int);
		
		string getProductNumber();
		void setProductNumber(string);
		
		string getProductDescription();
		void setProductDescription(string);
		
		int getOrderQuantity();
		void setOrderQuantity(int);
		
		int getProductPrice();
		void setProductPrice(int);
};
