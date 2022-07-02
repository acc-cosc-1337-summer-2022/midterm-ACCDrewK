#ifndef QUESTION2_H
#define QUESTION2_H

bool test_config();

class Receipt
{
  public:
    Receipt(double meal_price, double tip_rate) : price(meal_price), gratuity(tip_rate){};
    double calculate_tax() const; // total tax due
    double calculate_gratuity() const; // total tip amount
    double display_receipt() const; // total cost

  private:
    double price{0.0};
    double gratuity{0.0};
    const double tax{0.08}; // 8% sales tax
};

#endif // QUESTION2_H