#include	"exceptions.h"

void
throwing_function(int rec_level) {
  printf("Before throwing\n");
  TRY {
    if (rec_level < 2) {
      throwing_function(rec_level + 1);
    }
  } CATCH (int id2) {
    printf("Recursive (%d) catch(%d)\n", rec_level, id2);
  } ENDTRY
  THROW(rec_level);
  printf("After throwing _ shouldn't appear\n");
}

int
main() {
  TRY {
    printf("Before calling\n");
    throwing_function(0);
    printf("After calling _ shouldn't appear\n");
  } CATCH (int id) {
    printf("In the catch(%d).\n", id);
  } ENDTRY

  TRY {
    TRY {
      THROW(50);
    } CATCH(int k) {
      printf("%d\n", k);
    } ENDTRY
  } CATCH(int k) {
    printf("%d\n", k);
  } ENDTRY
  printf("%p\n", EXC_exception);
  printf("Throwing outside try block:\n");
  THROW(128);
  return (0);
}
