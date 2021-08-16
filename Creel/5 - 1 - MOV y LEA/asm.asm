.data
unByte byte 10
otroByte byte 20

.code
main PROC
	MOV RAX, 123
	MOV CX, AX
	; No compila -> MOV unByte, otroByte
	MOV AL, unByte
	MOV unByte, 20
	RET
main ENDP
end