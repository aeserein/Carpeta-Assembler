.code
main proc
	mov rax, -1		; -1 en notaci�n binaria C2 pone todos los bits en 1
	mov al, 5		; El primer byte, los dem�s no se tocan
	mov ax, 17		; El primer short, los dem�s bytes no se tocan

	mov eax, 1		; Los primeros 32 bits del registro se ponen en 1 (00000001)
					; pero esto tambi�n pone en 0 todos los bits de la segunda mitad del registro

					; Esto tambi�n lo hace con los registros nuevos
	mov r8, -1
	mov r8b, 5
	mov r8w, 17

	mov r8d, 1
	ret
main endp
end