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
  cout<<"Création autre probl. a partir de l'application sur le Desktop";
  return 0;
}
Création d'un problème a partir du navigateur
