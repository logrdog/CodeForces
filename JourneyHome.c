/*
A. Journey Home
time limit per test:1 second
memory limit per test:256 megabytes
input:standard input
output:standard output
Odysseus is trying to find his way home, after he got a little bit lost after going out on a journey. 
Sadly, he finds that he's struggling quite a bit, partly because some gods are upset at him. 
As it turns out, there are lots of locations in the world numbered by the positive integers, and the gods have decided the following rules for Odysseus's route. 
For simplicity, let us denote a location by the number it is at. If Odysseus's location n is even, his next step will be location n2. 
If Odysseus's location n is odd, his next step will be location 3n+1. 
Now, given his starting location s, determine how many steps it will take for Odysseus to reach home, which is location 1.

Input
A single integer s(1≤s≤100), Odysseus' starting location.

Output
A single integer detailing the number of steps it takes to get home.

Example
input
3
output
7
Note
Starting at location 3, Odysseus will take the following path:
3→10→5→16→8→4→2→1
The path above is a total of 7 steps.
*/
#include <stdio.h>

int main()
{
    int result;
    int num;
    
    scanf("%d", &num);
    while(num!=1){
    if(num % 2 == 0){
        num/=2;
        result++;
    } else {
        num*=3;
        num+=1;
        result++;
    }
    }
    printf("%d", result);
    return 0;
}
