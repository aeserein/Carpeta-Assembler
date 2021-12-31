.data
vec1 real4 1.0, 2.0, 3.0, 4.0
vec2 real4 5.0, 6.0, 7.0, 8.0

vec3 real8 1.0, 2.0
vec4 real8 5.0, 6.0

vec5 real4 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0
vec6 real4 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0, 16.0

vec7 real8 1.0, 2.0, 3.0, 4.0
vec8 real8 9.0, 10.0, 11.0, 12.0

.code

TestSSE PROC
	;MOVAPS XMM0, XMMWORD ptr [vec1]
	;MOVAPS XMM1, XMMWORD ptr [vec2]

	;ADDPS XMM0, XMM1
	;SUBPS XMM0, XMM1
	;MULPS XMM0, XMM1
	;DIVPS XMM0, XMM1

	;-----------------------------

	MOVAPD XMM0, XMMWORD ptr [vec3]
	MOVAPD XMM1, XMMWORD ptr [vec4]
	ADDPD XMM0, XMM1

	RET
TestSSE ENDP

TestAVX PROC
	;VMOVUPS YMM0, YMMWORD ptr [vec5]
	;VMOVUPS YMM1, YMMWORD ptr [vec6]

	;VADDPS YMM2, YMM0, YMM1
	;VSUBPS YMM2, YMM0, YMM1
	;VMULPS YMM2, YMM0, YMM1
	VDIVPS YMM2, YMM0, YMM1
	; En AVX el resultado queda en un registro aparte en vez de pisar el primero
	; Si quiero pisarlo de todas formas solo puedo poner VADDPS YMM0, YMM0, YMM1
	; También se puede usar la instrucción de AVX pero con registros de SSE si quiero que el resultado quede en un tercer registro

	;--------------------------------------------------

	VMOVUPS YMM0, YMMWORD ptr [vec7]
	VMOVUPS YMM1, YMMWORD ptr [vec8]
	VADDPD YMM2, YMM0, YMM1

	RET
TestAVX ENDP

main PROC
	CALL TestAVX
	RET
main ENDP
END