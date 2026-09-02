# Space Complexity

## Definition
Space complexity measures how much memory an algorithm requires as input size increases, expressed using Big-O notation.

## Formula
**Space Complexity = Input Space + Auxiliary Space**

- **Input Space**: Memory required to store the input
- **Auxiliary Space**: Extra memory used by the algorithm (excluding input)

## Common Complexities

| Pattern | Complexity |
|---------|-----------|
| Fixed variables | O(1) |
| Array of size n | O(n) |
| Matrix n × n | O(n²) |

## Key Principles

**Constant Space (O(1))**: A few fixed-size variables regardless of input size.

**Linear Space (O(n))**: Memory grows proportionally with input size.

**Quadratic Space (O(n²))**: Memory grows with the square of input size.

## Important Practices

1. **Avoid modifying input** unless explicitly permitted—preserves data integrity for other program parts
2. **Distinguish input vs. auxiliary space**—focus on extra memory when discussing optimization
3. **Don't sacrifice useful data structures** for small constant-factor savings

## Example
Summing an array creates a few variables (sum, i) with an existing input array.
- Auxiliary Space = O(1)
- Time Complexity = O(n)

An algorithm can have high time complexity but low space complexity, or vice versa.