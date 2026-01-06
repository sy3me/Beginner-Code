#include <iostream>
#include <ctime>

int main(){
    int mhealth = 20;
    int chealth = 20;
    int dmin = 2;
    int dmax = 12;
    int tagain;
    int action;
    int dmg;
    int dboost;
    int heal;
    int mdmg;
    
    srand(time(NULL));
    
    std::cout << "Welcome to Monster Hunter!\nA wild Spider approaches! HP(20)!\n";
    do{
        int mhealth = 20;
        int chealth = 20;
        int dmin = 2;
        int dmax = 12;

        std::cout << "Stats: HP(" << chealth << ") DMG (" << dmin << "-" << dmax << ")\n";
        do{ 
        std::cout << "Type '1' to attack, type '2' to heal, type '3' to perform a DMG boost:\t Character HP(" << chealth << ") Spider HP(" << mhealth << ")\n";
        std::cin >> action;
        
        switch (action){
            case 1:
                dmg = (rand() % (dmax - dmin)) + dmin;
                mhealth = mhealth - dmg;
                std::cout << "You dealt " << dmg << " damage to the Spider! it now has HP(" << mhealth << ")\n";
                break;
            case 2:
                heal = (rand() % 6) + 1;
                chealth = chealth + heal;
                std::cout << "You healed for HP(" << heal << ") and now have HP(" << chealth << ")\n";
                break;
            case 3:
                dboost = (rand() % 5) + 1;
                dmin = dmin + dboost*0.5;
                dmax = dmax + dboost;
                std::cout << "You now have DMG (" << dmin << "-" << dmax << ")\n";
                break;
        }
        if (chealth > 0){
            mdmg = (rand() % 8);
            chealth = chealth - mdmg;
            std::cout << "The monster dealt " << mdmg << " damage!\n";
        } else{}
        } while (chealth > 0 && mhealth > 0);
        
        if (mhealth <= 0){
        std::cout << "Congratulations, you have killed the monster Spider!\nType '1' to play again, or type '0' to stop!\n";
        std::cin >> tagain;
        } else if(chealth <=0){
        std::cout << "Defeat! Type '1' to try again, or type '0' to stop!\n";
        std::cin >> tagain;
        }
    } while(tagain == 1);
}