EXTERN puts

SECTION .data
        chaine      db "Hello world !", 0
SECTION .text

GLOBAL main

main:
        push chaine
        call puts
        add esp, 4
        ret
