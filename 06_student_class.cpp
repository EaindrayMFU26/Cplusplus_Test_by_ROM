#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    std::string class_name;
    int roll_number;
    int mark;

public:
    Student(std::string name, std::string class_name, int roll_number, int mark){
        this->name=name;
        this->class_name=class_name;
        this->roll_number=roll_number;
        this->mark=mark;

    }   

    std::string calculateGrade(){
        if (mark >= 80){
            return "A";
        }else if(mark < 79){
            return "B";
        }else if(mark >=60){
            return "C";
        }else if(mark >=40){
            return "D";
        }else {
            return "F";
        }

    } 

    void displayInfo(){
        std::cout<< "Name: "<< name <<std::endl;
        std::cout<< "Class Name: "<< class_name <<std::endl;
        std::cout<< "Roll Number: "<< roll_number <<std::endl;
        std::cout<< "Mark: "<< mark <<std::endl;
        std::cout<< "Grade: "<< calculateGrade() <<std::endl;
    }
};

int main(){
    Student student1("Mr Coffee", "10th Grade", 1, 87);
    student1.displayInfo();

    Student student2("Mr Tea", "10th Grade", 2, 65);
    student2.displayInfo();

    return 0;
}