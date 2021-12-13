.data
Point struct
	x dd ?
	y dd ?
Point ends

unPunto Point {1, 2}

; Declaro la misma estructura con natural alignment que está en el c++
; Si quisiese pasar una estructura desde c++ tengo que declarar lo mismo en Assembler
; Hay que poner los paddings a mano
; DUP(0) es duplicate 0
; Obviamente hay que tratar de evitar usar paddings
EstructuraConPadding struct
	c db ?
		db 3 DUP(0)		; Padding
	i dd ?
	s dw ?
		db 6 DUP(0)		; Padding
	d real8 ?
EstructuraConPadding ends

; Declaro la misma estructura con pragma pack
; Assember por defecto pega los espacios para cada dato, así que solo hay que declarar normalmente
EstructuraConPragmaPack struct
	c db ?
	i dd ?
	s dw ?
	d real8 ?
EstructuraConPragmaPack ends

; Declaro la clase UnaClase que está en el c++
UnaClase struct
	i dd ?
UnaClase ends

.code
asignarValores PROC
	; Asingnar valores a los campos de una estrucutra
	MOV unPunto.x, 420
	MOV unPunto.y, 69

	; Asignar valores a los campos con un puntero
	;MOV [RCX].Point.x 420			; Hay que poner el tipo porque el compilador no sabe a qué apunta
	RET
asignarValores ENDP

unaFuncion PROC
	MOV [RCX].UnaClase.i, 420		; No importa que i sea privado, en la memoria no existe tal cosa
	RET
unaFuncion ENDP

END