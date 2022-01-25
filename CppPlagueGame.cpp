#include <iostream>

int main()
{
    class Plague;

    std::string name;

    std::cout << "Welcome to Plague; CPP Edition" << std::endl;
    std::cin >> name;
    std::cout << "Hello, " << name << "." << std::endl;

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
                populationvalue = 740000000;
            }
            else if (plague.length() < 4) {
                population = "5.4 billion";
                populationvalue = 540000000;
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
                std::cout << "Why not?!?!?!?!?!?" << std::endl;
                std::cin >> reply;
            }
        }

        void startOutbreak() {
            std::string suffix = "has just broken out in";
            std::string prefix = "Oh no ~ ";
            std::cout << prefix << plague << suffix << "United Kingdom" << "!!!!!!?????" << std::endl;
        }

        void randomCountry() {
            std::string countries[8] = {"UK", "USA", "Canada", "Germany", "Switzerland", "Italy", "Iceland", "Antarctica"};
            int random = rand() % 8;
            std::cout << countries[random];
        }

        void decrementPopulation()
        {

        }

        void incrementPopulation()
        {
            
        }

        void menu() {
            int response;
            std::cout << "Please select what you would like to do:" << std::endl;
            std::cout << "1. Start again." << std::endl;
            std::cin >> response;

            switch(response)
            {
                case 1:
                start();
                break;

                case 2:

                break;

                default:
                std::cout << "Please enter a valid input!";
                menu();
            }
        }
    };

    Plague yes;
    yes.start();

    return 0;
}
