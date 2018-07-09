#include <iostream>

void Life();
void FallInLove();

bool IsAlive();

int CurrentYear;

int GenerateLifeTime()
{
    srand(time(NULL));
    return rand() % 100;
}

int main()
{
    int Years = GenerateLifeTime();

    for (Years; Years >= 0; --Years) {
        CurrentYear = Years;
        Life();
    }
    return 0;
}

void Life()
{
    if (CurrentYear == 23) {
        FallInLove();
    }
}

void FallInLove()
{
    for (int Day = 0; Day < 365; Day++ ) {
        if (Day >= 215) {
            std::cout << "End of love" << std::endl;
            break;
        }
        std::cout << Day<< std::endl;
    }
}
