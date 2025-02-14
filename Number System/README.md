# **Number System (Binary, Octal, Hexadecimal) – Quick Notes for CP**

### 🎥 **Video Resource**  
[Binary, Octal, Hexadecimal (Playlist)](https://www.youtube.com/watch?v=xpy5NXiBFvA&list=PLfqMhTWNBTe137I_EPQd34TsgV6IO55pt&index=6)

---

## **1️⃣ Binary (Base 2)**  
✅ Uses **0 & 1** only.  

### 🔄 **Conversions:**  
- **Decimal → Binary**: Divide by `2`, store remainders.  
- **Binary → Decimal**: Multiply by powers of `2`.  

### 🔧 **Bitwise Operations:**  
`&` (AND), `|` (OR), `^` (XOR), `~` (NOT), `<<` (Left Shift), `>>` (Right Shift)  

### 🚀 **Common Binary Tricks:**  
- **Check if a number is power of 2** → `n & (n - 1) == 0`  
- **Count set bits** → `__builtin_popcount(n)` (C++)  
- **Extract last set bit** → `n & -n`  
- **Turn off last set bit** → `n & (n - 1)`  

---

## **2️⃣ Octal (Base 8)**  
✅ Uses **0-7** only.  

### 🔄 **Conversions:**  
- **Decimal → Octal**: Divide by `8`.  
- **Octal → Decimal**: Multiply by powers of `8`.  

📌 **Shortcut:** Group **3 binary digits** = 1 octal digit.  

---

## **3️⃣ Hexadecimal (Base 16)**  
✅ Uses **0-9 & A-F** (A=10, B=11, ..., F=15).  

### 🔄 **Conversions:**  
- **Decimal → Hex**: Divide by `16`.  
- **Hex → Decimal**: Multiply by powers of `16`.  

📌 **Shortcut:** Group **4 binary digits** = 1 hex digit.  

---

## **4️⃣ Quick CP Usage**  

| **Base**  | **Literals (Examples)**  |
|-----------|-------------------------|
| **Binary**  | `0b1010` (Python, C++) |
| **Octal**   | `0o12` (Python), `012` (C, C++) |
| **Hex**     | `0xA` (C, C++, Python) |

🔹 **Hex to int in C++:** `stoi("A", 0, 16)`  
🔹 **Bitmasking:** Use `1 << i` to check/set `i-th` bit.  

