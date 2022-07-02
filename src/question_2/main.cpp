#include "question2.h"
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    char loop_response{'Y'};
    double meal_price{0.0}, tip_rate{0.0};

    cout << "\nThank you for choosing us! If you want a receipt for your meal, please enter\n"
            "the pre-tax cost of your meal in the prompt below. You will also be prompted\n"
            "for how much you would like to tip, if you wish to do so. After submitting your"
            "\ninformation, your receipt will be printed."
         << endl;
    cout << "\nPress enter to begin.";
    do
    {
        do
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "\nEnter the cost for your meal: ";
            cin >> meal_price;
            if (cin.fail())
            {
                cout << "The program could not read your input, please try again" << endl;
            }
            else if (meal_price < 0.0)
            {
                cout << "The cost cannot be less than zero, please enter your amount again" << endl;
            }
        } while (cin.fail() || meal_price < 0.0);
        do
        {
            cin.clear();
            cin.ignore(100, '\n');
            cout << "How much do you wish to tip? (in %): ";
            cin >> tip_rate;
            if (cin.fail())
            {
                cout << "The program could not read your input, please try again" << endl;
            }
            else if (tip_rate < 0.0)
            {
                cout << "The tip percentage cannot be less than zero, please enter your amount again." << endl;
            }
        } while (cin.fail() || tip_rate < 0.0);
        Receipt user_receipt = Receipt(meal_price, tip_rate);
        cout << std::fixed << std::showpoint << std::setprecision(2);
        cout << "\n***YOUR RECEIPT***\n" << endl;
        cout << "Meal Cost: $" << meal_price << endl;
        cout << "Gratuity: $" << user_receipt.calculate_gratuity() << endl;
        cout << "Sales Tax due: $" << user_receipt.calculate_tax() << endl;
        cout << "Total cost: $" << user_receipt.display_receipt() << endl;

        cout << "Do you wish to process another transaction? (y/n): ";
        cin >> loop_response;
    } while (toupper(loop_response) == 'Y');
    cout << "Have a good day!" << endl;
    return 0;
}