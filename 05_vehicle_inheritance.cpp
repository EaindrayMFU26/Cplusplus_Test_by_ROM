#include <iostream>
#include <string>

class Vehicle {
    private:
       std::string make;
       std::string model;

    public:
       Vehicle(std::string make, std::string model){
            this->make=make;
            this->model=model;
       }   

    void displayVehicleDetails(){
        std::cout<<"Make : "<<make<<std::endl;
        std::cout<<"Model : "<<model<<std::endl;
    }   
};

class Car: public Vehicle{
    private:
        int numDoor;

    public:
        Car(std::string make, std::string model, int numDoor): Vehicle(make, model){
            this->numDoor=numDoor;

        } 

        void displayCarDetails(){
            displayVehicleDetails();
            std::cout<<"Number of Doors : "<<numDoor<<std::endl;
        }   
};

int main(){
     Car car1("Toyota", "Corolla", 4);
     car1.displayCarDetails();

     Car car12("Toyota", "Hilux", 2);
     car12.displayCarDetails();

     return 0;
}