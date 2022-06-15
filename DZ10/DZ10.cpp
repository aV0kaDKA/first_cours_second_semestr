#include "Header.h"
int main() {
	setlocale(0, "");
	Human human("Борисова", "Елена", "Ивановна", 50);
	Student student("Гуртовая", "Анна", "Алекссевна", 19, 1);
	Boss boss("Алексей", "Гуртовой", "Константинович", 50, 200);
	human.print();
	student.print();
	boss.print();
}