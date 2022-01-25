#include <iostream>
#include <thread>
#include <chrono>

int main()
{
    class Plague;

    std::string name;

    std::cout << "Welcome to Plague; CPP Edition" << std::endl;
    std::cout << "Enter your name: ";
    std::cin >> name;
    std::cout << "Hello, " << name << "." << std::endl;

    class Plague {
    public:
        std::string plague;
        std::string population;
        int populationvalue;

        bool ongoing = false;

        int incrementrate = 1000;
        int decrementrate = 1000;
        int rateMS = 500;

        void reset() {
            plague = "";
            population = "";
            populationvalue = 0;
            ongoing = false;
            incrementrate = 1000;
            decrementrate = 1000;
            rateMS = 500;

            std::cout << "Successfully reset" << std::endl;

            start();
        }

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

            wouldYouLikeToStartAnOutbreak();
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
            std::string suffix = " has just broken out in ";
            std::string prefix = "Oh no ~ ";
            std::string country = randomCountry();

            std::cout << prefix << plague << suffix << country << "!" << std::endl;

            ongoing = true;
            decrementPopulation();
        }

        std::string randomCountry() {
            std::string countries[8] = {"UK", "USA", "Canada", "Germany", "Switzerland", "Italy", "Iceland", "Antarctica"};
            int random = rand() % 8;
            return countries[random];
        }

        void displayCurrentPopulation()
        {
            std::cout << populationvalue << std::endl;
        }

        void decrementPopulation()
        {
            while (ongoing)
            {
                sleepForFewSeconds();
                populationvalue -= decrementrate;
                displayCurrentPopulation();
            }
        }

        void incrementPopulation()
        {
            while (ongoing)
            {
                sleepForFewSeconds();
                populationvalue += incrementrate;
                displayCurrentPopulation();
            }
        }

        void sleepForFewSeconds()
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(rateMS));
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
