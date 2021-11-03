int main() {
    
    int x;
    int *p = &x;  // *p is on the stack
    p = new int;  // now *p is on the heap. 
    return 0;
}
