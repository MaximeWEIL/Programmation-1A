EXTERN printf

SECTION .data
	a	dd 	5
	b 	dd	10
        chaine	db "Hello world ! %d %d", 10, 13, 0

SECTION .text

GLOBAL main

main:
	mov eax, [b]
	push eax

	mov eax, [a]
	push eax

        push chaine
        call printf

        add esp, 12
	mov eax, 0

        ret
