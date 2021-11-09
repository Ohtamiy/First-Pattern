#include <decorator_buy.h>
#include <decorator_sell.h>
#include <automobile.h>

int main(){
    while (1) {
        int choice = 0;
        do {
            std::cout << "Do you want to add a new Car?(1 - yes, 2 - no) -> ";
            std::cin >> choice;
        } while (choice > 2 || choice < 1);

        if (choice == 1) {
            std::cout << "Enter mark of a new Car: ";
            std::string marka; std::cin >> marka;

            Automobile* AUTO = new Automobile(marka);

            std::cout << "How many prices u want to enter for sale: ";
            int amount; std::cin >> amount;

            std::cout << "Enter prices for which is this car for sale: \n";

            Decorator_Sell dec_s(AUTO);

            for (int i = 0; i < amount; i++) {
                int price; std::cin >> price;
                dec_s.sell(price);
            }

            std::cout << "How many prices u want to enter for sold: ";
            std::cin >> amount;

            std::cout << "Enter prices for which is this car was on sale: \n";

            Decorator_Buy dec_b(AUTO);

            for (int i = 0; i < amount; i++) {
                int price; std::cin >> price;
                dec_b.buy(price);
            }

            std::cout << "\n-----You entered this info-----\n\n";
            AUTO->display();
            dec_s.display();
            dec_b.display();

            delete AUTO;
        }
        else {
            std::cout << "Stopping programm..." << std::endl;
            break;
        }
    }
}

