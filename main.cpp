#include <iostream>
#include <string>
#include <fstream>
#include <fftw3.h>

using namespace std;

int main(){

    // This is the line that needs attention
    ifstream file ("marksComp/config.txt");

    string txt;
    if( file.good() ){
        getline(file,txt);
    }else{
        txt = "Couldn't find file";
    }

    // Can we find the fftw lib?
    fftw_complex *in;

    cout << txt << endl;

    return 0;
    
}
