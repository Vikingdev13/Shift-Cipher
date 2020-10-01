[![Work in Repl.it](https://classroom.github.com/assets/work-in-replit-14baed9a392b3a25080506f3b7b6d57f295ec2978f6f33ec97e36a161684cbe9.svg)](https://classroom.github.com/online_ide?assignment_repo_id=3000883&assignment_repo_type=AssignmentRepo)
# Shift Cipher
## Points: 20

## Submission
`commit` and `push` your code to the `master` branch on the remote GitHub repository **before** the deadline.

## Clone
`clone` this repo to repl.it or your local machine using the link provided on the GitHub repo page

Use the included files as your template to start the program maintaining the filenames given.

## Description
In this assignment you will use your knowledge of strings to write a program that will encrypt/decrypt messages.

1. Create a menu that asks the user whether they want to (in this order):
	1. Change shift value
		* Make sure you set it to `3` by default
		* When testing, I don't recommend using anything higher than 10
	2. Encrypt a message
	3. Decrypt a message
	4. Quit

2. The user should then be able to type in a message up to `500` characters in length that will be encrypted/decrypted
	* You will use what is called a shift cipher to encrypt the messages
	* A shift cipher takes your input, goes through it one letter at a time, and "shifts" that value a certain amount of places to change its value
	* Your program should _encrypt_ messages by **subtracting** a value from the character, and _decrypt_ by **adding** that value.

3. Your program should continue to bring up the main menu until the user selects the option to quit.

## Requirements:
Use the following ideas:
* functions
* function returns
* function parameters
* strings
* loops
* if statements

Required Functions:
```c
int getUserChoice()
int getShift()
void getString(char buf[])
void encrypt(char buf[], int shift)
void decrypt(char buf[], int shift)
```

The parameters of these functions are given and do not need to be modified. However, the body of these functions need to be filled in as does the body of `main()`

* `getUserChoice()` will be used to print the menu and get the users choice of `1`, `2`, `3`, or `4`
	* Your program should handle invalid menu options by either quitting or asking for a new value.

* `getString()` will be used to get the string the user wants encrypted/decrypted

* Do not use any user input functions in `main()` such as `scanf()` or `fgets()`

* Your default shift value should be set to `3`

* **DO NOT** encrypt/decrypt the newline `\n` character or `NULL` terminator `\0` character in your strings
* **DO NOT** encrypt/decrypt spaces


## Example Output
```
$ ./a.out 
-------------------------------
| 1) Change Shift (default 3) |
| 2) Encrypt a message        |
| 3) Decrypt a message        |
| 4) Quit                     |
-------------------------------
Option: 2
 Input: Joel Wohnoutka
Output: Glbi Tleklrqh^


-------------------------------
| 1) Change Shift (default 3) |
| 2) Encrypt a message        |
| 3) Decrypt a message        |
| 4) Quit                     |
-------------------------------
Option: 3
 Input: Glbi Tleklrqh^
Output: Joel Wohnoutka


-------------------------------
| 1) Change Shift (default 3) |
| 2) Encrypt a message        |
| 3) Decrypt a message        |
| 4) Quit                     |
-------------------------------
Option: 2
 Input: See how this doesn't encrypt spaces?
Output: Pbb elt qefp albpk$q bk`ovmq pm^`bp<


-------------------------------
| 1) Change Shift (default 3) |
| 2) Encrypt a message        |
| 3) Decrypt a message        |
| 4) Quit                     |
-------------------------------
Option: 1
Enter new shift value: 2


-------------------------------
| 1) Change Shift (default 3) |
| 2) Encrypt a message        |
| 3) Decrypt a message        |
| 4) Quit                     |
-------------------------------
Option: 2
 Input: Hello
Output: Fcjjm


-------------------------------
| 1) Change Shift (default 3) |
| 2) Encrypt a message        |
| 3) Decrypt a message        |
| 4) Quit                     |
-------------------------------
Option: 1
Enter new shift value: 10


-------------------------------
| 1) Change Shift (default 3) |
| 2) Encrypt a message        |
| 3) Decrypt a message        |
| 4) Quit                     |
-------------------------------
Option: 2
 Input: Hello
Output: >[bbe


-------------------------------
| 1) Change Shift (default 3) |
| 2) Encrypt a message        |
| 3) Decrypt a message        |
| 4) Quit                     |
-------------------------------
Option: 4
```
