EXTERN printf

SECTION .data
	argv0	db "La valeur de argv0 : %s", 10, 13, 0
	argv1	db "La valeur de argv1 : %s", 10, 13, 0

SECTION .text

GLOBAL main

main:
	mov eax, [esp+8]   ;[esp+8] dans eax, tableau argv
	mov ebx, [eax]     ; argv[0]

	push ebx	   ;push
	push argv0	   ;push

        call printf	   ;fonction printf

        add esp, 8	   ;on dépile de 2
	mov eax, 0	   ;eax à 0
	mov ebx, 0	   ;ebx à 0

	mov eax, [esp+8]   
	mov ebx, [eax+4]   ;argv[1]

	push ebx,
	push argv1

	call printf

	add esp, 8
	mov eax, 0
	mov ebx, 0
	
        ret
