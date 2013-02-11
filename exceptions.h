#ifndef		EXCEPTIONS_H_
# define	EXCEPTIONS_H_

# include	<stdlib.h>
# include	<stdio.h>
# include	<setjmp.h>

void		abort_uncatched();
void		cleanup_jmpfunc(int *);

extern int		EXC_id;

extern struct		s_except {
  jmp_buf		buf;
  struct s_except	*next;
}			*EXC_exception;

# define	TRY  {						\
  struct s_except EXC_head;					\
  if (!setjmp(EXC_head.buf)) {					\
    int EXC_un __attribute__ ((cleanup(cleanup_jmpfunc)));	\
    EXC_head.next = EXC_exception;				\
    EXC_exception = &EXC_head;

# define	CATCH(x)	} else {x = EXC_id;
# define	THROW(x) do {		\
  if (!EXC_exception)			\
    abort_uncatched();			\
  jmp_buf *tmp = &EXC_exception->buf;	\
  EXC_exception = EXC_exception->next;	\
  EXC_id = x;				\
  longjmp(*tmp, 1);			\
      }while(0)
# define	ENDTRY		}}

#endif
