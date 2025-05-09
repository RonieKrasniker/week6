# week6
https://github.com/RonieKrasniker/week6

about 3:
the increment function mechanism as follow:
a. read the value b. increment value c. return the value
you wuold expect that the bar resut would be 20000 bcz its ++ 10000 twice,
but actually, when the threads read the same value at the same time they will store only 1 incrementation, which means one incrementation is discarded and therefore the value is less then 20000.

now, the fix would be to sync the threads, how would one achieve that?
about 4:
using synced methods is actually locking the resources of the methods each call, and unlocking it when the call is done, this way the problem described above is prevented

about 5:
this solution is only locking the scope of it, and the resources used in it and not the entire function, so it should be more efficient, also the get bar doenst really require sync

about 6:
similar to the original code, but also output the time it requires the race is happening and this is why didnt get a 100000000, we also got the program took 88 ms to execute

about 7:
now we use locks and it takes two orders magnitude more, in order to finish.
the wait of the lock is waht cost us the extra time. this is actually more expensive from runnig without threads at all...


