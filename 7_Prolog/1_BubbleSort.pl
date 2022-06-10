swap([X, Y | Resto], [Y, X | Resto]) :- X > Y, !.
swap([Z | Resto], [Z | RestoAux]) :- swap(Resto, RestoAux).

bubbleSort(Lista, ListaOrdenada) :-
    swap(Lista, ListaAux),
    !,
    bubbleSort(ListaAux, ListaOrdenada).
bubbleSort(Lista, Lista).
