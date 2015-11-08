 -----------------
|    Registers    |
 -----------------

64bit	  |	32bit	|	naming
-----	  |	-----	|	-----

// General Purpose Registers

%rax	  |	%eax	|	accumulator
%rcx	  |	%ecx	|	counter
%rdx	  |     %edx	|	data
%rbx	  |	%ebx	|	base registor
%rsp	  |	%esp	|	stack pointer
%rbp	  |	%ebp	|	base pointer
%rsi	  |	%esi	|	source index
%rdi	  |	%edi	|	destination index
%r8 	  |
%r9 	  |
%r10	  |
%r11	  |
%r12	  |
%r13	  |
%r14	  |
%r15	  |

// Special Purpose Registers

%rip    |	%eip	|	instruction pointer
%rflags	|

// Register Variants

|63..32|31..16|15-8|7-0|
              |%ah.|%al|
              |%ax.....|
       |%eax...........|
|%rax..................|


 --------------
|    Syntax    |
 --------------

// Intel

operation destination, source
	
	operation: 
		an instruction
	
	destination & source: 
		a memory address || a register || a literal value


 ---------------------------
|    Common Instructions    |
 ---------------------------

mov
push/pop
add/adc
sub/sbc
mul/imul
div/idiv
inc/dec
and/or/xor/not
jmp
je/jne/jc/jnc
neg
cmp
call
ret
nop
loop
