#include <iostream>

class Student {
public:
    int *marks;
    int size;

    // Default constructor
    Student(int size) {
        this->size = size;
        this->marks = new int[size];
        for (int i = 0; i < size; i++) {
            this->marks[i] = 0; // Initialize to default value
        }
    }

    // Copy constructor
    Student(const Student &other) {
        this->size = other.size;
        this->marks = new int[this->size];
        for (int i = 0; i < this->size; i++) {
            this->marks[i] = other.marks[i];
        }
    }

    // Destructor
    ~Student() {
        delete[] this->marks;
    }
};

int main() {
    Student student1(5);
    student1.marks[0] = 90;
    student1.marks[1] = 80;
    student1.marks[2] = 70;
    student1.marks[3] = 60;
    student1.marks[4] = 50;

    Student student2 = student1; // Use copy constructor

    // Modify student2 to verify deep copy
    student2.marks[0] = 100;

    // Display values
    std::cout << "Student 1 marks: ";
    for (int i = 0; i < student1.size; i++) {
        std::cout << student1.marks[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Student 2 marks: ";
    for (int i = 0; i < student2.size; i++) {
        std::cout << student2.marks[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}