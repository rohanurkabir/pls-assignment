<div align="center">

# Assignment
### Programming Language Structure
### Course code: CSC-461
<br>

</div>

## Categories

### 1. 🔹 **Fixed Dynamic**
- The array has a **fixed size** known at **compile time**.
- Memory is allocated either **on the stack** (in C++) or **in a fixed block** (in JS).
- Cannot change size after creation, but values can be modified.

### 2. 🔹 **Stack Dynamic**
- The array size is **decided at runtime**, but memory is still allocated on the **stack** (in C++).
- In JavaScript, it mimics runtime size creation using `new Array(n)`.
- Useful when the exact size is known only during execution.

### 3. 🔹 **Fixed Heap Dynamic**
- The array is allocated in the **heap** with a **fixed size**.
- Requires manual allocation and deallocation (in C++).
- In JS, similar behavior is achieved using `new Array(n)` with a known size.

### 4. 🔹 **Heap Dynamic**
- Arrays that are **allocated in heap memory** and are **resizable** during execution.
- C++ uses `std::vector`, which auto-manages memory.
- JavaScript arrays are dynamic by default, supporting `.push()`, `.pop()`, etc.

---

## Comparison: C++ vs JavaScript

| Category             | C++                                                   | JavaScript                                              |
|----------------------|--------------------------------------------------------|---------------------------------------------------------|
| **Fixed Dynamic**     | `int arr[5];` — size and memory fixed at compile time | `let arr = [1, 2, 3];` — fixed elements at init           |
| **Stack Dynamic**     | `int n; cin >> n; int arr[n];` — stack-allocated VLA  | `let arr = new Array(n);` — size from user input          |
| **Fixed Heap Dynamic**| `new int[5]` — heap-allocated, fixed size             | `new Array(5)` — heap-like fixed block in JS              |
| **Heap Dynamic**      | `vector<int>` — resizable heap memory                | Dynamic array — resizable with `.push()` and `.pop()`    |
| **Memory Control**    | Manual (`delete[]`, memory managed manually)          | Automatic (Garbage Collected)                            |
| **Flexibility**       | More explicit control (stack vs heap)                 | Arrays are dynamic by default, simpler but abstracted    |
| **Performance**       | Faster with fixed-size arrays                         | Slight overhead due to dynamic behavior                  |

---

**Conclusion**:
- **C++** gives low-level control over memory (stack vs heap), ideal for performance-critical apps.
- **JavaScript** simplifies array usage with fully dynamic and garbage-collected behavior.
