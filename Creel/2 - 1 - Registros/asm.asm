.code
MENEM proc
	mov ax, -1			; ax = todos los bits en 1
	mov al, 0			; Cambio el segundo byte de ax
	mov ah, 0			; Cambio el primer byte de ax
	ret
MENEM endp
end