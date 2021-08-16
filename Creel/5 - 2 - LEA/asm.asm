.data
unDoble dword 501

.code
main PROC
	LEA RAX, unDoble
	MOV dword ptr [RAX], 10
	RET
main ENDP

end