#include <iostream>
#include <string>
#include "Bill.h"

using namespace std;

Bill::Bill(string ConsProductNumber,string ConsProductDescription,int ConsOrderQuantity,int ConsProductPrice){
	setProductNumber(ConsProductNumber);
	
	setProductDescription(ConsProductDescription);
	
	setOrderQuantity(ConsOrderQuantity);
	
	setProductPrice(ConsProductPrice);
	
	cout << "A bill has been created with these values ; " << endl
	<< "Product Number : " << ConsProductNumber << endl
	<< "Product Description : " << ConsProductDescription << endl
	<< "Order Quantity : " << ConsOrderQuantity << endl
	<< "Product Price : " << ConsProductPrice << endl
	<< "Total Price : " << calculatePayment(ConsOrderQuantity,ConsProductPrice) << endl;
}
string Bill::getProductNumber(){
	return productNumber;
}
void Bill::setProductNumber(string pNumber){
	productNumber = pNumber;
}

string Bill::getProductDescription(){
	return productDescription;
}
void Bill::setProductDescription(string pDescription){
	productDescription = pDescription;
}

int Bill::getOrderQuantity(){
	return orderQuantity;		
}
void Bill::setOrderQuantity(int oQuantity){
	orderQuantity = oQuantity;
}

int Bill::getProductPrice(){
	return productPrice;
}
void Bill::setProductPrice(int pPrice){
	productPrice = pPrice;
}

int Bill::calculatePayment(int quantity,int price){
	return quantity*price;
}

