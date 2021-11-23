// argc, and argv are both parameters to the main function
// and are therefore on the stack
// x and p are local variables inside main, and are therefore on the stack
// BUT... the integer that p points to after line 13,
// that integer is on the heap.
// Anything allocated with "new" is on the heap.


int main(int argc, char *argv[]) {
    
    int x;
    int *p = &x;  // *p is on the stack
    p = new int;  // now *p is on the heap. 
    return 0;
}
