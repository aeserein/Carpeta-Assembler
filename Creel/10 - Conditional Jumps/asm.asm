.code
JumpOverflow PROC
	MOV EAX, -9
	ADD EAX, -12
	JO Overflowed			; Si esto da falso, sigue a la siguiente línea
	JNO DidntOverflow		; Lo que significaría que esta línea sí o sí va a dar verdadero y saltar

	Overflowed:
	MOV RAX, 1

	DidntOverflow:
	MOV RAX, 2

	RET
JumpOverflow ENDP

ConditionalMoveCarry PROC
	MOV EBX, 111
	MOV EAX, -1
	ADD EAX, 1
	CMOVC EAX, EBX
	RET
ConditionalMoveCarry ENDP

ComoHacerUnLoop PROC
	MOV RAX, 10
	MOV RBX, 0

	LoopComienzo:
	; Hago cosas
	INC RBX
	; //////////

	DEC RAX					; DEC va bajando de a 1. Cuando llega a 0 pone el flag Zero en 1
	JNZ LoopComienzo		; JNZ va a volver a LoopComienzo mientras la última operación no haya marcado el flag Zero

	RET
ComoHacerUnLoop ENDP

SetByteCondicional PROC
	MOV RAX, 10
	MOV RBX, 10
	CMP RAX, RBX			; CMP Resta los 2 campos. Si son iguales va a setear el flag Zero
	SETE CL
	RET
SetByteCondicional ENDP

JumpAboveOBelow PROC
	MOV RCX, 0

	MOV RAX, 3
	MOV RBX, 2
	CMP RAX, RBX
	JA RaxAboveRbx
	JB RaxBelowRbx

	RaxAboveRbx:
	MOV RCX, 1
	RET

	RaxBelowRbx:
	MOV RCX, 2
	RET
JumpAboveOBelow ENDP

MovCondicionalSegunSigno PROC
	MOV RDX, -1				; Uso RDX para guardar -1 porque CMOV no toma literales
	MOV RCX, 0

	MOV RAX, 10
	MOV RBX, 15
	SUB RAX, RBX
	CMOVS RCX, RDX

	RET
MovCondicionalSegunSigno ENDP

SetByteSiEsMayor PROC
	MOV RCX, 0
	MOV RAX, 10
	MOV RBX, 5
	CMP RAX, RBX
	SETG CL
	
	RET
SetByteSiEsMayor ENDP

main PROC
	CALL SetByteSiEsMayor
	RET
main ENDP
END