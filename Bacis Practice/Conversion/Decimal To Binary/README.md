# Decimal To Binary Converter

## Algorithm: Decimal to Binary Conversion

### Overview

This algorithm converts a decimal number to its binary representation.

### Pseudocode

```plaintext
function decimalToBinary(decimalNumber):
    binaryResult = ""
    while decimalNumber is not 0:
        remainder = decimalNumber % 2
        binaryResult = remainder + binaryResult
        decimalNumber = decimalNumber / 2
    return binaryResult
```
