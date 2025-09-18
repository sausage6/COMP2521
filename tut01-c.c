// Piece 1

int main(void) {
	stackInt();
}

void stackInt(void) {
	int a = 5;
}

// Piece 2

int main(void) {
	heapInt();
}

void heapInt(void) {
	int *a = malloc(sizeof(int));
	*a = 5;
}
