#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{

  int rdnum1, rdnum2, rdnum3;

  /* ************************************
  You should make a code segment to generate three random numbers.
  And calculate the summation and average of random numbers.
    Code your program here
  ************************************ */
  srand(static_cast<unsigned>(time(nullptr)));

  rdnum1 = rand() % 100;
  rdnum2 = rand() % 100;
  rdnum3 = rand() % 100;
  
   int total = rdnum1 + rdnum2 + rdnum3;
   double average = static_cast<double>(total) / 3.0;

  cout << setprecision(2) << fixed;
  cout << "Random values are " << rdnum1 << " " << rdnum2 << " " << rdnum3 << endl;
  cout << "Total summation: " << total << endl;
  cout << "Average " << average << endl;
}
