#include "Array.h"
#include <iostream>
#include <stdexcept>

Array::Array(int arraySize){
	if(arraySize > 0){
		this->size = arraySize;
		this->firstMember = new int[size];
		for(int i=0;i<size;i++){
			*(firstMember+i) = 0;
		}
	}
	else{
		throw invalid_argument("Creating array with non positive array?");
	}

}
Array::Array(const Array &copyArray):size(copyArray.size){
	this->firstMember = new int[size];
	for(int i=0;i<size;i++){
		firstMember[i] = copyArray.firstMember[i];
	}
}
int& Array::operator[](int index){
	if(index > size || index < 0){
		throw out_of_range("Out of range");
	}
	else{
		return firstMember[index];
	}
}
void Array::operator=(const Array right){
	size = right.size;
	delete this->firstMember;
	this->firstMember = new int[size];
	for(int i=0;i<size;i++){
		firstMember[i] = right.firstMember[i];
	}
}
Array& Array::operator++(){
	for(int i=0;i<size;i++){
		firstMember[i]++;
	}
}
bool Array::operator==(const Array right){
	int i;
	
		for(i=0;i<this->size;i++){
			if(this->firstMember[i] != right.firstMember[i]){
				break;
			}
		}
		if(i == this->size){
			return true;
		}
		else{
			return false;
		}
}
int* Array::getFirstMember(){
	return this->firstMember;
}
int Array::getSize(){
	return size;
}

