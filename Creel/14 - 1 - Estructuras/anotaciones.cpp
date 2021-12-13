/*
	Crear estructura
		-------------------------------------------
		Nombre struct
			x dd ?
			y dd ?
		Nombre ends
		-------------------------------------------
			?	->	No inicializar la variable
				Se le puede poner un valor por defecto en lugar del ?
			ends->	End structure
		Se declara en el segmento .data


	Declarar instancia
		nombreVariable Nombre {420, 69}
		nombreVariable Nombre {}	->	Usa los valores por defecto
		nombreVariable Nombre { , 5}	->	Usa el primer valor por defecto, asigna el segundo
		Se declara en el segmento .data

	Estructuras en C++ -> Natural alignment
		Si se trabaja en C++ hay que tener un modelo de una estructura en Assembler que sea igual a la que se usa en c++
		El compilador en c++ por defecto asigna los offsets de los campos dentro de una estructura según el tamaño del elemento
			Cada variable debe empezar en un offset divisible por su tamaño
			Ejemplo
				Un int puede empezar en offset 0, 4, 8, 12, etc
				Un long puede empezar en offset 0, 8, 16, 24, etc
				struct Nombre {
					char a;		->	Offset 0, hasta 1 no inclusive
					short b;	->	Offset 2, hasta 4 no inclusive
					int c;		->	Offset 4, hasta 8 no inclusive
					long d;		->	Offset 8, hasta 16 no inclusive
				}				->	Offset 16

				a	  |	b	b |	c	c	c	c |	d	d	d	d	d	d	d	d
				------ ----------------------- --------------------------------
				0	1	2	3	4	5	6	7	8	9	10	11	12	13	14	15
			El espacio sin usar entre offsets se llama padding
			No es una mala idea tratar de alinear el orden de las variables para dejar la menor cantidad de padding posible
		
		*En Assembler el padding tiene que ser ubicado manualmente
			Por eso es importante saber lo del padding
		
		Con #pragma pack el compilador pone los datos uno al lado del otro, sin padding y sin la regla de los divisores
			Demo en el archivo c++ para ver sintaxis

	Clases en C++
		Para crear en Assembler el mismo tipo de dato que una clase hay que crear una estructura
			En assembler no existe private o public
			Los métodos no ocupan espacio

	Uniones
		Parece las uniones en C++ son estructuras con variables que comparten memoria
			Buscar, en el caso de que las necesite
		Ejemplo
			union UnaUnion {
				char a;
				short b;
				int c;
				long d;
			}
				Todo esto ocupa 8 bytes, el tamaño del long
				Las variables tienen todas la misma dirección de memoria en el offset 0
		En assembler se declara igual que una estructura pero con la palabra union
			UnaUnion union
				a db ?
				b dw ?
				c dd ?
				d dq ?
			UnaUnion ends
				También usa ends, a pesar de ser una unión
	
	Crear una instancia de una unión
		nombre UnaUnion { 0ffffffffh }
		Como las uniones son una sola ubicación de memoria, solo tienen un campo que se puede asignar
			Entonces de ese 0ffffffffh solo se toman los primeros 8 bits porque el primer campo es un db
				Solo asigna ff en la dirección
		Para asignar un valor es lo mismo que en una estructura
			MOV nombre.c, 90
			La única diferencia es que todas las variables están en la misma ubicación y en realidad son una sola variable
		
*/