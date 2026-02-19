*This project has been created as part of the 42 curriculum by Dievarga*

**"Description"**
This project gives us a introduction to sorting algorithms and their implementation in solving problems.
The goal is to sort a list of integers using a limited set of stack operations, producing the smallest possible number of moves.

**"Instructions"**
To be compiled with its makefile that at the same time compiles first the libft library with its own
makefile and then the push_swap program is compiled.


**"Resources"**
This implementation uses:

- ft_atol_safe to clean the input
- a sorted copy of stack A
- Index normalization
- Hard coded Small sorting cases
- Chunk-based sorting strategy
	IF top A element index is within each chunk then push to B
		IF  number is lower than the middle of the chunk then RB
		to keep bigger numbers at the top.
	Else rotate A until element index belongs to the chunk
- Optimized push-back phase
	WHILE B is not empty rotate it or reverserotate it to find the max index

Testing
- Generate 500 random numbers
ARG=$(seq -1000 1000 | shuf -n 500 | tr '\n' ' ')
./push_swap $ARG | ./checker_linux $ARG
./push_swap $ARG | wc -l
