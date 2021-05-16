#include <iostream>

int main(){

	//intitialized and assigned
	int x[5] = {1,2,3,4,5};
	//only initialized, junk values instead of 1,2,3,4,5
	int y[5];
	//try this
	int length_z = 5;
	//int z[length_z];
	
	//now try this
	int *z = new int[length_z]; //non-literal length values require this statement
	std::cout<<z<<std::endl;
	
	//now onto pointers as arrays
	//google about pointers and arrays a little bit
	//tutorialspoint.com is good
	
	//this is a for loop that increments the pointer address by a 4bytes every 
	//iteration and dereferences the address to get the value at that address
	int *u;
	for(int i = 0; i < 7; i++){
			std::cout<<*u<<std::endl;
			u++;
	}
	
	return 0;
}
