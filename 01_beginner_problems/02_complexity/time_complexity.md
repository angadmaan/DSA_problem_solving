# Time Complexity

## Definition
Time complexity describes how execution time grows with input size, expressed in Big-O notation. It's **not** actual wall-clock time—independent of hardware.

## Why It Matters
Essential for coding interviews, competitive programming, and designing scalable algorithms. Interviewers want to know if your solution remains efficient as input grows very large.

## Three Analysis Rules

1. **Worst Case**: Analyze the scenario requiring maximum operations
2. **Ignore Constants**: O(3n) simplifies to O(n)
3. **Ignore Lower-Order Terms**: O(n² + n) simplifies to O(n²)

## Common Complexities (Fastest to Slowest)

- O(1) — Constant
- O(log n) — Logarithmic
- O(n) — Linear
- O(n log n) — Linearithmic
- O(n²) — Quadratic
- O(n³) — Cubic
- O(2ⁿ) — Exponential
- O(n!) — Factorial

## Quick Pattern Recognition

| Pattern | Complexity |
|---------|-----------|
| Single loop | O(n) |
| Nested loops | O(n²) |
| Loop halving input | O(log n) |
| Efficient sorting | O(n log n) |

## Competitive Programming Rule
Approximately **10⁸ operations ≈ 1 second**. Always compare your algorithm's complexity against input constraints before submission.