//
//  main.cpp
//  cppm_homework_02.01
//
//  Created by a1ex on 6/17/23.
//

#include <iostream>
#include <string>

enum Months
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main(int argc, const char * argv[]) {
   
    
    Months month;
    unsigned int num = 0;
    
    do {
        std::cout << "Please enter your month number: ";
        std::cin >> num;
        if (0 <num && num > 12){
            std::cout << "Please enter correct month number!" << '\n';
        }
        if (num == Months::January){
            std::cout << "January" << '\n';
        } else if (num == Months::February){
            std::cout << "February" << '\n';
        } else if (num == Months::March){
            std::cout << "March" << '\n';
        } else if (num == Months::April){
            std::cout << "April" << '\n';
        } else if (num == Months::May){
            std::cout << "May" << '\n';
        } else if (num == Months::June){
            std::cout << "June" << '\n';
        } else if (num == Months::July){
            std::cout << "July" << '\n';
        } else if (num == Months::August){
            std::cout << "August" << '\n';
        } else if (num == Months::September){
            std::cout << "September" << '\n';
        } else if (num == Months::October){
            std::cout << "October" << '\n';
        } else if (num == Months::November){
            std::cout << "November" << '\n';
        } else if (num == Months::December){
            std::cout << "December" << '\n';
        }
        } while (num !=  0);
    

    
    
    
    
    
    return 0;
}
