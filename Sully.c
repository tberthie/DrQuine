#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
int main(void) {
int i = 5;
if (i > 0) { char name[10] = "Sully_X.c\0"; name[6] = i + 47;
int fd = open(name, O_CREAT | O_TRUNC | O_WRONLY);
char *str = "#include <stdio.h>%c#include <fcntl.h>%c#include <stdlib.h>%c#include <sys/stat.h>%cint main(void) {%cint i = %d;%cif (i > 0) { char name[10] = %cSully_X.c%c%c%c; name[6] = i + 47;%cint fd = open(name, O_CREAT | O_TRUNC | O_WRONLY);%cchar *str = %c%s%c;%cif (fd >= 0){dprintf(fd, str, 10, 10, 10, 10, 10, i - 1, 10, 34, 92, 48, 34, 10, 10, 34, str, 34, 10, 10, 34, 92, 48, 34, 34, 92, 48, 34, 10, 10); chmod(name, S_IRUSR);%cchar comp[25] = %cgcc -o Sully_X Sully_X.c%c%c%c; comp[13] = i + 47; comp[21] = i + 47; system(comp); char exec[10] = %c./Sully_X%c%c%c;%cexec[8] = i + 47; system(exec); }}return (0);}%c";
if (fd >= 0){dprintf(fd, str, 10, 10, 10, 10, 10, i - 1, 10, 34, 92, 48, 34, 10, 10, 34, str, 34, 10, 10, 34, 92, 48, 34, 34, 92, 48, 34, 10, 10); chmod(name, S_IRUSR);
char comp[25] = "gcc -o Sully_X Sully_X.c\0"; comp[13] = i + 47; comp[21] = i + 47; system(comp); char exec[10] = "./Sully_X\0";
exec[8] = i + 47; system(exec); }}return (0);}
