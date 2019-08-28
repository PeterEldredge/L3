Group Members: Jacob Dixey, Peter Eldredge
CS283-001
Due Date: 8/30/19

We believe we've completed the assignment as it was asked of us.


To run the programs, first build by typing "make build" into the commandline.
Then call the different parts of the lab by typing:
"./Lab2P1.exe" to do the threaded function without mutex locks
"./Lab2P2.exe" to do the threaded function with mutex locks inside the incrementing for loop
"./Lab2P3.exe" to do the threaded function with mutex locks outside the incrementing for loop

Along with the source code, we've supplied pictures of our 10 runs.

From these runs we can conclude that without mutex locks, we rarely ever hit the 
expected number of 100000 and the runs average around .017 seconds

With mutex locks in the for loop, we always get the expected number, but the average time is 
around .021 seconds.

With the mutex locks outside the for loop, we also always get the expected number, and 
the average time is around .016 but this should not be significant in comparison to the 
runs without the mutex locks.