## CSCI330 Example Code

This project contains two simple example programs.
The first is just to show how to pass parameters in the following four languages:  
C, C++, Java, Python

The second program is an example of implementing a thread in C. Each program has it's own directory describing the program name and language.


## General Compile/Execution Instructions
Programs written and C, C++, and Java must be compiled before they are executed. In each program's directory there will be a makefile that is used to automate compilation, testing, and clean up.
```
cd thread-intro-c
make								# compile
make test           				# sample run
make clean							# remove non-source files
```

## Language Specific Instructions
#### C
```
cd hello-c
gcc target.c -o target				# compile
./target "hello world" 10			# run with args
```
#### C++
```
cd hello-cpp
g++ target.cc -o target				# compile
./target "hello world" 10			# run with args
```
#### Java
```
cd hello-java
javac target.java					# compile
java target "hello world" 10		# run with args
```
#### Python
```
cd hello-python
python target.py "hello world" 10	# run with args
```
