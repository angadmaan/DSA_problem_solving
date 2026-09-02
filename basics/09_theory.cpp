// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times
// void -> Does not return anything 


// Pass by value :- It means the original value of the variable will not be changed. A copy of the variable is passed to the function.

// Pass by reference :- It means the original value of the variable will be changed. The reference of the variable is passed to the function (& is used to pass the reference of the variable).

// But an exception to this is when we pass an array to a function, the original value of the array will be changed because the reference of the array is passed to the function. So, if we want to pass an array to a function and we don't want to change the original value of the array, we can use const keyword before the array parameter in the function definition.


/*

Function	        What it does	                Example	Result
sqrt(x)	           Square root	                    sqrt(25)	5
pow(x, y)	       x raised to y	                pow(2, 3)	8
abs(x)	           Absolute value	                abs(-10)	10
floor(x)	       Round down	                    floor(4.8)	4
ceil(x)	           Round up	                        ceil(4.2)	5
round(x)	       Nearest integer	                round(4.6)	5
log(x)	           Natural logarithm	            log(10)	≈ 2.30
log10(x)	       Base-10 logarithm	            log10(100)	2
exp(x)	           𝑒 𝑥	                           exp(1)	≈ 2.718
fmod(x,y)	       Remainder for floating-point	    fmod(7.5, 2)	1.5

*/

