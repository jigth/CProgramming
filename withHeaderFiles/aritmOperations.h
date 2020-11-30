// Make this header file to be included just one time (even if it's called more than once)
//#pragma once 

// Make the same as pragma once, but support legacy compilers
// It's like a guard if the "pragma once" directive fails!

// Define this header if it's not defined (just once, not multiple times)
// If "pragma once" worked, this section is ignored!
//
// IMPORTANT: The name should be Unique!! If the name it's not unique
// A.K.A there is other header with the name "__MYARITHMOPS_H__"
// "namespace collisions" or "namespace clashes" will very likely happen.
//#ifndef __MYARITHMOPS_H__
//#define __MYARITHMOPS_H__

#define sum(a, b) a+b
#define sub(a, b) a-b
#define mult(a, b) a*b
#define div(a, b) a/b
#define myFunFunction(a, b, c) (a+b)*c


//#endif
