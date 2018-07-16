// This is start of the header guard.  ADD_H can be any unique name.  By
// convention, we use the name of the header file.
#ifndef LIBPROBLEM_H
#define LIBPROBLEM_H

// This is the content of the .h file, which is where the declarations go

// int add(int x,int y);  // function prototype for add.h -- don't forget the
// semicolon!
/**
 * @brief This class records functions as solutions to 
 * competitive programming problems. 
 * 
 * This class should ideally contain all the solutions that
 * I can crack and also the most optimal test cases for the same
 */
class LibProblem {
   public:
   /**
    * @brief This function takes a rotated **integer**
    *
    * E.g.
    *  \f[
    *  [1,2,3,4,5,6,7] \rightarrow [4,5,6,7,1,2,3] 
    * \f] array as input
    * and returns the minimum element as output.
    * 
    * Thus the following testcase should be valid :
    * 
    * **Input** : [4,5,6,7,1,2,3]
    * 
    * **Output** : 1
    * 
    * @param arr The rotated **int**  array
    * @param begin The begin index of the array for recursion
    * @param end The end index of the array for recursion
    * @return int Returns the smallest element of the array
    */
    int min_element(int *arr, int begin, int end);
};

// This is the end of the header guard
#endif