EXTERN scanf
EXTERN printf

SECTION .data
	
	a	     dd	0
        chaine1      db "Choisissez un entier :", 10, 13, 0
	chaine2      db "%d", 0
	chaine3	     db "Le nombre est : %d", 10, 13, 0

SECTION .text

GLOBAL main

main:
	push chaine1
        call printf
	add esp, 4

	push a
	push chaine2
        call scanf
        add esp, 8

	mov eax, [a]
	push eax
	push chaine3
        call printf
        add esp, 8

	mov eax, 0
        ret

