#include <iostream>
#include <fstream>
using namespace std;	


int main()
{
  ifstream ifs{"statistics.txt"};

  if ( ! ifs )
  {
     cerr << "Kunde inte öppna 'statistics.txt'." << endl;
     return 1; // terminate program with error code 1
  }

  double nr;
  double sum{0.0};
  int count{0};
  while ( ! ifs.eof() )
  {
     ifs >> nr;
     sum += nr;
     ++count;
  }
  double average = sum / count;
  return 0;
}

//Funkar om talen ligger på varsin rad. Funkar inte om det ligger flera tal på samma rad