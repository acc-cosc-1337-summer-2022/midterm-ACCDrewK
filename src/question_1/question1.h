#ifndef RECTANGLE_H
#define RECTANGLE_H

bool test_config();

class Q1_Rectangle
{
    friend Q1_Rectangle create_rectangle(int length, int width);

  public:
    int get_length() const;
    int get_width() const;
    int calculate_area() const;

  private:
    Q1_Rectangle(int l, int w) : length(l), width(w){};
    int length{0};
    int width{0};
};

/* Free functions */

Q1_Rectangle create_rectangle(int length, int width);
int display_menu();
int input_length();
int input_width();

#endif // RECTANGLE_H