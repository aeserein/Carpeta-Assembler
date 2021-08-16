.data
unByte byte 78
unWord word ?			; Se puede inicializar con ? para que no asigne nada y quede lo que ya está en memoria
unFloat real4 89.5

.code
main proc
	mov al, byte ptr [unByte]
	ret
main endp
end