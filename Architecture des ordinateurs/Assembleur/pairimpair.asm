;
; teste si il y a 1 param (argc=2)
; si oui affiche le param en int (%d)
; sinon msg err
;
EXTERN printf
EXTERN puts
EXTERN atoi

SECTION .DATA
pair	  db "Le nombre %d est pair",13,10,0         ; chaine pour pair
impair    db "Le nombre %d est impair",13,10,0         ; chaine pour impair

SECTION .TEXT
        GLOBAL  main

main:
        mov ebp, esp
        add ebp,4                    ; saute adresse de retour

        add ebp,4                    ; passe a argv dans la pile
        mov esi,[ebp]                ; esi <- argv
        mov eax,[esi+4]              ; eax <- argv[1] 1=>+4 (car int = 4 octets)

        push eax                     ; empile argv[1], la chaine de caractere
        call atoi                    ; appel a atoi (resultat dans eax)
        add esp,4                    ; depile

	test eax,1		     ;test si le nombre (binaire) fini par 1
	Jz else
          push eax
          push impair
        Jmp endif
	else:
	  push eax
	  push pair
	endif:

	call printf

        add esp,8                    ; depile de 2x32bits
        jmp end_ok                   ; saute a la fin 

end_ok:
        ret
