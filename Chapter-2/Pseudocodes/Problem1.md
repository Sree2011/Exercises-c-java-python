# CHAPTER-2: C INSTRUCTIONS

## PROBLEM 2.1
If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.

### ALGORITHM
1. Start
2. Declare int variables num,and s1
3. Take num as input
4. Assign s1 to 0
5. divide num by 10 and store the remainder in variable rem.
6. add rem to sum.
7. divide num by 10 and re-assign num to be the quotient.
8. Repeat steps 5-7 until num becomes less than or equal to zero
9. display the sum s1.
10. Stop


### PSEUDOCODE

```pseudocode
DECLARE INTEGER num,s1
INPUT num
ASSIGN s1 to 0
WHILE num <= 0
    ASSIGN Remainder(num,10) to rem
    ASSIGN num/10 to num
    ADD rem to s1
ENDWHILE
DISPLAY "The sum of digits of number is: "
DISPLAY s1
```

### FLOWCHART

```mermaid
flowchart TD
A([Start]) --> B[[Declare variables num,s1]]
B --> C[/Take num as input/]
C --> D[[Assign s1 to 0]]
D --> E{While num >= 0}
E --> F[[Assign Remainder of num and 10 to rem]]
F --> G[[Assign Quotient of num and 10 to num]]
G --> H[[Add rem to s1]]
H --> E
H --> I[/Display the sum/]
I --> J([Stop])
```