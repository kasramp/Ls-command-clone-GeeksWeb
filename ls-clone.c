#include <dirent.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    DIR *dir;
    struct dirent *de;

    dir = opendir("/home/kixz"); /*your directory*/
    while(dir)
    {
        de = readdir(dir);
        if (!de) break;
        printf("%i %s\n", de->d_type, de->d_name);
    }
    closedir(dir);
    return 0;
}
