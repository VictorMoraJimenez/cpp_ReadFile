#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) 
{ 
    cout << "Number of Files to read: " << argc-1 
         << endl; 
  
    for (int i = 1; i < argc; ++i) 
    {

        string line;
	    ifstream infile;
        
        infile.open (argv[i]);
        if (infile.is_open()) 
        {
            cout << "Reading File->" << argv[i] << ":" << endl; 
            while(!infile.eof()) // To get you all the lines.
            {
                getline(infile,line); // Saves the line in STRING.
                cout<<line<< endl; // Prints our STRING.
            }
            infile.close();
        }else
        {
            cout<<"Not found file:"<<  argv[i] << endl;
        }
        
    }


    return 0; 
} 