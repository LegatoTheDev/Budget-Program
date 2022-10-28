CXX=clang++
INCLUDES=-Iincludes/
CXXEXTRAS=-Wall -Wextra -Werror -pedantic
CXXFLAGS=-std=c++2a -g -fsanitize=undefined -fstandalone-debug

exec: bin/exec


bin/exec: ./src/driver.cc ./src/profile.cc ./src/shoebox.cc ./includes/profile.hpp ./includes/shoebox.hpp
	$(CXX) $(CXXFLAGS) $(CXXEXTRAS) $(INCLUDES) ./src/driver.cc ./src/profile.cc ./src/shoebox.cc -o $@


obj/catch.o: tests/catch.cc
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $^ -o $@

.DEFAULT_GOAL := exec
.PHONY: clean exec