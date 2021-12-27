.data
ints1 dd 0, 1, 2, 3
ints2 dd 5, 5, 5, 5

floats1 real4 0.0, 1.0, 2.0, 3.0
floats2 real4 7.0, 6.0, 5.0, 4.0

dobles1 real8 0.0, 1.0
dobles2 real8 7.0, 6.0

.code
TestSIMD proc
	MOVAPD XMM0, XMMWORD PTR [dobles1]
	MOVAPD XMM1, XMMWORD PTR [dobles2]	; Poner los datos en registros SSE
	
	;MOVDQU	para enteros
	;MOVAPS para floats
	;MOVAPD para dobles

	;PADDB XMM0, XMM1
	;PSUBD XMM0, XMM1		Para enteros

	;ADDPS XMM0, XMM1
	;subps XMM0, XMM1
	;MULPS XMM0, XMM1
	;DIVPS XMM0, XMM1		Para floats

	;ADDPD XMM0, XMM1
	;SUBPD XMM0, XMM1
	;MULPD XMM0, XMM1
	DIVPD XMM0, XMM1

	RET
TestSIMD endp
end