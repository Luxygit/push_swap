*This project has been created as part of the 42 curriculum by Dievarga*

**"Description"**
This project gives us a introduction to sorting algorithms and their implementation in solving problems.
The goal is to sort a list of integers using a limited set of stack operations, producing the smallest possible number of moves.

**"Instructions"**
To be compiled with its makefile that at the same time compiles first the libft library with its own
makefile and then the push_swap program is compiled.

**"Resources"**
This program  uses:

- structs t_stack, for the whole state of the program and t_elem for
the value/index arrays inside the whole stack
- free for the allocated array mem in case of errors
- ft_atol_safe to clean the input
- a sorted copy of stack A
- Indexing
- Hard coded Small sorting cases
- Chunk-based sorting: 

IF top A element index is within each chunk then push to B / IF index is lower than the middle of the chunk then RB to keep bigger numbers at the top. / Else rotate A until element index belongs to the chunk / WHILE B is not empty rotate it or reverserotate it to find the max index

Testing
- Generate 500 random numbers

For Linux
<code>ARG=$(seq -1000 1000 | shuf -n 500 | tr '\n' ' ')</code>

For Mac
<code>ARG=$( (echo -2147483648; echo 2147483647; shuf -i 1-2000000000 -n 498 | awk '{print $1 - 1000000000}') | shuf | tr '\n' ' ')</code>

<code>./push_swap $ARG | ./checker_Linux $ARG</code>

<code>./push_swap $ARG | wc -l</code>
