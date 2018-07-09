#include <iostream>
#include "life.hpp"

void Life();
void FirstLove();

int CurrentYear;

Character nero;

int main()
{
    int Years = nero.GenerateLifeTime();

    for (; Years >= 0; --Years) {
        nero.WriteYear(Years);
        Life();
    }
    return 0;
}

void Life()
{
    if (nero.GetCurrentYear() == 23) {
        FirstLove();
    }
}


void FirstLove()
{
    int TheEnd = 215;
    for (int Day = 0; Day < 365; Day++ ) {
        std::cout << "Day " << Day << std::endl;
        if (Day >= TheEnd) {
            break;
        }
    }
}
