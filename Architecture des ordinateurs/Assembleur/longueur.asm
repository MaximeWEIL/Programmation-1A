EXTERN printf
EXTERN puts
SECTION .DATA

prt1    db " Longueur du param = %d ",13,10,0         ; chaine pour le printf

SECTION .TEXT
        GLOBAL  main

main:
        mov ebp, esp
        add ebp,4                    ; saute adresse de retour

        add ebp,4                    ; passe a argv dans la pile
        mov esi,[ebp]                ; esi <- argv
	mov esi, [esi+4]		 ; esi <- argv[1] 1=>+4 (car int = 4 octets)
	mov ecx, -1

	while:				 ; boucle while
	mov bl, [esi]			 ; *ptr_ch = bl 
	inc esi				 ; *ptr_ch++;
	inc ecx				 ; on incrémente le compteur de longueur
	cmp bl, 0			 ; si on est pas arrivé au bout de la chaine, on continue
	jne while

        push ecx                     ; empile la valeur ecx (2ieme param de printf)
        push prt1                    ; empile l'adresse de la chaine(1ier param de printf)
        call printf                  ; appel printf
        add esp,8                    ; depile de 2x32bits
        jmp end_ok                   ; saute a la fin 


end_ok:
        ret
