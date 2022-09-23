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
  int count =0;
  double cumulative_cases= 0;
  
  //declare stream varriables
  ifstream inFile; //needed to access the file we want to load
  ofstream outFile; //need to save the results of the analysis
  

  //open the input file
  inFile.open("TestResultsData.dat");
   

  //open the output file
  outFile.open("AnaluedData.txt");
/****
    //open the input file
  inFile.open("TestResultsData.dat");

  //open the output file
  outFile.open("AnaluedData.txt");

  //read in the date -first line of file
  inFile >> date;
  cout << date <<endl;
 
  ****/
    //read in the date -first line of file
  inFile >> date;
  cout << date <<endl;
   //add date to the output file as the first line
  outFile<< date <<endl;

  //clost the output file
  outFile.close();


  

  //read in the 2 pieces of info on the secound line
  inFile >>firstName;
  cout<< firstName<< ' ';
  inFile >>TestResult;
  cout<< TestResult << endl;

  while(inFile)
    {
      //update number of cases & persons tested
      cumulative_cases = cumulative_cases + TestResult;
      count++; //increment the number of patients

      //read in the next line
      inFile >> firstName;
      inFile >> TestResult;
    }
  outFile<< "Number of persons tested:"<< count <<endl;
  outFile << "Total number Cases:" <<cumulative_cases << endl;
  

  inFile.close();


  
  
  
}