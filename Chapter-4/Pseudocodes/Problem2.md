## PROBLEM 4.2
Write a program using conditional operators to determine whether the given year is leap year or not

### ALGORITHM
1. Start
2. Declare integer variable year
3. Take year as input
4. If year is evenly divisible by 4, go to step 5. else, display "not a Leap year"
5. If year is evenly divisible by 100, go to step 6. else, display "Leap Year"
6. If the year is divisible by 400, Display "Leap year". else, Display "not a Leap year".
7. Stop

### FLOWCHART

```mermaid
flowchart TD
A(Start) --> B[/Declare integer variable year/]
B --> C[/Take year as input/]
C --> D{If year is evenly divisible by 4}
D --> |False|E[/Display "Not a leap year"/]
D --> |True| F{If year is evenly divisible by 100}
F --> |False| G[/Display "Leap Year"/]
F --> |True| H{If year is evenly divisible by 400}
H --> |True|G
H --> |False|E

G --> I([Stop])
E --> I