//рекурсивная функция подсчета суммы первых n элементов
int mult(int num) {
	if(num == 0) return 0;
	return num + mult(num - 1);
}

