# Monty

<img src="https://miro.medium.com/max/1400/1*NI9YH70VOnqIrICKG6pDuA.jpeg" width=650 height=300>

## What is Monty ?
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it.

## About this project
The goal of this project is to create an interpreter for Monty ByteCodes files.

## Learning objectives
- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables

## Requirements
- All files are designed to be compiled on `Ubuntu 20.04 LTS`
- Compiled with `gcc` using the options `-Wall -Werror -Wextra -pedantic -std=c89`
- Code should use the `Betty` style
- No more than 5 functions per file

## Installation
1. Clone this repository: `git clone https://github.com/saad-out/monty.git`
2. Change your directory to this repository: `cd monty`
3. Compile the program with gcc: `gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty`

## Usage
run the interpreter: `./monty file_name`
### example:
```
julien@ubuntu:~/monty$ cat bytecodes.m 
push 1
pint
push 2
pint
push 3
pint
julien@ubuntu:~/monty$ ./monty bytecodes.m 
1
2
3
julien@ubuntu:~/monty$
```

## Project done by:
[Saad Out](https://github.com/saad-out) and [Uwimana Lowami](https://github.com/Sonlowami)

## License
This is an open source project 💯 , so feel free to download it and use it without any permission 👾
