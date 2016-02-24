#include "hook.h"
#include <errno.h>

typedef int (*SDL_ThreadFunction) (void *data);
typedef void SDL_Thread; // For now
typedef unsigned long int pthread_t; // Does not seem to be much system-dependent


SDL_Thread* SDL_CreateThread(SDL_ThreadFunction fn, const char *name, void *data);
void SDL_WaitThread(SDL_Thread * thread, int *status);
//void SDL_DetachThread(SDL_Thread * thread);

int pthread_create (pthread_t * thread, void * attr, void * (* start_routine) (void *), void * arg);
void pthread_exit (void *retval);
int pthread_join (pthread_t thread, void **thread_return);
int pthread_detach (pthread_t thread);
int pthread_tryjoin_np(pthread_t thread, void **retval);
int pthread_timedjoin_np(pthread_t thread, void **retval, const struct timespec *abstime);
