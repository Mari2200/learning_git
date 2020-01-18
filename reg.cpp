//рекурсивная функция подсчета суммы первых n элементов
int sum(int num) {
	if(num == 0) return 0;
	return num + sum(num - 1);
}

