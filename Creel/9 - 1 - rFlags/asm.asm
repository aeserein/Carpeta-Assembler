.code
main PROC
	; Carry
	;MOV RAX, -1			; Quedan todos los bits en 1
	;ADD RAX, 1
	
	; Parity
	;MOV EAX, 1				; 1 tiene un 1, deberia poner el bit de paridad en 1
	;AND EAX, EAX
	;MOV EAX, 3				; 3 tiene dos 1s, debería poner el bit de paridad en 0
	;AND EAX, EAX

	; Auxiliary carry
	;MOV RAX, 15
	;ADD RAX, 1

	; Zero
	;XOR RAX, RAX
	;ADD RAX, 123
	;XOR RAX, RAX
	;INC RAX
	;MOV RBX, 5
	;MOV RCX, 5
	;CMP RBX, RCX

	; Sign
	;MOV RAX, 2
	;MOV RBX, 5
	;SUB RAX, RBX			; 2 - 5 da un número negativo, debería poner la bandera PL en 1
	
	; Overflow
	XOR RAX, RAX
	MOV AL, 255				; Todos los bits en 1
	SHR AL, 1				; Los corro hacia la derecha, queda un 0 en el octavo bit (127)
	ADD AL, 1				; Le sumo 1 (128 unsigned, -0 signed)
	
	RET
main ENDP
END
