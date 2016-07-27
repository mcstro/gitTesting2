FFTW_INC = /usr/local/include
FFTW_LIB = /usr/local/lib

test: main.cpp
	g++ -I$(FFTW_INC) -L$(FFTW_LIB) -lfftw3 main.cpp -o testMCS.exe

clean:
	rm *.exe
