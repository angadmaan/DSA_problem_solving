# Thinking Before Coding

Syntax expresses a solution. Logic is what designs it. The habit worth building is: understand the problem, design the logic, test it, then write the code. If testing shows the logic is incomplete, go back to the requirement and fix it. That's normal.

## Read the problem like a contract

Before solving anything, pin down five things:

| Part | Question |
|------|----------|
| Input | What is given? |
| Output | What result is required? |
| Rules | What conditions decide the result? |
| Constraints | Which inputs are valid? |
| Edge cases | Which valid cases need special care? |

Small words change the logic. "Greater than 40" and "at least 40" are different rules: 40 fails the first and passes the second.

A *problem* is the general task (compare two numbers). A *problem instance* is one specific input, like (8, 13). A good algorithm solves the problem, which is why we use variables such as `a` and `b` instead of hard-coding an answer.

## Example: comparing two numbers

The task: report the larger number, or say they are equal. A first attempt is:

```text
IF a > b
    DISPLAY a
ELSE
    DISPLAY b
```

This breaks for a = 7, b = 7, because it displays 7 instead of "Equal". The fix is a third branch:

```text
IF a > b
    DISPLAY a
ELSE IF b > a
    DISPLAY b
ELSE
    DISPLAY "Equal"
END IF
```

If the task only asked for the maximum, the first version would be fine. The requirement decides what counts as correct.

## Example: student marks

*Display the average. Display Pass only if every subject has at least 40 marks, otherwise Fail.*

```text
READ mark1, mark2, mark3
SET average = (mark1 + mark2 + mark3) / 3
DISPLAY average

IF mark1 >= 40 AND mark2 >= 40 AND mark3 >= 40
    DISPLAY "Pass"
ELSE
    DISPLAY "Fail"
END IF
```

The pass rule isn't based on the average. Marks of 90, 90, 30 average 70 but still fail. Solving a similar-looking problem instead of the actual one is a common beginner mistake.

Test the boundary too. With `> 40` instead of `>= 40`, the marks 40, 40, 40 would wrongly fail.

## Computational thinking

Four habits help organize a problem:

- **Decomposition:** split a large task into parts. A food-delivery app becomes login, search, menu, cart, payment, tracking. The parts still depend on each other, so understand how they connect.
- **Pattern recognition:** voting eligibility, exam pass/fail and free-delivery checks all follow *input → compare with rule → choose result*. Similar problems can still have different boundaries, so read carefully.
- **Abstraction:** keep the details that affect the answer, drop the rest. A shopping total needs price, quantity, discount, tax and delivery charge, but not the customer's favourite colour. Never drop a rule that changes the result.
- **Algorithmic thinking:** put steps in a valid order. Confirming an order before checking payment is wrong.

## Many algorithms, one problem

To find "Aman" in 1,000 names, linear search checks each name in turn and works on any list. Binary search checks the middle and discards half each time, but only works if the list is sorted. A faster algorithm is only useful when its assumptions hold.

Ask two questions of any algorithm: is it correct for every valid input, and is it efficient? Correctness comes first. A fast wrong answer is still wrong.

## Dry run

A dry run means tracing the algorithm by hand with sample input. For the largest of three numbers:

```text
SET largest = a
IF b > largest: SET largest = b
IF c > largest: SET largest = c
DISPLAY largest
```

With (8, 15, 11), `largest` goes 8, then 15, and stays 15. It also handles duplicates like (7, 7, 2) and negatives like (-8, -3, -12). Starting with `largest = 0` would fail on the negatives, because 0 isn't in the input.

## Common mistakes

- Writing code before understanding input, output, rules and edge cases
- Testing only the given examples
- Ignoring exact wording like "at least" or "every"
- Dropping a difficult rule, which changes the problem
- Using an algorithm without checking its assumptions
- Expecting the computer to follow intent rather than written logic

## Stating assumptions

Ask when something is unclear: can inputs be negative, can values be equal, is the list sorted, what happens if nothing is found? Don't silently pick the easiest reading. After designing a solution, test it and be able to explain why it works, not just that it passed a few examples.

## Key terms

| Term | Meaning |
|------|---------|
| Algorithm | A finite sequence of clear steps with defined input and output |
| Pseudocode | Language-independent writing of logic |
| Edge case | A valid boundary or special case |
| Dry run | Manually tracing an algorithm |
| Correctness | The right answer for every valid input |
| Efficiency | The time, work or memory used |

## Summary

Understand the problem, design the steps, test the reasoning, then write the code.
