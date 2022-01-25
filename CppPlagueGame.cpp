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

        void wouldYouLikeToStartAnOutbreak() {
            std::string response;
            std::cout << "Would you like to start an outbreak of " << plague << "?"<< " Y/N" << std::endl;
            std::cin >> response;
            if (response == "Y")
            {
                startOutbreak();
            }
            else if (response == "N")
            {
                std::string reply;
                std::cout << "Why not??!?!?!?!?!?" << std::endl;
                std::cin >> reply;
            }
        }

        void startOutbreak() {
            std::string suffix = "has just broken out in"
            std::string prefix = "Oh no ~ "
            std::cout << prefix << plague << suffix << "United Kingdom" << "!!!!!!?????" << std::endl;
        }

        void randomCountry() {
            const char countries[8] = {"United Kingdom", "United States of America", "Canada", "Germany", "Switzerland", "Italy", "Iceland", "Antartica"};
            int random = rand() % 8;
            std::cout << countries[random];
        }

        void menu() {
            std::string response;
            std::cout << "Please select what you would like to do:" << std::endl;
            std::cout << "1. Start again."
            std::cin >> response;

            switch(response)
            {
                case "1":
                start();
                break;

                case "2":

                break;

                default:
                std::cout << "Please enter a valid input!"
                menu();
            }
        }
    };
    return 0;
}
