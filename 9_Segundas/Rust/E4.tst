use std::fmt;

// Este bloque vicula a la librería libm
#[link(name = "m")]

extern {
    // Interfaz foranea funcional FFI
    fn imprimeOperacion(i: i32, j: i32) -> i32;
    // Lo mismo que 
    // fn imprimeOperacion( i, j ) -> i+j;
    // o
    // fn imprimeOperacion( i, j ) -> i32;
}
