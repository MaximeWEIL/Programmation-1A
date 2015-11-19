;
; teste si il y a 1 param (argc=2)
; si oui affiche le param en int (%d)
; sinon msg err
;
EXTERN printf
EXTERN puts
EXTERN atoi
SECTION .DATA
prt1    db " Valeur du param %d ",13,10,0         ; chaine pour le printf
prt2    db " Un et un seul parametre svp ",13,10,0         ; chaine d'erreur
SECTION .TEXT
        GLOBAL  main

main:
        mov ebp, esp
        add ebp,4                    ; saute adresse de retour

        mov eax,[ebp]                ; recupere argc
        dec eax	                     ; eax = argc - 2	
        dec eax                      ; si eax diff de 2
        jnz end_err                  ; alors on sort

        add ebp,4                    ; passe a argv dans la pile
        mov esi,[ebp]                ; esi <- argv
        mov eax,[esi+4]              ; eax <- argv[1] 1=>+4 (car int = 4 octets)

        push eax                     ; empile argv[1], la chaine de caractere
        call atoi                    ; appel a atoi (resultat dans eax)
        add esp,4                    ; depile

        push eax                     ; empile la valeur eax (2ieme param de printf)
        push prt1                    ; empile l'adresse de la chaine(1ier param de printf)
        call printf                  ; appel printf
        add esp,8                    ; depile de 2x32bits
        jmp end_ok                   ; saute a la fin 

end_err:
        push prt2
        call puts
        add esp,4

end_ok:
        ret
