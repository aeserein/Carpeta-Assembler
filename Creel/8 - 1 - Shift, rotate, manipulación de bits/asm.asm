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

; int AssemblerShift(unsigned long long *rcx)
AssemblerShift proc
	MOV rdx, qword ptr [rcx]
	CALL RestoreFlags

	MOV R8, RCX

	MOV CL, 2
	SHL rdx, CL

	MOV RCX, R8

	MOV qword ptr [rcx], rdx

	MOV rax, 0
	MOV rcx, 1
	CMOVC rax, rcx

	CALL SaveFlags

	RET
AssemblerShift endp
end