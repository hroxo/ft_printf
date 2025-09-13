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

## 📁 Project structure

