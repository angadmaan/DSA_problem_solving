# Pseudocode

Pseudocode writes an algorithm as plain, structured steps without following the grammar of C++, Java, Python, or any other language. It's the same logic a flowchart shows, in words. There's no universal standard: some people write `PRINT`, others `DISPLAY`, some `INPUT`, others `READ`. What matters is that the steps are clear and consistent.

```text
READ age
IF age >= 18 THEN
    DISPLAY "Eligible"
ELSE
    DISPLAY "Not eligible"
END IF
```

## Common keywords

| Word | Purpose |
|------|---------|
| READ / INPUT | Receive input |
| DISPLAY / PRINT | Show output |
| SET | Assign or update a value |
| IF / ELSE IF / ELSE / END IF | Conditions |
| WHILE / END WHILE | Repeat while a condition is true |
| FOR | Repeat over a known range or collection |
| RETURN | Give back a result |
| STOP | End the process |

## Assignment

`SET count = count + 1` is not a math equation. It means: read the current value of `count`, add 1, store the result back in `count`. If `count` was 4, it becomes 5. Counters, totals, and loop updates all use this.

## Sequence, selection, iteration

The same three building blocks from flowcharts apply.

**Sequence:**
```text
READ length, width
SET area = length * width
DISPLAY area
```

**Selection with more than two outcomes:**
```text
READ number
IF number > 0
    DISPLAY "Positive"
ELSE IF number < 0
    DISPLAY "Negative"
ELSE
    DISPLAY "Zero"
END IF
```

**Iteration, printing 1 to N:**
```text
READ N
SET i = 1
WHILE i <= N
    DISPLAY i
    SET i = i + 1
END WHILE
```

The loop still needs initialization, condition, body, and update. Drop `SET i = i + 1` and it never ends.

## Worked examples

**Sum from 1 to N**
```text
READ N
SET sum = 0
SET i = 1

WHILE i <= N
    SET sum = sum + i
    SET i = i + 1
END WHILE

DISPLAY sum
```
For N = 3, `i` and `sum` go (1, 0), (2, 1), (3, 3), (4, 6), and the loop stops at i = 4. Output: 6. For N = 0 the loop never runs and the output is 0. `DISPLAY sum` sits outside the loop because only the final total is wanted.

**Validate, then decide**
```text
READ m1, m2, m3

IF m1 < 0 OR m1 > 100 OR
   m2 < 0 OR m2 > 100 OR
   m3 < 0 OR m3 > 100
    DISPLAY "Invalid marks"
    STOP
END IF

SET average = (m1 + m2 + m3) / 3

IF m1 >= 40 AND m2 >= 40 AND m3 >= 40
    DISPLAY average, "Pass"
ELSE
    DISPLAY average, "Fail"
END IF
```
Marks 90, 90, 30 give an average of 70 but fail. Marks 90, 105, 80 stop at validation, so no average is calculated.

**Grades: order matters**
```text
READ marks

IF marks < 0 OR marks > 100
    DISPLAY "Invalid"
ELSE IF marks >= 90
    DISPLAY "A"
ELSE IF marks >= 75
    DISPLAY "B"
ELSE IF marks >= 60
    DISPLAY "C"
ELSE IF marks >= 40
    DISPLAY "D"
ELSE
    DISPLAY "F"
END IF
```
The first true branch wins. Checking `marks >= 40` first would give a 95 a D.

**Sum of digits**
```text
READ N

IF N < 0
    DISPLAY "Invalid"
    STOP
END IF

SET sum = 0

WHILE N > 0
    SET digit = N MOD 10
    SET sum = sum + digit
    SET N = N DIV 10
END WHILE

DISPLAY sum
```
`MOD 10` gives the last digit and `DIV 10` removes it. For 472, the digits come out as 2, 7, 4 and the sum is 13. For input 0 the loop doesn't run and the output is 0, which is correct.

**Slab billing** (first 100 units at Rs. 2, next 100 at Rs. 3, above 200 at Rs. 5)
```text
READ units

IF units < 0
    DISPLAY "Invalid"
    STOP
END IF

IF units <= 100
    SET bill = units * 2
ELSE IF units <= 200
    SET bill = 100 * 2 + (units - 100) * 3
ELSE
    SET bill = 100 * 2 + 100 * 3 + (units - 200) * 5
END IF

DISPLAY bill
```
Each portion is charged at its own rate. For 250 units: 200 + 300 + 250 = 750. Check the boundaries too: 100 gives 200, 101 gives 203, 200 gives 500, 201 gives 505.

## Flowchart, pseudocode, program

| Form | Best for | Limitation |
|------|----------|------------|
| Flowchart | Seeing paths, branches, loops | Gets crowded when large |
| Pseudocode | Clear, language-independent steps | Can't be run |
| Program | Running the solution | Syntax can distract from unfinished logic |

Use whichever fits the stage you're at. The logic should be identical in all three.

## Common mistakes

- Writing pseudocode that looks like exact C++ or Python
- Hiding too much in one vague step like "do the calculation"
- Forgetting the loop update
- Putting `DISPLAY` inside a loop when only the final result is needed
- Showing only the success path when the requirement includes failures

## Check before coding

Is every input read before it's used? Are boundary values handled? Does each loop have initialization, condition, body, and update, and can it stop, including running zero times? Does every path either continue or end? Does the pseudocode match the flowchart?