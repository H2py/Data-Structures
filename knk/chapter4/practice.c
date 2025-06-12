/*
Problem 1.

(a) i = 5; j = 3;
printf("%d %d", i / j, i % j); 

1, 2

(b) i = 2; j = 3;
printf("%d", (i + 10) % j);

0

(c) i = 7; j = 8; k = 9;
printf ("%d", (i + 10) % k / j);

0 -> 1

(d) i = 1; j = 2; k = 3;
printf("%d", (i + 5) % (j + 2)/ k);

6 -> 0

 
Problem 2. If i and j are positive integers, does (-i)/j always have the same value as - (i/j)?Justify your answer.

No there's a two way to rounded or abandan


Problem 3. 
What is the value of each of the following expressions in C89? (Give all possible values if
an expression may have more than one value.)
(a) 8/ 5
(b)-8 5
(c) 8/ -5
(d) -8/-5


Problem 9.
Show the output produced by each of the following program fragments. Assume that i, j,
and k are int variables.
(a) i = 7; j = 8;
i *= j + 1;
printf("%d %d", i, j);

57 8 -> 63 8

(b) i= j = k = 1;
i += j += k;
printf("%d %d %d", i, j, k);

3 2 1

(c) i = 1; j = 2; k = 3;
i -= j -= k;
printf("%d %d %d", i, j, k);

2 -1 3

(d) i = 2; j = 1; k = 0;
i *= j *= k;
printf("%d %d %d", i,j, k);

0 0 0

Prolbem 10.
Show the output produced by each of the following program fragments. Assume that i, j,
and k are int variables.

(a) i = 1;
printf ("%d ", i++ - 1);
printf("%d", i);

0 2

(b) i = 10; j = 5;
printf("%d ", i++- ++j);
printf("%d %d", i, j);

4
11 6

(c) i = 7; j = 8;
printf ("%d ", i++--j);
printf ("%d %d", i, j);

error
8 7

(d) i = 3; j = 4; k = 5;
printf("%d ", i++ j++ + --k);
printf("%d %d %d", i, j, k);

error
4 5 4

Problem 13.
Only one of the expressions ++i and i++ is exactly the same as (i += 1); which is it?
Justify your answer.

I think that i++ is same as (i += 1) (X)

-> Only ++i is exactly the same as (i += 1) because both increment the variable and then return the
incremental value


*/