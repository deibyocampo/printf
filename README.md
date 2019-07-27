# _printf
---
A function to print data in C

## How to use?
_printf(FORMAT, ARGS...)

*FORMAT* Is the text to print text following the format specification show it in the documentation.
*ARGS* The elements to print with a diferents datatypes specified in the documentation.
<!--
## How to install?
-->
## Documentation:
The use of the _printf function its similar to use the original
printf function, basically you need to put a text first with the format:

### Formats

| Format param | Datatype |
|--------------|----------|
| c | Character |
| s | String |
| d | Base 10 number (Decimal) |
| i | Integer |
| % | Define the specific format |

Later you need to put the elements that correspond to the format given:

### Example of use
```
char _char = 'H';
int _decimal = 10;
char _string = "Text";
unsigned int _integer = 1000;
_printf("%c %s %d %i\n", _char, _string, _decimal, _integer);
```

The last code with the function print the follow text in console:
`H Text 10 1000`