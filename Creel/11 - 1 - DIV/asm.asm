.data

.code
divTest8Bits PROC
	PUSH RBX
	MOV RAX, 0

	MOV AX, 50
	MOV BL, 3		; <- Divisor de 8 bits
	DIV BL

	POP RBX
	RET
divTest8Bits ENDP

divTest16Bits PROC
	PUSH RBX
	MOV RAX, 0
	MOV RDX, 0

	MOV AX, 50
	MOV BX, 3		; <- Divisor de 16 bits
	DIV BX

	POP RBX
	RET
divTest16Bits ENDP

divTest32Bits PROC
	PUSH RBX
	MOV RAX, 0
	MOV RDX, 0

	MOV EAX, 7871
	MOV EBX, 78		; <- Divisor de 32 bits
	DIV EBX

	POP RBX
	RET
divTest32Bits ENDP

divTest64Bits PROC
	PUSH RBX
	MOV RAX, 0
	MOV RDX, 0

	MOV RAX, 79871
	MOV RDX, 4
	; El dividendo sería ...4 [59 ceros] 79871
	;	El 4 es la primera mitad del dividendo que está en RDX
	;	[59 ceros] 79871 es la segunda mitad que está en RAX

	MOV EBX, 1238		; <- Divisor de 64 bits
	DIV EBX

	POP RBX
	RET
divTest64Bits ENDP


main PROC
	CALL divTest64Bits
	RET
main ENDP
END