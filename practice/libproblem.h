// This is start of the header guard.  ADD_H can be any unique name.  By
// convention, we use the name of the header file.
#ifndef LIBPROBLEM_H
#define LIBPROBLEM_H

// This is the content of the .h file, which is where the declarations go

// int add(int x,int y);  // function prototype for add.h -- don't forget the
// semicolon!
class LibProblem {
   public:
    int min_element(int *arr, int begin, int end);
};

// This is the end of the header guard
#endif