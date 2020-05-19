
I would like to thank [Francesco Biscani](https://github.com/bluescarni) for [mppp](https://github.com/bluescarni/mppp) and [obake](https://github.com/bluescarni/obake)

I have stolen `type_name` from __mppp__ and `tuple_for_each` from __obake__

This program prints these lines:
```
Printing limits for the type 'unsigned char' (1 byte):'
Lowest  : 0
Min     : 0
Max     : 255
Digits  : 8
Digits10: 2
------------
Printing limits for the type 'unsigned short' (2 bytes):'
Lowest  : 0
Min     : 0
Max     : 65535
Digits  : 16
Digits10: 4
------------
Printing limits for the type 'unsigned int' (4 bytes):'
Lowest  : 0
Min     : 0
Max     : 4294967295
Digits  : 32
Digits10: 9
------------
Printing limits for the type 'unsigned long' (8 bytes):'
Lowest  : 0
Min     : 0
Max     : 18446744073709551615
Digits  : 64
Digits10: 19
------------
Printing limits for the type 'unsigned __int128' (16 bytes):'
Lowest  : 0
Min     : 0
Max     : 340282366920938463463374607431768211455
Digits  : 128
Digits10: 38
------------
Printing limits for the type 'signed char' (1 byte):'
Lowest  : -128
Min     : -128
Max     : 127
Digits  : 7
Digits10: 2
------------
Printing limits for the type 'short' (2 bytes):'
Lowest  : -32768
Min     : -32768
Max     : 32767
Digits  : 15
Digits10: 4
------------
Printing limits for the type 'int' (4 bytes):'
Lowest  : -2147483648
Min     : -2147483648
Max     : 2147483647
Digits  : 31
Digits10: 9
------------
Printing limits for the type 'long' (8 bytes):'
Lowest  : -9223372036854775808
Min     : -9223372036854775808
Max     : 9223372036854775807
Digits  : 63
Digits10: 18
------------
Printing limits for the type '__int128' (16 bytes):'
Lowest  : -170141183460469231731687303715884105728
Min     : -170141183460469231731687303715884105728
Max     : 170141183460469231731687303715884105727
Digits  : 127
Digits10: 38
------------
Printing limits for the type 'float' (4 bytes):'
Lowest  : -3.4028235e+38
Min     : 1.1754944e-38
Max     : 3.4028235e+38
Digits  : 24
Digits10: 6
------------
Printing limits for the type 'double' (8 bytes):'
Lowest  : -1.7976931348623157e+308
Min     : 2.2250738585072014e-308
Max     : 1.7976931348623157e+308
Digits  : 53
Digits10: 15
------------
Printing limits for the type 'long double' (16 bytes):'
Lowest  : -1.18973e+4932
Min     : 3.3621e-4932
Max     : 1.18973e+4932
Digits  : 64
Digits10: 18
------------
```
