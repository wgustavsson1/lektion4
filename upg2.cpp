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
  double count{0.0};
  while ( ! ifs.eof() )
  {

     ifs >> nr;
     //cout << nr << endl;
     sum += nr;
     count ++;
  }
  double average = sum / count;

  cout << average << endl;
  return 0;
}