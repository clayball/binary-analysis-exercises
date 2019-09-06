# Binary Analysis

I will be using this repo as I work through the book Practical Binary Analysis by Dennis Andriesse
published by No Starch Press.

https://nostarch.com/binaryanalysis


## Chapter 01, Anatomy Of A Binary

Phases of compilation
- preprocessing
- compilation
- assembly
- linking

C preprocessor output

```gcc -E -P chapter01.c```

Compile an assembly file

```gcc -S -masm=intel chapter01.c```

Compile an object file

```gcc -c chapter01.c```

Compile an executable binary

```gcc chapter01.c -o chapter01```

Using CMakeFiles

```make chapter01```

### Symbols and Stripped Binaries

Viewing Symbolic information

```readelf -p .interp chapter01```

Stripping an executable

```strip --strip-all chapter01```

### Disassembling A Binary

Disassembling an object file

Show contents of .rodata section

```objdump -sj .rodata chapter01.o```

Disassemble all the code in the object file

```objdump -M intel -d chapter01.o```

View relocation information

```readelf --relocs chapter01.o```

### Summary

Compilation phases: 
- preprocessing
- compilation
- assembly
- linking

Commands: 
- gcc (-E -P, -S -masm=intel, -c)
- readelf (-p, --relocs)
- strip (--strip-all)
- objdump (-sj, -M intel -d)

Terms: 
- lazy binding


## Chapter 02, The ELF Format

Executable and Linkable Format, ELF

ELF specification: http://refspecs.linuxbase.org/elf/elf.pdf

General format/contents of an ELF binary
- executable header
- section headers (optional)
- sections (optional)
- program headers (optional)



