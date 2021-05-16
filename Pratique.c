#include <iostream>
#include <fstream>
using namespace std;

int main() {
  cout<<"Hello world";

  // Create and open a text file
  ofstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";

  // Close the file
  MyFile.close();
  cout<<"Création autre probl. a partir de l'application Desktop";
  return 0;
}
