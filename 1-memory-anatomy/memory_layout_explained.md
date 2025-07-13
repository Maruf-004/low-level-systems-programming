3. Memory Anatomy (Linux Process Layout)
Every Linux process sees this virtual address space:

-Kernel Space (protected)     0xFFFFFFFFFFFFFFFF (very high)
-Stack (grows ↓)
-Heap (grows ↑)
-.bss (uninitialized vars)
-.data (initialized vars)
-.text (code, read‑only)  0x0000000000000000 (very low)

**Explanation:**
- `main`’s address → **.text** segment  
- `global_var` → **.data**  
- `malloc` result → **heap**  
- `local_var` → **stack**
