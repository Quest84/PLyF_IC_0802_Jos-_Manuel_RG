/// 1.- Crear una clase pública y de nombre "Principal".
public class Principal{
	/// 2.- Dentro de esta clase "Principal" crear el punto de entrada "main".
	public static void main(String[] args) {
		/// 3.- Crear una instancia de tipo "PruebaExamen" y de nombre "pe", <<pero sin asignar memoria>>.
		PruebaExamen pe;
		/// 4.- Asignar una Expresión lambda a la instancia "pe", en la cual se imprima la suma de TRES números Enteros. * CUIDADO AQUÍ <---
		pe = (uno, dos, tres) -> System.out.println("1.- La suma es: " + (uno + dos + tres));
		pe.operacionPrueba(5, 5, 5); // <------ 15

		/// 5.- Invocar "operacionPrueba" e imprimir el resultado de la suma de DOS números Enteros.
		System.out.println("2.- La suma es: " + PruebaExamen.operacionPrueba(10, 10)); // <------ 20	

		/// 6.- Invocar "mensajeHola".
		pe.mensajeHola(); // <------ Hola mi nombre es: Fernando Mercado

		/// 7.- Invocar "mensajeHola" y enviar cualquier String.
		pe.mensajeHola("3.- Fher"); // <------ La cadena es: 3.- Fher

		/// 8.- Asignar una Expresión lambda a la instancia "pe", en la cual se imprima la suma del primer argumento con la multiplicación del segundo argumento por el tercer argumento.
		pe = (uno, dos, tres) -> System.out.println("4.- El resultado es : " + (uno + (dos * tres)));
		/// 9.- Con "pe" invocar a "operacionPrueba", pasando como primer argumento cualquier número Entero, pasando como segundo argumento el resultado obtenido de invocar "operacionPrueba" que recibe dos Enteros (los que tú desees) y pasando como tercer argumento el resultado obtenido de invocar "operacionPrueba" que recibe dos Enteros (los que tú desees).
		pe.operacionPrueba(5, PruebaExamen.operacionPrueba(1, 1), PruebaExamen.operacionPrueba(2, 2));
		// 5 + (1+1 * 2+2)
		// 5 + (2 * 4)
		// 5 + 8 = 13
		// 4.- 13

		/// 12.- Regresando al punto de entrada "MAIN", invocar al método "miMetodo" pasando como argumento a "pe".
		Principal.miMetodo(pe); 
		// 5 + (2+2 * 3+3)
		// 5 + (4 * 6)
		// 5 + 24 = 29		
		// 4.- 29

		/// 13.- Invocar al método "miMetodo", pasando como argumento una Expresión lambda, en la cual se imprima la suma del primer argumento con la división del segundo argumento entre el tercer argumento.
		Principal.miMetodo((uno, dos, tres) -> System.out.println("5.- El resultado es : " + (uno + (dos / tres))));		
		// 5 + (2+2 / 3+3)
		// 5 + (4 / 6)
		// 5 + 0 = 5
		// 5.- 5

		/// 16.- Regresando al punto de entrada "MAIN", asignar una Expresión lambda a la instancia "pe", en la cual se imprima la suma del primer argumento con la división del segundo argumento entre el tercer argumento (DEBE IMPRIMIR LOS DECIMALES). <-- AQUÍ LO DEBES HACER (DECIMALES)
		pe = (uno, dos, tres) -> System.out.println("6.- El resultado es : " + (uno + ((float)dos / tres)));

		/// 17.- Invocar al método "miMetodo" y enviar como primer argumento a "pe", y tres Enteros cualesquiera.
		Principal.miMetodo(pe, 5, 1, 2);
		// 5 + (1+1 / 2+2)
		// 5 + (2 / 4)
		// 5 + 0.5 = 5.5
		// 6.- 5.5

	} /// <---- END OF MAIN

	/// 10.- Dentro la clase "Principal" (NO en el punto de Entrada MAIN), crear un método estático y privado de nombre "miMetodo", el cual no retorna NADA y recibe como argumento un Objeto de tipo "PruebaExamen".
	private static void miMetodo(PruebaExamen obj){
		/// 11.- Dentro del método "miMetodo" (del paso 10), repetir lo mismo que el punto "9", pero con el objeto que se recibe como argumento.
		obj.operacionPrueba(5,
			PruebaExamen.operacionPrueba(2, 2),
			PruebaExamen.operacionPrueba(3, 3));
	}

	/// 14.- Dentro la clase "Principal" (NO en el punto de Entrada MAIN), crear un método estático y privado de nombre "miMetodo", el cual no retorna NADA y recibe como argumento un Objeto de tipo "PruebaExamen", y tres valores de tipo Entero (separados).
	private static void miMetodo(PruebaExamen obj, int val1, int val2, int val3){
		/// 15.- Dentro del método "miMetodo" (creado en el punto 14), utilizar el objeto recibido para invocar a "operacionPrueba", pasando como primer argumento el primer valor Entero recibido, pasando como segundo argumento el resultado obtenido de invocar "operacionPrueba" que recibe dos Enteros (el segundo valor recibido) y pasando como tercer argumento el resultado obtenido de invocar "operacionPrueba" que recibe dos Enteros (el tercer valor recibido).
		obj.operacionPrueba(val1,
			PruebaExamen.operacionPrueba(val2, val2), 
			PruebaExamen.operacionPrueba(val3, val3));
	}
}




