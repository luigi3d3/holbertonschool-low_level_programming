void swap_int(int *a, int *b)
{
	int *aux = *a;
	*a = *b;
	*b = aux;
}
