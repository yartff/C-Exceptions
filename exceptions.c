#include	"exceptions.h"

int			EXC_id = 0;
struct s_except		*EXC_exception = NULL;

void	
abort_uncatched() {
  fprintf(stderr, "Uncatched Throw, aborting.\n");
  abort();
}

void	
cleanup_jmpfunc(int *this) {    
  (void)this;
  EXC_exception = EXC_exception->next;
}
