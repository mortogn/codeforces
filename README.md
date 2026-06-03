## Template Comment

Add this before every file to later upsolve or understand what went wrong when solving this problem.

- _Problem_: ID and Name
- _Rating_: Rating of the problem
- _Status_: `Accepted`, `Rejected`, `Upsolved`
- _Pattern_: Problem tags, ex. `greedy`, `two pointers`, `sort`
- _Mistake_: What went wrong for that problem
- _Better Solution_: What could've been done to solve this problem for elegantly.

```cpp
/*
Problem:
Rating:
Status:
Pattern:
Mistake:
Better solution:
*/

```

## Progress Tracker

Index of all the problems that I've solved to track back and learn more or refresh memory.

|                         Problem                          | Rating |  Status  |         Pattern          | Mistake                                                  | Fix                                      |
| :------------------------------------------------------: | :----: | :------: | :----------------------: | :------------------------------------------------------- | :--------------------------------------- |
|    [381A Sereja and Dima](./381A_Sereja_and_Dima.cpp)    |  800   | Accepted | `two pointers`, `greedy` | use `vector.erase()`                                     | use `l/r` pointer                        |
|        [118A String Task](./118A_String_Task.cpp)        |  800   | Accepted |        `strings`         | used unordered_set for such a small number of characters | use a string with `find`                 |
|            [208A DubStep](./208A_Dubstep.cpp)            |  900   | Accepted |        `strings`         | did not use `(int)s.size()` and didn't init variable     | simply do typecasting and init variable  |
| [855A Tom Riddle's Diary](./855A_Tom_Riddle_s_Diary.cpp) |  800   | Accepted | `strings`, `brute force` | -                                                        | -                                        |
|     [799B T-shirt Buying](./799B_T_shirt_buying.cpp)     |  1400  | Upsolved |    `data structure `     | `find_if` is linear, cause TLE                           | remove find_if and use other ds (solved) |
