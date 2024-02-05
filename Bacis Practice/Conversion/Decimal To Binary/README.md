# Decimal To Binary Converter

## Algorithm: Decimal to Binary Conversion

### Overview

This algorithm converts a decimal number to its binary representation.

### Pseudocode

```plaintext
Input: A decimal number 'number'
Output: Binary representation of 'number'

1. Initialize variables:
    - Read 'number' from the user
    - Set 'i' to 0
    - Set 'result' to 0

2. Loop while 'number' is greater than 0:
    a. Calculate the remainder: 'modulo = number % 2'
    b. Update 'result': 'result = result + 10^i * modulo'
    c. Update 'number': 'number = number / 2'
    d. Increment 'i' by 1: 'i = i + 1'

3. Output the binary representation: 'print result'

End

```
