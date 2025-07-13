# 🔧 Low‑Level Systems Programming on Kali Linux

This repo documents my journey in C‑based systems programming on Kali Linux, covering:

1. **Computer Architecture & CPU Fundamentals**  
2. **Memory Anatomy** (text, data, bss, heap, stack)  
3. **Stack Anatomy & Stack Frames**  
4. **Key Linux System Calls** (`read`, `write`, `fork`, `execve`, `wait`)

Each module has theory (Markdown) and hands‑on C code you can compile & run on Kali.

---

## Repository Layout

- **0-computer-architecture/**: CPU internals & execution cycle  
- **1-memory-anatomy/**: Process memory map + demo program  
- **2-stack-anatomy/**: Stack frame demo + GDB walkthrough  
- **3-system-calls/**: Individual syscall demos + explanations  

---

## 🛠️ Usage

```bash
# 1. Clone
git clone https://github.com/Maruf-004/low-level-systems-programming.git
cd low-level-systems-programming

# 2. Build all demos
make

# 3. Run examples, e.g.:
./1-memory-anatomy/memory_layout
./3-system-calls/write_syscall
