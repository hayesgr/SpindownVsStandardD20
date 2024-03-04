# SpindownVsStandardD20

The purpose of the file was to show that only in smaller sets of random selection there is any significant difference in the dice probability of a Spindown D20 vs a Standard D20 dice.
The more roles you do the closer the results look.
Even in the smaller sets the more sets of smaller sets you role you will find over time the accumilated sets will appear to match more and more.
This program simply demostrates the first of these.
The output shows the number of times a number was roled in a set. A set is how many times teh dice is role. We use the same dice role to select from both dice for fairness.
We count 1 as being in the same place all dice positions are based off them. That is why 1 has the same result for both dice.
Sample output:
set of 5
Standard                        Spindown
1: 1                    1
2: 0                    0
3: 0                    0
4: 0                    1
5: 0                    0
6: 0                    1
7: 1                    0
8: 0                    0
9: 0                    0
10: 0                   0
11: 1                   0
12: 0                   0
13: 0                   1
14: 0                   0
15: 0                   0
16: 0                   0
17: 0                   0
18: 1                   0
19: 1                   0
20: 0                   1


set of 10
Standard                        Spindown
1: 2                    2
2: 0                    0
3: 0                    0
4: 0                    0
5: 0                    0
6: 1                    0
7: 0                    0
8: 0                    1
9: 1                    0
10: 2                   0
11: 1                   1
12: 1                   0
13: 0                   0
14: 1                   1
15: 0                   0
16: 0                   0
17: 1                   1
18: 0                   1
19: 0                   2
20: 0                   1


set of 50
Standard                        Spindown
1: 1                    1
2: 3                    1
3: 3                    3
4: 0                    4
5: 1                    3
6: 4                    4
7: 2                    0
8: 3                    5
9: 3                    1
10: 2                   3
11: 0                   4
12: 3                   1
13: 1                   2
14: 6                   6
15: 1                   3
16: 3                   1
17: 5                   3
18: 4                   3
19: 4                   2
20: 1                   0


set of 100
Standard                        Spindown
1: 3                    3
2: 4                    4
3: 8                    4
4: 3                    4
5: 9                    8
6: 6                    3
7: 3                    3
8: 3                    4
9: 3                    9
10: 3                   5
11: 6                   6
12: 5                   8
13: 8                   3
14: 8                   8
15: 8                   3
16: 5                   8
17: 4                   3
18: 3                   5
19: 4                   3
20: 4                   6


set of 1000
Standard                        Spindown
1: 58                   58
2: 42                   54
3: 45                   42
4: 62                   63
5: 49                   45
6: 45                   49
7: 51                   62
8: 53                   36
9: 50                   49
10: 48                  42
11: 40                  45
12: 40                  56
13: 60                  51
14: 57                  57
15: 56                  53
16: 42                  60
17: 36                  50
18: 49                  40
19: 63                  48
20: 54                  40


set of 10000
Standard                        Spindown
1: 483                  483
2: 509                  547
3: 514                  509
4: 470                  506
5: 509                  514
6: 516                  526
7: 483                  470
8: 494                  482
9: 491                  509
10: 459                 498
11: 503                 516
12: 482                 481
13: 532                 483
14: 515                 515
15: 481                 494
16: 498                 532
17: 482                 491
18: 526                 482
19: 506                 459
20: 547                 503


set of 100000
Standard                        Spindown
1: 5053                 5053
2: 5080                 4829
3: 4936                 5080
4: 5059                 5027
5: 4994                 4936
6: 5004                 4961
7: 5125                 5059
8: 5017                 5016
9: 4864                 4994
10: 4990                        5025
11: 4925                        5004
12: 5074                        4973
13: 4973                        5125
14: 5075                        5075
15: 4973                        5017
16: 5025                        4973
17: 5016                        4864
18: 4961                        5074
19: 5027                        4990
20: 4829                        4925


set of 1000000
Standard                        Spindown
1: 50028                        50028
2: 50115                        49954
3: 50182                        50115
4: 50175                        50208
5: 49926                        50182
6: 50004                        50141
7: 49952                        50175
8: 49689                        50110
9: 49907                        49926
10: 49934                       49944
11: 50046                       50004
12: 50081                       49697
13: 49986                       49952
14: 49921                       49921
15: 49697                       49689
16: 49944                       49986
17: 50110                       49907
18: 50141                       50081
19: 50208                       49934
20: 49954                       50046


set of 10000000
Standard                        Spindown
1: 500177                       500177
2: 499561                       500112
3: 499641                       499561
4: 500530                       500077
5: 499656                       499641
6: 500418                       501402
7: 500214                       500530
8: 499938                       499351
9: 500362                       499656
10: 499632                      499558
11: 500763                      500418
12: 499009                      499609
13: 500104                      500214
14: 499886                      499886
15: 499609                      499938
16: 499558                      500104
17: 499351                      500362
18: 501402                      499009
19: 500077                      499632
20: 500112                      500763


set of 100000000
Standard                        Spindown
1: 4999979                      4999979
2: 5001918                      5002590
3: 5003302                      5001918
4: 5002732                      5005120
5: 4998895                      5003302
6: 4996392                      5001015
7: 5000176                      5002732
8: 4998473                      5000196
9: 4997639                      4998895
10: 5000447                     4999539
11: 4997438                     4996392
12: 4997435                     5000504
13: 4996927                     5000176
14: 4999283                     4999283
15: 5000504                     4998473
16: 4999539                     4996927
17: 5000196                     4997639
18: 5001015                     4997435
19: 5005120                     5000447
20: 5002590                     4997438
