
CXX=g++
# CXX=clang++

all: studentDemo01 studentDemo02 studentDemo03

split.o: split.cpp split.h
	${CXX}	split.cpp -c

studentDemo01: studentDemo01.o Student.o
	${CXX} studentDemo01.o Student.o -o studentDemo01

studentDemo02: studentDemo02.o Student.o
	$(CXX) studentDemo02.o Student.o -o studentDemo02

studentDemo03: studentDemo03.o Student.o split.o
	$(CXX) studentDemo03.o Student.o split.o -o studentDemo03

Student.o: Student.cpp Student.h
	${CXX} Student.cpp -c

studentDemo01.o: studentDemo01.cpp Student.h
	${CXX} studentDemo01.cpp -c

studentDemo02.o: studentDemo02.cpp Student.h
	${CXX} studentDemo02.cpp -c

studentDemo03.o: studentDemo03.cpp Student.h
	${CXX} studentDemo03.cpp -c

clean:
	/bin/rm -f *.o studentDemo01 studentDemo02 studentDemo03
