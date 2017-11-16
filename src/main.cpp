#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, char* argv[]) 
{
  if (argc != 2)
  {
    cout << "Error" << endl;
    exit(1);
  }
  string command = argv[1];
  //command += " &";
  system(command.c_str());
  return 0;
}

