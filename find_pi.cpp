#include <iomanip>
#include <math.h>
#include <iostream>
using namespace std;

int main(void)
{
  double pi = 4.0 * atan(1.0);
  int place;
  bool limit = true;

  while (limit)
  {
    cout << "Enter how many decimal places of Pi to be displayed [LIMIT 15]: ";
    cin >> place;

    if (place < 16 && place >= 0)
      limit = false;
    else
    {
      cout << "Decimal place out of bounds! Please enter a valid value." << endl;
    }
  }
  cout << "Pi in " << place << " decimal places is: " << setprecision(place + 1) << pi;
}
