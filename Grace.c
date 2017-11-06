#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#define F(X)int main(){\
int fd = open("Grace_kid.c", O_WRONLY | O_CREAT | O_TRUNC);\
char *str = "#include <stdio.h>%c#include <fcntl.h>%c#include <sys/stat.h>%c#define F(X)int main(){%c%cint fd = open(%cGrace_kid.c%c, O_WRONLY | O_CREAT | O_TRUNC);%c%cchar *str = %c%s%c;%c%cif (fd >= 0){chmod(%cGrace_kid.c%c, S_IRUSR); dprintf(fd, str, 10, 10, 10, 92, 10, 34, 34, 92, 10, 34, str, 34, 92, 10, 34, 34, 10, 10);};}%cF(X)/*coucou*/%c";\
if (fd >= 0){chmod("Grace_kid.c", S_IRUSR); dprintf(fd, str, 10, 10, 10, 92, 10, 34, 34, 92, 10, 34, str, 34, 92, 10, 34, 34, 10, 10);};}
F(X)/*coucou*/
