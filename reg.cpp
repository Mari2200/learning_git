//рекурсивная функция подсчета суммы первых n элементов
int div(int num) {
	if(num == 0) return 0;
	return num + div(num - 1);
	//создание конфликта
}

