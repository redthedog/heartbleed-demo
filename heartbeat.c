#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
 *
 * In C, we have a problem when we pass an array.  An array's name is an address in
 * memory.  While we know what's going to be in the array, we often need to
 * know how many elements are in the array.  Thus, here, in the most basic C
 * program ever, we have to know how many string there are in ARGV.  BTW: this
 * is where the convention of ARGV in ruby comes from where it means "The
 * arguments passed to the program"
 *
 */

typedef struct LogEntry {
  char *owner;
  char *event;
} LogEntry;

int main(int argc, char *argv[]) {
  LogEntry *fu = malloc(sizeof(LogEntry));
  char owner[] = "Adam";
  char event[] = "Heartbeat Check: Monkey";
  fu->owner =  strdup(owner);
  fu->event = strdup(event);

  puts(fu->owner);
}
