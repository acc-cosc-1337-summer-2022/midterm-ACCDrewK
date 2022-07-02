#ifndef QUESTION3_H
#define QUESTION3_H

bool test_config();

#include <cstdlib>
#include <ctime>

class Die
{
  private:
    int sides{6};
    int seed{time(NULL)};

  public:
    Die()
    {
        srand(seed); // seed srand once when die is created
    }
    int roll() const;
};
#endif