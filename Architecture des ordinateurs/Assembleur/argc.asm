EXTERN printf

SECTION .data
        argc	db "La valeur est :  %d", 10, 13, 0

SECTION .text

GLOBAL main

main:
	mov eax, [esp+4]
	push eax
	push argc

        call printf

        add esp, 8
	mov eax, 0

        ret
