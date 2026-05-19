# j-libc

## stddef.h

`size_t`  
A type used to hold sizes, must be able to hold the maximum size of a memory block in the target
arch  

`offsetof`  
A macro used to get the offset between the start of a struct and one of it's members

`NULL`  
A macro that represents a null value, a void pointer to the address 0x0

## mmap
Used to request memory from the underlying system, creates a new mapping in the virtual address
space. Returns `MAP_FAILED` if it's unable to map memory which is ((void*)-1), returns the address
of the first byte on success.
