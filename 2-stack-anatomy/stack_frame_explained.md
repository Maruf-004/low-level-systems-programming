- ` higher addresses 
- ` function parameters     
- ` return address          │ ← stored by CALL
- ` saved base pointer (rbp)
- ` local variables         
- ` lower addresses 


**Explanation:**
- Calling `inner(y)` pushes return address & saved RBP onto the stack.  
- Local `a` and `x` live in the stack frame.  
- Their addresses show that the stack grows downward.
