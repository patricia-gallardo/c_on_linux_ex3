# c_on_linux_ex3

The point of this exercise is to perform a [Substitution Cipher][1].

An example using an alphabet that is a [Caesar Cipher][2]
(a left rotation of three places, equivalent to a right shift of 23)

~~~
./substitution XYZABCDEFGHIJKLMNOPQRSTUVW data/input.txt data/output.txt
~~~

The code should use the alphabet to convert the input text and
write the result to the output file.

* The alphabet will always be a string of 26 characters in uppercase
* Maintain case of letters (only English a-z is to be supported)
* Pass through any other number or symbol
* Useful for testing [https://cryptii.com/pipes/caesar-cipher]

### Example

Alphabet
~~~
XYZABCDEFGHIJKLMNOPQRSTUVW
~~~

Contents of input file
~~~
Hello World!?
~~~

Contents of output file
~~~
Ebiil Tloia!?
~~~

[1]: https://en.wikipedia.org/wiki/Substitution_cipher
[2]: https://en.wikipedia.org/wiki/Caesar_cipher
