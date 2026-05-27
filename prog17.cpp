#include<iostream>
#include<string>
void qulification()
{
    std::string name, degree;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your degree: ";
    std::getline(std::cin, degree);
    std::cout << "Name: " << name <<"\nDegree: " << degree << std::endl;
}

int main()
{
    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cin.ignore();
    if(age >= 18)
    {
        std::string place;
        std::cout << "Enter your place: ";
        std::getline(std::cin, place);
        if(place=="Mumbai" || place=="Bangalore")
        {
            std::string degree;
            std::cout << "Enter your degree: ";
            std::getline(std::cin, degree);
            if(degree=="Bachelors" || degree=="Masters")
            {
                std::string gender;
                std::cout << "Enter your gender: ";
                std::getline(std::cin, gender);
                if(gender=="female")
                {
                    qulification();
                }
                else
                {
                    std::cout << "You are not eligible to apply." << std::endl;
                }
            }
            else
            {
                std::cout << "You are not eligible to apply." << std::endl;
            }
        }
        else
        {
            std::cout << "You are not eligible to apply." << std::endl;
        }
    }
    else
    {
        std::cout << "You are not eligible to apply." << std::endl;
    }
    return 0;
}