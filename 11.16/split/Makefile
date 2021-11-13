
all: splitDemo splitDemoComma

split.o: split.cpp split.h
	${CXX} split.cpp -c

splitDemo.o: splitDemo.cpp split.h
	${CXX} splitDemo.cpp -c

splitDemoComma.o: splitDemoComma.cpp split.h
	${CXX} splitDemoComma.cpp -c 

splitDemo: splitDemo.o split.o
	${CXX} splitDemo.o split.o -o splitDemo

splitDemoComma: splitDemoComma.o split.o
	${CXX} splitDemoComma.o split.o -o splitDemoComma

clean:
	/bin/rm -f *.o splitDemo 
