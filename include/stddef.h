#ifndef _MY_STDDEF_H
#define _MY_STDDEF_H

#define NULL ((void*)0x0)

#if defined (__x86_64__)
    typedef unsigned long long size_t;
#else
    typedef unsigned int size_t;
#endif

#define offsetof(type, member) ((size_t)&(((type *)0x0)->member))

#endif
