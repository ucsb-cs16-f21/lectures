# separate compilation

In this directory, we see the code from the previous version (look in `../singleFile/demo.cpp`) broken across three files:

* `tempFuncs.h`
* `tempFuncs.cpp`
* `demo.cpp`

We move the declarations of the functions into their own header file (`tempFuncs.h`)

We then move the definitions of the functions into their own `.cpp` file (`tempFuncs.cpp`)

Finally, we remove the function defintions from the file with the `main()` function in it,
and just use a `#include` to pull in the declarations.

# A few things to try

We can compile with:

```
g++ *.cpp -o demo
```

This works, but it's inefficient, and it only works if there's only a single `.cpp` file with a `main` in it.


Another way:

