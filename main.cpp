#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <fftw3.h>

using namespace std;

int main(){

    // This is the line that needs attention
    ifstream file ("marksComp/config.txt");

    filebuf* sbuf = file.rdbuf();
    string txt;
    if( file.good() ){
        size_t size = sbuf -> pubseekoff(0,file.end,file.in);
        sbuf -> pubseekpos(0,file.in);
        char* buffer = new char[size]; 
        sbuf -> sgetn( buffer, size );
        txt = string( buffer );
        delete[] buffer;
    }else{
        txt = "Couldn't find file";
    }

    // Can we find the fftw lib?
    fftw_complex *derp;
    fftw_plan p;
    int N = 32;
    derp = (fftw_complex*) fftw_malloc(sizeof(fftw_complex) *N );

    cout << txt << endl;
    cout << "Some more stuff was added to main" << endl;
    cout << "Yet another thing" << endl;

    // Definitely should have closed the file
    file.close();

    //fftw_destroy_plan(p);
    fftw_free(derp);
    
    
    return 0;
    
}
