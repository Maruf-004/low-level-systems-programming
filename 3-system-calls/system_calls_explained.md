## System Calls Overview
- **write()**  
  - Syscall #1, writes to fd (1=stdout)
- **read()**  
  - Syscall #0, reads from fd (0=stdin)
- **fork()**  
  - Syscall #57, clones the process
- **execve()**  
  - Syscall #59, replaces process image
- **wait()**  
  - Syscall #61, waits for child to exit

**Calling convention (x86_64):**
- RAX = syscall number  
- RDI, RSI, RDX, R10, R8, R9 = up to 6 arguments  
- `syscall` → trap to kernel → RAX return
