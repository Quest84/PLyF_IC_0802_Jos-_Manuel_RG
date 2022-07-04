const imprimeOperacion = (a, b) => console.log(a + b);

const sum = (a, b) => a + b;
const mult = (a, b) => a * b;
const minus = (a, b) => a - b;

const resultSum = sum(1, 2);
const resultMult = mult(2, 3);
const resultMinus = minus(3, 4);

const sumAgain = (a, b, sum) => sum(a, b);
const resultSumAgain = sumAgain(1, 2, sum);

console.log( resultSum );
console.log( resultMult );
console.log( resultMinus );
console.log( sumAgain(1, 2, sum) );
