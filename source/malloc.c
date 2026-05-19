#include <sys/mman.h>
#include <stddef.h>

static void *global_ptr = NULL;

typedef struct header {
    size_t size;
    int is_free;
    struct header* next_header;
} header_t;

void *malloc(size_t size)
{
    if (0U == size) { return NULL; }

    if (global_ptr == NULL)
    {
        /** Passing -1 as the fd argument means that the mapping is not backed by a file **/
        void* mem_ptr = mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANONYMOUS, -1, 0);
        if (MAP_FAILED == mem_ptr)
        {
            return NULL;
        }
        else
        {
            global_ptr += size;
            return mem_ptr;
        }
    }
    return NULL;    
}
