#include <iostream>
#include <string>

enum class MyanmarSeason {
    Rainy_Season,
    Winter,
    Summer
};

std::string getMonth(MyanmarSeason season) {
        std::string months;
        switch (season){
            case MyanmarSeason::Rainy_Season:months="June, July, Augest, September, Octtober";
            break;
            case MyanmarSeason::Winter:months="November, December, January, February";;
            break;
            case MyanmarSeason::Summer:months="March, April, May";
            break;
        }
        return months;
}

int main(){

    int choice;

    std::cout <<"Choose a season in Myanmar: \n ";
    std::cout <<"1. Rainy Season \n ";
    std::cout <<"2. Winter \n ";
    std::cout <<"3. Summer \n ";
    std::cin >> choice;

    MyanmarSeason selectedSeason;
    switch(choice){
        case 1:
           selectedSeason = MyanmarSeason::Rainy_Season;
           break;
        case 2:
           selectedSeason = MyanmarSeason::Winter;
           break;
        case 3:
           selectedSeason = MyanmarSeason::Summer;
           break; 
        default:   
           std::cout <<"Invalid Choice \n ";
    }

    std::string months = getMonth(selectedSeason);
    std::cout << "The months for the selected seasons are "<< months <<" \n";

    return 0;

}