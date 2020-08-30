#include <stdio.h>
#include <sys/utsname.h>

void imprime(struct utsname *buf);

int main (void) {

	struct utsname buf;
	uname(&buf);
	imprime(&buf);

	return 0;
}

void imprime(struct utsname *buf) {

	printf("%s %s %s %s ", buf->nodename, buf->release, buf->version, buf->machine);
	
	}
