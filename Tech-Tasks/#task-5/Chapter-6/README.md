CHAPTER 6:- <br />
<br />
•	Escape characters are special characters used in strings to represent characters that are difficult or impossible to type directly, such as newline or tab characters. <br />
•	\n represents a newline character, and \t represents a tab character. <br />
•	You can use a double backslash \\ to represent a single backslash character in a string. <br />
•	The string is valid because the single quote character within the double-quoted string doesn't conflict with the string's outer double quotes. Alternatively, you could use single quotes around the entire string: 'Howl's Moving Castle'. <br />
•	You can use triple-quoted strings (''' or """) to write strings with newlines in them. <br />
•	Expression evaluations: <br />
•	'Hello, world!'[1] -> 'e' <br />
•	'Hello, world!'[0:5] -> 'Hello' <br />
•	'Hello, world!'[:5] -> 'Hello' <br />
•	'Hello, world!'[3:] -> 'lo, world!' <br />
•	Expression evaluations: <br />
•	'Hello'.upper() -> 'HELLO' <br />
•	'Hello'.upper().isupper() -> True <br />
•	'Hello'.upper().lower() -> 'hello' <br />
•	Expression evaluations: <br />
•	'Remember, remember, the fifth of November.'.split() -> ['Remember,', 'remember,', 'the', 'fifth', 'of', 'November.'] <br />
•	'-'.join('There can be only one.'.split()) -> 'There-can-be-only-one.' <br />
•	String methods for justification: <br />
•	Right-justify: rjust() <br />
•	Left-justify: ljust() <br />
•	Center: center() <br />
•	You can use the strip() method to remove whitespace characters from the beginning and end of a string. To remove only leading or trailing whitespace, you can use lstrip() and rstrip() respectively. <br />

