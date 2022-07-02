#include "question1.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

const string INPUT_ERR_MSG{"The program was unable to read your input. Please try again."};

bool test_config()
{
    return true;
}

int Q1_Rectangle::get_length() const
{
    return length;
}

int Q1_Rectangle::get_width() const
{
    return width;
}

int Q1_Rectangle::calculate_area() const
{
    return length * width;
}

/* Free Functions */

// Create a new rectangle
Q1_Rectangle create_rectangle(int length, int width)
{
    return Q1_Rectangle(length, width);
}

// Display the main menu, then return user selection
int display_menu()
{
    int choice{0};
    do
    {
        cout << "Choose one of the menu options:" << endl;
        cout << "1. Create rectangle" << endl;
        cout << "2. Display rectangle length" << endl;
        cout << "3. Display rectangle width" << endl;
        cout << "4. Display rectangle area" << endl;
        cout << "5. Exit program" << endl;
        cout << "Enter selection: ";
        cin >> choice;
        while (cin.fail())
        {
            cout << INPUT_ERR_MSG << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Enter selection: ";
            cin >> choice;
        }
        if (choice < 1 || choice > 5)
        {
            cout << "Error - Invalid input: You must select one of the five items in the menu above.\nIf you mean to "
                    "quit, enter \'5\' at the next prompt\n"
                 << endl;
        }

    } while (choice < 1 || choice > 5);
    return choice;
}

// Get width from the user -- it cannot be less than 0
int input_width()
{
    int width{0};
    string input_msg{"Enter the width of the rectangle: "};

    cout << input_msg;
    do
    {
        cin >> width;
        while (cin.fail())
        {
            cout << INPUT_ERR_MSG << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cout << input_msg;
            cin >> width;
        }
        if (width <= 0)
        {
            cout << "Sorry, but you must enter a number above zero, please try again." << endl;
            cout << input_msg;
        }

    } while (width <= 0);
    return width;
}

// Gets length of the rectangle from the user; must be greater than 0
int input_length()
{
    int length{0};
    string input_msg{"Enter the length of the rectangle: "};

    cout << input_msg;
    do
    {
        cin >> length;
        while (cin.fail())
        {
            cout << INPUT_ERR_MSG << endl;
            cin.clear();
            cin.ignore(100, '\n');
            cout << input_msg;
            cin >> length;
        }
        if (length <= 0)
        {
            cout << "Sorry, but you must enter a number above zero, please try again." << endl;
            cout << input_msg;
        }

    } while (length <= 0);
    return length;
}