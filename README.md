ft_printf
=====
The standart syntax of ft_printf format is:
```
%[flags][width][.precision][length]type
```
Available flags:

|Flag   |Description                                       |
|:-----:|--------------------------------------------------|
|**#**  |alternative form                                  |
|**0**  |prepends zeros for numeric types                  |
|**-**  |left-align the output                             |
|**+**  |prepends a plus for positive singed numeric types |
|**' '**|prepends a space for positive singed numeric types|

Avaliable length convertings:

|Flag  |Description|
|:----:|-----------|
|**hh**|char       |
|**h** |short      |
|**z** |size_t     |
|**l** |long       |
|**ll**|long long  |
|**j** |intmax_t   |


Available conversion types:

|Type |Description                              |
|:---:|-----------------------------------------|
|**s**|null-terminated string                   |
|**S**|null-terminated unicode supporting string|
|**p**|unsigned hexadecimal lower-case number   |
|**d**|signed decimal number                    |
|**D**|singed long decimal number               |
|**i**|signed decimal number                    |
|**o**|unsigned octal number                    |
|**O**|unsinged long octal number               |
|**u**|unsigned number                          |
|**U**|unsinged long number                     |
|**x**|unsigned hexadecimal lower-case number   |
|**X**|unsigned hexadecimal upper-case number   |
|**c**|character                                |
|**C**|unicode character                        |
|**%**|literal character                        |

Useful features:
* Flags, width, precision and type different arrangement support
* More than one conversion specified type support
* Unicode width and precision processing
