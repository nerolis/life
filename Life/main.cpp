#include <iostream>
#include "life.hpp"

void Life();
void FirstLove();

int CreateCharacter();

Character nero;
int PopCharacter() {
    nero.setName("nerorenelis");
    return nero.GenerateLifeTime();
}

int main()
{
    // Every year of life we do Life();
    int GeneratedYears = PopCharacter();
    for (int Year = 0; Year < GeneratedYears; Year++) {
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
        nero.AddStatus("Inspiration");
        nero.LearnSkill("Javascript");
    }

    if (nero.GetCurrentYear() == 23) {
        nero.AddStatus("Fulltime job");
        nero.UnlearnSkill("Javascript");
        nero.LearnSkill("Advanced JavaScript");
        nero.LearnSkill("Base c#");
        nero.LearnSkill("Base c++");
        FirstLove();
    }

    if (nero.GetCurrentYear() == nero.GetLifetime() -1) {
        nero.SummaryLifeAndClear();
    }
}

void FirstLove()
{
    int Break = 215;
    for (int Day = 0; Day < 365; Day++ ) {
        if (Day == 31) {
            nero.AddStatus("Love");
        }

        if (Day == 62) {
            nero.AddStatus("Fall in love");
        }

        if (Day == 100) {
            nero.AddStatus("Productivity + 200%");
        }

        if (Day == Break) {
            nero.RemoveStatus("Love");
            nero.RemoveStatus("Productivity + 200%");
            nero.RemoveStatus("Fall in love");
            nero.AddStatus("Depression");
            break;
        }
    }
}
