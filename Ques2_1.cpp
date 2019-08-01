#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    // Zombie process
    pid_t child_pid = fork(); 
  
    // Parent process  
    if (child_pid > 0)
    {
        sleep(1); 
        printf("in parent process (Zombie Process)\n"); 
    }
  
    // Child process 
    else
    {     
        printf("in child process (Zombie Process)\n"); 
        exit(0);
    }
    return 0; 
} 