#include <param.h>
#include <x86.h>
#include <kern.h>
#include <sched.h>
#include <buf.h>
#include <conf.h>

/* empty routine */
int nulldev(){
}

/* it should raise an ENODEV error when being called.*/
int nodev(){
}
