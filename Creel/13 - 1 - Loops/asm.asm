.CODE
testConSalto PROC
	PUSH RBX

	MOV EAX, 9
	MOV EBX, 7
	MOV ECX, 0

	CMP EAX, EBX
	JL EAXmenor		; Hacer estos saltos es costoso
	JMP Fin			; El procesador puede cargar instrucciones que después no va a usar
	EAXmenor:
	MOV ECX, 1
	
	Fin:
	POP RBX
	RET
testConSalto ENDP

ifComoCMOV PROC
	PUSH RBX

	MOV EAX, 4
	MOV EBX, 7
	MOV ECX, 0

	MOV EDX, 1
	CMP EAX, EBX
	CMOVL ECX, EDX		; Más rápido que testConSalto
						; CMOV no agarra un literal
	POP RBX
	RET
ifComoCMOV ENDP

ifConCondicionMultiple PROC
	PUSH RBX

	MOV EAX, 4
	MOV EBX, 7
	MOV ECX, 0
	MOV R8D, 0

	MOV EDX, 1
	CMP EAX, EBX
	CMOVL ECX, EDX		; ECX = 1 si EAX es menor
	
	CMP EAX, 4
	CMOVE R8D, EDX		; R8D = 1 si EAX = 4

	AND ECX, R8D		; Si ambos son iguales (ambas condiciones dieron positivo) ECX va a quedarse con el valor

	POP RBX
	RET
ifConCondicionMultiple ENDP

main PROC
	CALL ifConCondicionMultiple
	RET
main ENDP
END