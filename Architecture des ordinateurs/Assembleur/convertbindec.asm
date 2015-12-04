;
;
;
EXTERN printf
EXTERN atoi
EXTERN puts

SECTION .DATA

chaine 		db "%d", 13, 10, 0

SECTION .TEXT
        GLOBAL  main

main:
        mov ebp, esp
        add ebp,4                    ; saute adresse de retour

        add ebp,4                    ; passe a argv dans la pile
        mov esi,[ebp]                ; esi <- argv

	mov esi, [esi+4]	     ; esi <- argv[1] 1=>+4 (car int = 4 octets)
	mov eax, 0
				
	while1:				; boucle while
	mov bl, [esi]			; *ptr_ch = bl
	inc esi				; *ptr_ch++;
				
	mov ecx, 2		      
	mul ecx				; on multiplie eax par 2, et on stocke
	cmp bl, '0'			; on compare bl à 0
	jnz suite
		jmp continue
	suite:
		add eax, 1
	continue:
	cmp bl, 0			; si on est pas arrivé au bout de la chaine, on continue
	jne while1
				
				
	sub eax, 1 		     ; on soustrait 1 à eax
	sar eax, 1
	push eax
	push chaine
        call printf                  ; appel printf
        add esp,8                    ; depile de 2x32bits
        jmp end_ok                   ; saute a la fin 

end_ok:
        ret
