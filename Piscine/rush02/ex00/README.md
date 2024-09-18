



we are writing a number for printing its letter version.
we compile everything using the make command and reference the makefile to know how to compile everything including what to call the file, where to get the source files, and what to change file formats to ie .c to .o
below we use argc and argv[] to take arguments from the command line

we run checks for the validity of the input (error handling) - how many arguments there are, do we use the dictionary we got or another one, if the input contains a number.

we will create a struct to use the dictonary properly.

inside the dictionary there is keys[numbers] and values[letter].
we will draw the value that matches with the key.

for the dictionary we need to use the system calls; open, close and release, then use malloc and free to store the dictionary value in the heap instead of the stack to save memory.
	
for priting the number we use a putnbr function, featuring recursive functions using division and modulus functions to print each number individually using the called putstr (which uses the allowed write function) to print each number 


Convert the number: Convert the input number to a string, check how high it is. Look up the corresponding values in the dictionary.

Return the result: Return the written letters representation of the input number.

Print the result: Print the written letters representation of the number using putstr.

Free allocated memory, we free it before exiting the program to prevent memory leaks.

Functions we will use are:

write: To print out our number, can be also conveyed as a part of putstr
strcmp: To compare strings (input integer turned to string compared with the numbers in a dictionary)
strlen: To get the length of a string (check how high the number is)
also we use malloc (to allocate memory for dictionary-covered-to-string), free (free memory after use), open, write, and close (to use the dictionary)

Logic we utilised to be able to print out the numbers:
A < 10+6
B < 100
C < 1000
D < 100000
E for million
F for billion and so on
Examples: A - 9, AB - 34, ACBA - 752 (seven hundred fifty two), ABDACBA - 53 561 (fifty three thousand five hundred sixty one)
