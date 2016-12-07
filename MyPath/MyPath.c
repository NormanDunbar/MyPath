//=========================================================================
// A pretty useless routine to convert %PATH% on a Windows PC/Server
// into a list of each actual path on PATH. Whenever we find a ';'
// we start a new line in the output.
//
// This makes things a lot easier to read, if you ask me!
//=========================================================================
// 2016/10/04  Norman Dunbar  Created.
//=========================================================================

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char *c;
    char *myPath = getenv("PATH");
    if (myPath == NULL) {
        puts("Cannot find \%PATH\% in all known environment variables");
        return 1;
    }
    
    // We are not allowed to mess around with the returned pointer, so,
    // let's do this gently .... (and, s-l-o-w-l-y)!
    // We leave the semi-colon in the printout too, in case you want 
    // to put the list back together again with minor amendments?    
    c = myPath;
    while (*c) {
        putchar(*c);
        if (*c == ';')
            putchar('\n');
        
        c++;
    }
    
    //puts(myPath);
    return 0;
}