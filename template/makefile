CXX = g++
GMP_PREFIX := $(shell brew --prefix gmp)

CXXFLAGS = -std=c++20 -Wall -O2 -I$(GMP_PREFIX)/include
LDFLAGS  = -L$(GMP_PREFIX)/lib
LDLIBS   = -lgmpxx -lgmp

solution: main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o solution $(LDFLAGS) $(LDLIBS)

.PHONY: clean
clean:
	rm -f solution
