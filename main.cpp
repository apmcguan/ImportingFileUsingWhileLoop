/**Andrew McGuan
Test loading a .dat file.***/
#include <iostream>
#include <fstream>
#include<string>
#include<iomanip>
using namespace std;


int main() {
 //declare variables
  string firstName;
  string date;
  int TestResult;
  
  //declare stream varriables
  ifstream inFile; //needed to access the file we want to load
  ofstream outFile; //need to save the results of the analysis
  

  //open the input file
  inFile.open("TestResultsData.dat");

  //read in the date -first line of file
  inFile >> date;
  cout << date <<endl;
  
}