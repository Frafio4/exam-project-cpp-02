Verifica se due nodi s e t di un grafo orientato sono reciprocamente raggiungibili, ovvero se esiste sia un cammino da s a t sia un cammino da t a s.

La ricerca del cammino viene effettuata tramite una visita DFS (Depth First Search) ricorsiva. Una funzione helper esplora ricorsivamente i nodi adiacenti, evitando di visitare più volte lo stesso nodo tramite un vettore dei visitati.

La funzione principale esegue due ricerche distinte:

una da s a t;
una da t a s.
Restituisce true solo se entrambe hanno successo, altrimenti restituisce false.
