#include <iostream>

class Car{
		int howOld;
		//void Drive();
	public:
		Car(int);
		void Drive();
};

class Bus{
		int howOld;
	public:
		Bus(int);
		void Drive();
};

Car::Car(int age){
	
	howOld = age;
	std::cout<<"Made a Car"<<std::endl;
	std::cout<<"Car Age = "<< howOld <<std::endl;
}

void Car::Drive(){

	std::cout<<"Driving a Car"<<std::endl;
}

Bus::Bus(int age){
	
	howOld = age;
	std::cout<<"Made a Bus!"<<std::endl;
	std::cout<<"Bus Age! = "<< howOld <<std::endl;
}

void Bus::Drive(){

	std::cout<<"Driving a Bus!"<<std::endl;
}

int main(){
	
	Bus B0(5);
	B0.Drive();
	
	Car C0(8);
	C0.Drive();
	
	//here is the essence of private members, uncomment and compile
	//can you describe this line of code??
	//std::cout<<"Private Member: "<<C0.howOld<<std::endl;
	
	return 0;
}
