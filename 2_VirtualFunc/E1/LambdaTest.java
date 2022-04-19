public class LambdaTest{
    public static void main( String[] args ) {

        // Expresión lambda ==> representa un objeto de una interfaz funcional
        FunctionTest ft = () -> System.out.println( "Hola Mundo" );
        // Implementación del método abstracto "saludar()"
        // de la interfaz funcional

        //ft.saludar();
    
        /* Otra implementación */
        LambdaTest objeto = new LambdaTest();
        objeto.miMetodo(ft);
    }

    public void miMetodo( FunctionTest parametro ) {
        parametro.saludar();
    }
}
