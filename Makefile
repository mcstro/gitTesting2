FFTW_INC = /Users/scott/include
FFTW_LIB = /Users/scott/lib

test: main.cpp
	g++ -I$(FFTW_INC) -L$(FFTW_LIB) -lfftw3 main.cpp -o testSRH.exe

clean:
	rm *.exe
