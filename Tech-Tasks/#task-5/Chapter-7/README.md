CHAPTER 7:- <br />
<br />
•	The re.compile() function creates Regex objects in Python's re module. <br />
•	Raw strings (preceded by r) are often used with Regex objects to avoid having to escape backslashes twice. They treat backslashes as literal characters instead of escape characters. <br />
•	The search() method returns a Match object if the pattern is found in the searched string, otherwise, it returns None. <br />
•	You can use the group() method on a Match object to get the actual strings that match the pattern. group(0) is the entire matched text, and group(1), group(2), etc. refer to the capture groups. <br />
•	In the regex r'(\d\d\d)-(\d\d\d-\d\d\d\d)': <br />
•	Group 0 covers the entire matched text. <br />
•	Group 1 covers the first three digits. <br />
•	Group 2 covers the second set of three digits and the final four digits. <br />
•	To match parentheses and period characters literally, you need to escape them with a backslash: \( for ( and \. for .. <br />
•	The findall() method returns a list of strings when the regex has no groups, and it returns a list of tuples of strings when the regex has groups. <br />
•	The | character in regular expressions is used to signify an alternation, allowing you to match one expression or another. <br />
•	The ? character signifies: <br />
•	Making the preceding element in the regex optional. <br />
•	Non-greedy matching when used after *, +, ?, or {} quantifiers. <br />
•	In regular expressions: <br />
•	+ means "one or more occurrences." <br />
•	* means "zero or more occurrences." <br />
•	{3} specifies exactly 3 occurrences, while {3,5} specifies a range of 3 to 5 occurrences. <br />
•	Shorthand character classes in regular expressions: <br />
•	\d matches any digit. <br />
•	\w matches any word character (alphanumeric and underscore). <br />

