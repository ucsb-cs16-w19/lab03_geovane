// myProg02.cpp
// Geovane Marquez
// Preconditions: Program reads from a text file and counts occurences.
// Postcondtions: The number of ducks counted and the numbers of non ducks counted, and the total of animals counted  will be printed to screen.

#include <iostream> // for printf()
#include <string>   // for string 
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream
using namespace std;

int main(int argc, char *argv[])
{
    if (argc!=2) 
    {
    	// if argc is not 2, print an error message and exit
    	cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    	exit(1); // defined in cstdlib
    } 
  string str ="";
  ifstream in(argv[1]); //add inputfile
  int animalCount = 0;
  int duckCount = 0;
  int nonduckCount = 0;
  while(!in.eof()) //loop the lines
  {
	getline(in, str);
	if (str == "duck")
	{
		duckCount++;
		animalCount++;
	}
  	else if (str != "") // if the line is not empty
	{
		nonduckCount++;		
		animalCount++;
	}		
  }	  
  in.close(); //close file 
  cout << "Report for " << argv[1] <<":" << endl;
  cout << " Animal count:    " << animalCount << endl;
  cout << " Duck count:      " << duckCount << endl;
  cout << " Non duck count:  " << nonduckCount << endl;

  return 0;
}
