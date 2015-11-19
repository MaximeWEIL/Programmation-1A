EXTERN scanf
EXTERN printf

SECTION .data

        x            dd 0
        chaine1      db "Choisissez un entier x :", 10, 13, 0
        chaine2      db "%d", 0
        chaine3      db "Le resultat de (x*2+1) est : %d", 10, 13, 0

SECTION .text

GLOBAL main

main:
        push chaine1
        call printf
        add esp, 4

        push x
        push chaine2
        call scanf
        add esp, 8

	mov eax, [x]
	imul eax, 2
	add eax, 1

        push eax
        push chaine3
        call printf
        add esp, 8

        mov eax, 0
        ret

