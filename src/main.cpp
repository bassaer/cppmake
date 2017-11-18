#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

void makeDir(string dir)
{
  string command = "mkdir " + dir;
  system(command.c_str());
}

void createFile(string inPath, string outPath)
{
  ifstream inFile(inPath.c_str());
  ofstream outFile(outPath.c_str());
  string line;
  while(getline(inFile, line))
  {
    outFile << line << endl;
  }
  inFile.close();
  outFile.close();
}

int main(int argc, char* argv[]) 
{
  if (argc != 2)
  {
    cout << "Error please type project name." << endl;
    exit(1);
  }
  string project = argv[1];
  makeDir("-p " + project + "/{src,tests,bin,obj,include}");
  createFile("/usr/local/cppmake/Makefile", project + "/Makefile");
  return 0;
}

