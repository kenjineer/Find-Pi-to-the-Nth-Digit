#include <iomanip>
#include <iostream>
using namespace std;

int main(void)
{
  double pi = 3.141592653589793;
  int place;
  bool limit = true;

  while (limit)
  {
    cout << "Enter how many decimal places of Pi to be displayed [LIMIT 15]: ";
    cin >> place;

    if (place < 16 && place >= 0)
      limit = false;
    else if (place > 15 || place < 0)
    {
      cout << "Please enter a valid value."<<endl;
      limit = true;
    }
  }
  place += 1;
  cout << setprecision(place) << pi;
}