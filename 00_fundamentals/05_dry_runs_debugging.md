# Dry Runs, Edge Cases and Debugging

A program that runs isn't necessarily correct. The output can be wrong, a loop can fail to stop, or a boundary value can behave differently from the requirement. Debugging means inspecting the logic step by step instead of changing code at random and hoping.

The workflow: **reproduce, predict, trace, find the first mismatch, fix, retest.**

## Dry run and trace tables

A dry run is manually executing an algorithm on a chosen input. A trace table records the values that matter as it goes. For the sum of digits of 472:

| Iteration | N before | digit | sum after | N after | Again? |
|-----------|----------|-------|-----------|---------|--------|
| 1 | 472 | 2 | 2 | 47 | Yes |
| 2 | 47 | 7 | 9 | 4 | Yes |
| 3 | 4 | 4 | 13 | 0 | No |

The output is 13. If the code used `MOD 100` by mistake, the first digit would come out as 72, and the table would show it at once. Trace only the values relevant to what you're checking.

## Expected vs. actual state

A bug is a defect, and the computer is usually just following the instructions it was given. The real question is where the actual state first differs from the expected one. Think of a parcel moving through checkpoints: if it was right at checkpoint 5 and wrong at 6, start at 6.

For the sum from 1 to 5, the expected totals are 1, 3, 6, 10, 15. If the code says `sum = sum + 1` instead of `sum + i`, the actual totals are 1, 2, 3, 4, 5. The first step matches, so the bug only shows at step two. One passing step proves nothing.

## Types of errors

| Type | Meaning | Example |
|------|---------|---------|
| Syntax | Breaks language grammar | Missing bracket |
| Runtime | Fails during execution | Division by zero |
| Logical | Runs, but gives the wrong result | `>` instead of `>=` |

Logical errors are the hardest because nothing crashes.

## Example: factorial always returns 0

```text
SET answer = 0
FOR i FROM 1 TO N
    SET answer = answer * i
END FOR
```

Tracing N = 4 shows `answer` stays 0 every time, since anything times zero is zero. The fix is to start at 1, the identity value for multiplication. Then 4! = 24.

## Edge case vs. invalid input

| Type | Meaning | Example |
|------|---------|---------|
| Normal | Common valid input | Age 25 |
| Edge | Valid input at a boundary | Age 18 when eligibility starts at 18 |
| Invalid | Outside the contract | Age -5 |
| Exceptional | Outside event interrupts the flow | Network failure |

Edge cases are usually valid and should give the correct normal result. Invalid input can be rejected.

## Designing tests

For `marks >= 40`, test 39, 40 and 41. That catches a `>` written by mistake. Other useful cases: typical input, zero, negatives, duplicates, the smallest meaningful input, invalid input, and enough tests that every branch runs at least once. A few chosen tests beat many that exercise the same path.

## Debugging workflow

1. Reproduce the failure with a specific input.
2. Work out the expected result by hand.
3. Shrink the input to the smallest failing case.
4. Trace the relevant variables, conditions and branches.
5. Find the earliest point where actual differs from expected.
6. Explain why it happened.
7. Make the smallest fix that solves it.
8. Retest the failing case, nearby edge cases and some cases that worked before.

A *regression* is something that used to work and breaks after a later change. Step 8 exists to catch it.

## Example: loop never stops

```text
SET i = 1
WHILE i <= N
    DISPLAY i
END WHILE
```

`i` never changes, so the condition stays true and it prints 1 forever. Adding `SET i = i + 1` inside the loop fixes it.

## Example: wrong grade at boundaries

With `marks > 90` instead of `>= 90`, a mark of 90 gets B instead of A, and 75 gets C instead of B. Use inclusive comparisons wherever the requirement includes the boundary, and test 89/90/91 and 74/75/76.

## Invariants

An invariant is a statement that stays true during a repeated process. In the largest-of-three method, after each value is processed, `largest` holds the biggest value seen so far. In the sum loop, before processing `i`, `sum` holds the total of everything already processed.

Try finishing this sentence: "After every iteration, this variable represents ___." If you can, the loop is easier to trust.

## Common misconceptions

- **"No crash means correct."** Logical errors produce normal-looking wrong output.
- **"More tests are better."** Well-chosen boundary tests find more.
- **"The error line is the cause."** It may only be where the symptom shows up.
- **"Changing many things is faster."** It hides the real fix.
- **"A passing sample proves it works."** It proves one input worked.

## Habits for real code

Read the full error message, reproduce the smallest failure, inspect variable values or use a debugger, change one thing at a time, and keep your test cases to rerun. Tools help you see what's happening, but you still need to know what should be happening.

## Key terms

| Term | Meaning |
|------|---------|
| Dry run | Manual simulation of an algorithm |
| Trace table | Table of values changing over steps |
| Logical error | Runs, but gives wrong behaviour |
| Edge case | Valid input at a boundary |
| Regression | Working behaviour broken by a later change |
| Invariant | A truth that holds throughout a repeated process |
| Off-by-one error | A loop runs one time too many or too few |

## Summary

Mistakes stop being mysterious once you can trace your own logic. They become evidence pointing at the fix.
