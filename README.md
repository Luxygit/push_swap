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
- duplicates check
- a sorted copy of stack A
- Index normalization 
- Chunk-based sorting strategy
	IF top A element index is within each chunk then push to B
		IF  number is lower than the middle of the chunk then RB
		to keep bigger numbers at the top.
	Else rotate A until element index belongs to the chunk
- Optimized push-back phase
	WHILE B is not empty rotate it or reverserotate it to find the max index

Small Inputs (≤ 5 numbers)
Hard-coded sorting functions:
- sort_2
- sort_3
- sort_4
- sort_5

Large Inputs (> 5 numbers)
- Divide input into chunks
- Push chunks to stack B
- Keep B partially structured
- Push back largest elements efficiently

Optimized chunk configuration:
- ≤ 100 numbers → 5 chunks
- 500 numbers → 9 chunks

Testing
- Generate 500 random numbers
ARG=$(shuf -i 1-500 -n 500 | tr '\n' ' ')
./push_swap $ARG | ./checker_linux $ARG
./push_swap $ARG | wc -l
