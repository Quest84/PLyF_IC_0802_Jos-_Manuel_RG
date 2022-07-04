trait Operaciones {
    fn imprimeOperacion(&self) -> ();
}

fn main() {

    //fn operacion(i: i32, j: i32) -> i32 { i + j }

    let op = Operaciones;

    op = |i, j| println!("{}", i + j);


    fn miMetodo( op: Operaciones, n1: i32, n2: i32 ) {
        op.imprimeOperacion( n1, n2 );
    } 
        

    // Expresión Lambda
    let inf = | i, j | -> i32 {i + j};

    //let lambda = function;
    //let lambda = (i, j) -> function(i, j); 

    let i = 1;
    let j = 2;

    //println!("Function: {}", function(i, j));
    println!("Inf: {}", inf(i, j));
    /*println!("Lambda: {}", lambda(2,3));*/

}
    
