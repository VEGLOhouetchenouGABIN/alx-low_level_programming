#include <unistd.h>
int main(void)
{
const char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
const size_t len = sizeof(msg) - 1;
ssize_t ret;
ret = write(STDERR_FILENO, msg, len);
return (ret == len) ? 1 : -1;
