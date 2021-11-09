
CXX=clang++

default: demo1 demo2


demo1: demo1.o tempFuncs.o
	${CXX} demo1.o tempFuncs.o -o demo1


demo2: demo2.o tempFuncs.o
	${CXX} demo2.o tempFuncs.o -o demo2


clean:
	/bin/rm -f *.o demo1 demo2

cheer:
	echo "Go Gauchos!"
	echo "Beat Cal Poly!"

