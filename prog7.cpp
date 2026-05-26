#include<iostream>
#include<string>
class Car{
public :
    std::string brand,color;
    int year;
    void startengine()
    {
        std::cout<< "the" <<color<<""<<brand<<"'s engine is running"<<std::endl;
    }
};
int main(){
    Car myCar;
    myCar.brand=" BMW ";
    myCar.color=" blue ";
    myCar.year=2025;

    Car friendsCar;
    friendsCar.brand=" toyota ";
    friendsCar.color=" red ";
    friendsCar.year=2007;

    myCar.startengine();
    friendsCar.startengine();
    return 0;

}