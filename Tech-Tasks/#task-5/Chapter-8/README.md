CHAPTER 8:- <br />
<br />
•	\s matches any whitespace character. <br />
•	Shorthand character classes in regular expressions: <br />
•	\D matches any non-digit character. <br />
•	\W matches any non-word character. <br />
•	\S matches any non-whitespace character. <br />
•	No, PyInputPlus does not come with the Python Standard Library. It is a third-party module that needs to be installed separately. <br />
•	PyInputPlus is often imported with import pyinputplus as pyip to provide a shorter alias that makes it easier to call its functions. <br />
•	inputInt() is used for input validation, specifically for integers, and raises an exception if the entered value is not an integer. inputFloat() does the same for floating-point numbers. <br />
•	You can ensure that the user enters a whole number between 0 and 99 using the inputInt() function with the min and max keyword arguments: pyip.inputInt(prompt='Enter a number: ', min=0, max=99) <br />
•	The allowRegexes and blockRegexes keyword arguments are lists of regular expression strings. allowRegexes specifies patterns that are allowed, and blockRegexes specifies patterns that are not allowed. <br />
•	inputStr(limit=3) will raise a TimeoutException if blank input is entered three times consecutively. <br />
•	inputStr(limit=3, default='hello') will return the default value 'hello' if blank input is entered three times consecutively. <br />

