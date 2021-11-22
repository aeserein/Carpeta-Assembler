.CODE
testWhile PROC
	MOV EAX, 0

	CMP EAX, 5				; Este vendr�a a ser el check inicial
	JGE Fin

	InicioLoop:
	INC EAX
	CMP EAX, 5
	JL InicioLoop

	Fin:	
	RET
testWhile ENDP

testDoWhile PROC
	MOV EAX, 0

	InicioLoop:				; Do while es lo mismo pero sin la comparaci�n de la linea 5
	INC EAX					; Va a correr el INC al menos 1 vez s� o s�
	CMP EAX, 5
	JL InicioLoop
	
	RET
testDoWhile ENDP

loopComunParaRecorrerAlgo PROC
	; Esto no anda porque no s� c�mo manejar un array
	MOV ECX, 5
	MOV RAX, [unArray]
	XOR RDX, RDX			; RDX ser�a el offset

	LoopInicio:
	ADD dword ptr [RAX+RDX], 1
	ADD RDX, 4

	DEC ECX
	JNZ LoopInicio

	RET
loopComunParaRecorrerAlgo ENDP

main PROC
	CALL loopComunParaRecorrerAlgo
	RET
main ENDP
END