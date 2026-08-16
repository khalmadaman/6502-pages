# 6502-pages

A small C program that displays the full 6502 memory map (0x0000–0xFFFF) as 256 pages of 256 addresses each.

## What it does

The 6502 organizes its 64KB address space into 256 "pages," each containing 256 addresses. 
This program prints one page at a time, showing each address in two rows: decimal offsets (0–255) on top, and the corresponding hex address ($0000–$00FF, etc.) below.

## Example output
                                       
                                                        The famous Zero Page
```
0       1       2       3       4       5       6       7       8       9       10      11      12      13      14      15
$0000   $0001   $0002   $0003   $0004   $0005   $0006   $0007   $0008   $0009   $000A   $000B   $000C   $000D   $000E   $000F
16      17      18      19      20      21      22      23      24      25      26      27      28      29      30      31
$0010   $0011   $0012   $0013   $0014   $0015   $0016   $0017   $0018   $0019   $001A   $001B   $001C   $001D   $001E   $001F
...
240     241     242     243     244     245     246     247     248     249     250     251     252     253     254     255
$00F0   $00F1   $00F2   $00F3   $00F4   $00F5   $00F6   $00F7   $00F8   $00F9   $00FA   $00FB   $00FC   $00FD   $00FE   $00FF

                                                        Currently you are on page n°0
```

## Why

Built as a way to internalize how the 6502's memory space is laid out page by page, without relying on external references — part of a ground-up approach to learning 6502 assembly and 8-bit hardware.

## License

MIT
