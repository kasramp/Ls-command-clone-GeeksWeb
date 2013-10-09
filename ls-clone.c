#include <dirent.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
    DIR *dir;
    struct dirent *de;
	if(argc>1)
	dir=opendir(argv[1]); /*your directory*/
	else
    dir = opendir("."); /* Default: current path */
    while(dir)
    {
        de = readdir(dir);
        if (!de) break;
        printf("%s\n", de->d_name);
    }
    closedir(dir);
    return 0;
}
