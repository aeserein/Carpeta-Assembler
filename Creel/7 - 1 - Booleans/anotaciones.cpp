/*
AND
	AND [registro], [registro]
OR
	OR [registro], [registro]
XOR
	XOR [registro], [registro]
NOT
	NOT [registro]

Las operaciones trabajan sobre cada bit
	Si comparo 2 registros de 64 bits, va a hacer 64 operaciones
	El resultado de cada bit se guarda en el primer registro

Operaciones que no están en assembler
	XNOT se puede hacer con XOR entre 2 registros y NOT al resultado
	NOR se puede hacer con OR entre 2 registros y NOT al resultado
	NAND se puede hacer con AND entre 2 registros y NOT al resultado
*/