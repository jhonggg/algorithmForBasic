#include <iostream>
#include <algorithm>
#define MAX 10

using namespace std;

class Student {
public:
	string name;
	int score;
	Student(string name, int score) {
		this->name = name;
		this->score = score;
	}
	// 정렬 기준은 '점수가 작은 순서'
	bool operator <(Student &student) {
		return this->score < student.score;
	}
};


int main(void) {
	Student students[] = {
		Student("Kevin", 90),
		Student("Tommy", 70),
		Student("Hong", 80),
		Student("James", 77),
		Student("Johnson", 68)
	};
	sort(students, students + 5);
	for (int i = 0; i < 5; i++) {
		cout << students[i].name << ' ';
	}
}