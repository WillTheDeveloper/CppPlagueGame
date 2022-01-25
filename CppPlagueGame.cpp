#include <iostream>

int main()
{
    class Plague;

    std::string name;

    std::cout << "Welcome to Plague; CPP Edition" << std::endl;
    std::cin >> name;
    std::cout << "Hello, " << name << "." << std::endl;

    Plague yes;

    yes.start;

    class Plague {
    public:
        std::string plague;
        std::string population;
        int populationvalue;

        void start() {
            std::cout << "Please state the name of the plague:" << std::endl;
            std::cin >> plague;

            if (plague.length() > 4) {
                population = "7.4 billion";
                populationvalue = 7400000000;
            }
            else if (plague.length() < 4) {
                population = "5.4 billion";
                populationvalue = 5400000000;
            }

            std::cout << "The world's current population is " << population << std::endl;
        }
    };
    return 0;
}
