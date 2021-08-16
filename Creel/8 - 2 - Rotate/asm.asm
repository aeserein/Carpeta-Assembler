.data
lastFlags dq 0

.code
RestoreFlags proc
	push qword ptr [lastFlags]
	popfq
	ret
RestoreFlags endp

SaveFlags proc
	pushfq
	pop qword ptr [lastFlags]
	ret
SaveFlags endp

; int AssemblerRotate(unsigned long long *rcx)
AssemblerRotate proc
	MOV rdx, qword ptr [rcx]
	CALL RestoreFlags

	MOV R8, RCX

	RCL rdx, 1

	MOV qword ptr [rcx], rdx

	MOV rax, 0
	MOV rcx, 1
	CMOVC rax, rcx

	CALL SaveFlags

	RET
AssemblerRotate endp
end