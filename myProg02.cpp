// countDucks.cpp 
// Author: Geovane Marquez
// Example program to read from file and count occurences

#include <iostream> // for printf()
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
  string str;
  ifstream in(argv[1]); //add inputfile
  int animalCount = 0;
  int duckCount = 0;
  int nonduckCount = 0;
  while(getline(in, str)) //loop the lines
  {
	if (str == "duck")
		duckCount++;
  	else 
		nonduckCount++;
	animalCount++;
  }	  
  in.close(); //close file 
  cout << "Report for " << argv[1] <<":" << endl;
  cout << " Animal count:    " << animalCount << endl;
  cout << " Duck count:      " << duckCount << endl;
  cout << " Non duck count:  " << nonduckCount << endl;

  return 0;
}
