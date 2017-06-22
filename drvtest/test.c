#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main(int argc, char **argv)
{
	int fd;
	fd = open("/dev/gec_cdev1", O_RDWR, 0666);
	if(fd < 0)
		perror("error open ");
	
	close(fd);

	return 0;


}

