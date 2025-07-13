# 1. What Is a Low‑Level Language?

**Definition:**
- Offers minimal abstraction over hardware.
- Direct access to memory, CPU registers, and OS services.

**Why It Matters:**
- Fine‑grained control for performance, embedded, and security work.
- You see exactly how your program becomes machine instructions.

**Examples:**
- **Machine Code:** raw binary (10110000 …)
- **Assembly:** mnemonics (MOV EAX, 1)
- **C** (when used without higher‑level libraries): calling write(), pointer math, manual memory management.

# 2. Computer Architecture & CPU Fundamentals

## 2.1 Key Components
- **Registers:** tiny, ultra‑fast on‑chip storage (e.g. RAX, RBX, RSP, RIP)  
- **ALU:** does arithmetic/logic (ADD, AND, XOR)  
- **Control Unit:** fetches and decodes instructions  
- **Buses:** pathways connecting CPU ↔ RAM ↔ I/O  

## 2.2 Fetch‑Decode‑Execute Cycle
1. **Fetch:** CPU reads instruction at address in RIP.  
2. **Decode:** Control Unit parses the opcode and operands.  
3. **Execute:** ALU or other unit carries out the action.  
4. **Write‑Back:** Results stored back to registers or memory.  
5. **Advance RIP:** to next instruction, repeat.  

## 2.3 Pipelining (Modern CPUs)
- Break cycle into stages (Fetch, Decode, Execute, etc.)  
- Overlap stages for higher throughput
