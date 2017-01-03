#ifndef _ATOM_OPT_H___
#define _ATOM_OPT_H___

#define CAS(a_ptr, a_oldVal, a_newVal) __sync_bool_compare_and_swap(a_ptr, a_oldVal, a_newVal)
#define AtomicAdd(a_ptr,a_count) __sync_fetch_and_add (a_ptr, a_count)
#define AtomicSub(a_ptr,a_count) __sync_fetch_and_sub (a_ptr, a_count)
#include <sched.h> // sched_yield()

#endif
