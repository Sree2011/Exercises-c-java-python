## PROBLEM 3.8
Given a point (x,y), write a program to find out if it lies on X-axis,
Y-axis or origin.

### ALGORITHM
1. Start
2. Declare float variables x and y
3. If x == 0 and y == 0, display "The point lies on origin"
4. Else if x = 0 and y!= 0, display "The point lies on Y-axis"
5. Else if x!= 0 and y = 0, display "The point lies on X-axis"
6. Stop


### PSEUDOCODE

```pseudocode
DECLARE FLOAT x,y
IF x = 0 AND y = 0
    DISPLAY "The point lies on origin"
ELSE IF x = 0 AND y != 0
    DISPLAY "The point lies on Y - axis"
ELSE IF x != 0 AND y = 0
    DISPLAY "The point lies on X - axis"
ENDIF
```

### FLOWCHART

```mermaid
flowchart TD
A([Start]) --> B[[Declare float variables x,y]]
B --> C{If x = 0 and y = 0}
C --> |True| D[/DISPLAY "The point lies on origin"/]
C --> |False| E{If x = 0 and y != 0}
E --> |True| F[/DISPLAY "The point lies on Y-axis"/]
E --> |False| G{If x != 0 and y = 0}
G --> |True| H[/DISPLAY "The point lies on X - axis"/]

D --> I([Stop])
F --> I
H --> I
```