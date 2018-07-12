#include <iostream>
#include "life.hpp"

void Life();
void FirstLove();

Character nero;

int main()
{
    for (int Year = 0; Year < nero.GenerateLifeTime(); Year++) {
        std::cout << "Year: " << Year << std::endl;
        nero.WriteYear(Year);
        Life();
    }
    return 0;
}

void Life()
{
    if (nero.GetCurrentYear() == 0) {
        std::cout << "Begin" << std::endl;
    }

    if (nero.GetCurrentYear() == 1) {
        nero.LearnSkill("Talk");
        nero.LearnSkill("Walk");
    }

    if (nero.GetCurrentYear() == 5) {
        nero.LearnSkill("Read");
    }

    if (nero.GetCurrentYear() == 22) {
        nero.LearnSkill("Javascript");
    }

    if (nero.GetCurrentYear() == 23) {
        FirstLove();
    }

    if (nero.GetCurrentYear() == nero.GetLifetime() -1) {
        nero.GetSkills();
        std::cout << "End" << std::endl;
    }
}

void FirstLove()
{   nero.LearnSkill("Love");
    int End = 215;
    for (int Day = 0; Day < 365; Day++ ) {
        std::cout << "Day: " << Day << std::endl;
        if (Day == End) {
            nero.UnlearnSkill("Love");
            break;
        }
    }
}
