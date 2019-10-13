#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readFile (char* fileName);

int main(int argc, char** argv) 
{ 
    // If you do not write file names to the arguments,
    // the program will ask you to enter a file name.
    if (argc==1){
        char file[4095];
        cout << "Write the file name to read: "<< endl; 
        cin >> file;
        readFile (file);
    }else{          
        cout << "Number of Files to read: " << argc-1 
            << endl; 
    
        for (int i = 1; i < argc; ++i) 
        {
            readFile (argv[i]);
        }
    }
    return 0; 
} 

/**************************************************************/
/*   readFile:                                                */
/* Function that reads a file and writes its content          */
/*    by terminal                                             */
/**************************************************************/
void readFile (char* fileName){
    string line;
    ifstream infile;
    
    infile.open (fileName);
    if (infile.is_open()) 
    {
        cout << "Reading File->" << fileName << ":" << endl
             << endl; 
        while(!infile.eof()) // To get you all the lines.
        {
            getline(infile,line); 
            cout<<line<< endl; // Prints our line.
        }
        infile.close();
    }else
    {
        cout<<"Not found file:"<<  fileName << endl;
    }
}