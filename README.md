# ft_printf

Reimplementation of the `printf` function in C, following the **42 Norm** rules.  
The goal is to create a small library with the `ft_printf` function that replicates the behavior of the original `printf` for a subset of conversions, without relying on the libc formatting functions.

## ✨ Features

- Public function: `int ft_printf(const char *format, ...);`
- Supported conversions (mandatory part):
  - `%c` — character  
  - `%s` — string (null-terminated)  
  - `%p` — pointer (in hexadecimal, with `0x` prefix)  
  - `%d` / `%i` — signed decimal integer  
  - `%u` — unsigned decimal integer  
  - `%x` — hexadecimal (lowercase)  
  - `%X` — hexadecimal (uppercase)  
  - `%%` — prints a `%` symbol  
- Output written to `stdout` using `write(2)`.  
- Returns the **total number of characters printed** (just like `printf`).  

> 💡 If you have implemented bonuses (width, precision, flags `# + 0 -` etc.), add a **Bonus** section here describing exactly what is included.

## 🔧 Compilation

Requirements: `gcc` and `make`.

```bash
# compile the library
make

# recompile from scratch
make re

# remove object files
make clean

# remove everything (including the .a file)
make fclean
````

After running `make`, you should obtain `libftprintf.a` in the project folder.

## ▶️ Usage

Minimal example with a test `main.c`:

```c
#include "ft_printf/ft_printf.h"   // adjust the include path to your tree

int main(void)
{
    int n1 = ft_printf("Hello %s! Number: %d, Hex: 0x%x, Ptr: %p %%\n",
                       "world", 42, 42, (void*)&n1);
    int n2 =    printf("Hello %s! Number: %d, Hex: 0x%x, Ptr: %p %%\n",
                       "world", 42, 42, (void*)&n1);

    ft_printf("ft_printf printed %d chars; printf printed %d chars\n", n1, n2);
    return 0;
}
```

Compile the example linking the library:

```bash
gcc -Wall -Wextra -Werror main.c -L. -lftprintf -o demo
./demo
```

> Make sure the `-I` flag in your `Makefile` (or compilation command) points to the directory containing `ft_printf.h`.

## ✅ Rules & Limitations (42)

* Must comply with the **Norm**.
* Usage of `printf` or equivalent formatting functions is forbidden.
* Only allowed functions: `malloc`, `free`, `write` (and those explicitly permitted by 42).
* Must ensure **proper error handling** (return `-1` on internal failure) and **accurate character count**.

## 🧪 Suggested tests

* Edge cases: `NULL` strings, `NULL` pointers, integer limits (`INT_MIN`, `INT_MAX`), large unsigned values, zeros, etc.
* Direct comparison with the original `printf` (when applicable).
* Community testers (e.g., `printfTester`, `42TESTERS-PRINTF`, `pft`).

## 📦 Integration in other projects

1. Copy the `ft_printf/` folder and `Makefile` (or add it as a submodule).
2. Add `libftprintf.a` to your project’s final linking step.
3. Include `ft_printf.h` where you need `ft_printf`.

## 🗒️ Conventions & Style

* Written in ANSI C, modular design.
* Helper functions for each type of conversion/output.
* No *undefined behavior* (careful with `va_list`, `NULL`, sizes, signs).

## 🧰 Makefile targets (example)

* `make` — build the library.
* `make clean` — remove `.o` files.
* `make fclean` — remove `.o` files and `.a` library.
* `make re` — `fclean` + `make`.

> Adjust this list if your `Makefile` includes additional targets (e.g., `bonus`, `test`, etc.).

## 👤 Author

* **hroxo** — 42 `ft_printf`
