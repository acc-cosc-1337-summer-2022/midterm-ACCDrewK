#include "question1.h"
#include <cctype>
#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    int width{0}, length{0}, menu_choice{0};
    bool rectangle_created{false};
    char continue_input{'N'};
    Q1_Rectangle new_rectangle{create_rectangle(length, width)};

    cout << "Rectangle Analyzer, by Andrew Kane\n" << endl;
    cout << "With this program, you can create a rectangle with a length and width of your choosing. Use the menu "
            "below to create a rectangle and display it's dimensions.\n"
         << endl;

    do
    {
        menu_choice = display_menu();
        switch (menu_choice)
        {
        case 1: // create rectangle here
            length = input_length();
            width = input_width();
            new_rectangle = create_rectangle(length, width);
            rectangle_created = true;
            cout << "New rectangle created!" << endl;
            break;
        case 2: // display length
            if (rectangle_created)
            {
                cout << "The length of the rectangle is: " << new_rectangle.get_length() << endl;
            }
            else
            {
                cout << "Error: No rectangle has been created, cannot display it's length.\n";
                cout << "Create a new rectangle from the menu to use this function." << endl;
            }
            break;
        case 3: // display width
            if (rectangle_created)
            {
                cout << "The width of the rectangle is: " << new_rectangle.get_width() << endl;
            }
            else
            {
                cout << "Error: No rectangle has been created, cannot display it's width.\n";
                cout << "Create a new rectangle from the menu to use this function." << endl;
            }
            break;
        case 4: // display area
            if (rectangle_created)
            {
                cout << "The area of the rectangle is: " << new_rectangle.calculate_area() << endl;
            }
            else
            {
                cout << "Error: No rectangle has been created, cannot display it's area.\n";
                cout << "Create a new rectangle from the menu to use this function." << endl;
            }
            break;
        case 5: // exit program
            cout << "Are you sure you want to exit? (y/n) ";
            cin >> continue_input;
            break;
        default:
            cout << "Error: User made invalid choice.\n" << endl;
            exit(1);
        }
    } while (toupper(continue_input) != 'Y');
    return 0;
}