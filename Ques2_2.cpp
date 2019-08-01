#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <bits/stdc++.h>
using namespace std;
int main() 
{
// Orphan Process
    int pid = fork(); 
  
    if (pid > 0) 
        printf("in parent process (Orphan Process)\n"); 
  
    else if (pid == 0) 
    { 
        sleep(1); 
        printf("in child process (Orphan Process)\n"); 
    } 

    sleep(2);
    return 0;
}