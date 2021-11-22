.code
assemblerGCD PROC
	MOV RAX, 0		; Error value

	CMP RCX, 0		; Los 2 argumentos son RCX y RDX
0	JE Devolver
	CMP RDX, 0
	JE Devolver

	PUSH RBX		; Paso RDX a RBX porque RDX tiene que estar libre para dividir
	MOV RBX, RDX

	LoopInicio:
	XOR RDX, RDX
	MOV RAX, RCX
	DIV RBX			; RDX es el
	MOV RCX, RBX	; Copiar A a B
	MOV RBX, RDX	; Copiar el resto a RBX

	CMP RDX, 0
	JNE LoopInicio

	MOV RAX, RCX

	POP RBX
	Devolver:
	RET
assemblerGCD ENDP
END