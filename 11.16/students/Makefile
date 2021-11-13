
CXX=g++
# CXX=clang++

all: studentDemo01 studentDemo02


studentDemo01: studentDemo01.o Student.o
	$(CXX) studentDemo01.o Student.o -o studentDemo01


studentDemo02: studentDemo02.o Student.o
	$(CXX) studentDemo02.o Student.o -o studentDemo02

Student.o: Student.cpp Student.h
	${CXX} Student.cpp -c

studentDemo01.o: studentDemo01.cpp Student.h
	${CXX} studentDemo01.cpp -c

studentDemo02.o: studentDemo02.cpp Student.h
	${CXX} studentDemo02.cpp -c

clean:
	/bin/rm -f *.o studentDemo01 studentDemo02
