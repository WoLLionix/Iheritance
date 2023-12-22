#include <iostream>
#include <string>

class Person 
{
protected:
    std::string uniqueId; // унікальний ідентифікатор
    std::string firstName;
    std::string lastName;
    std::string passportNumber;
    std::string birthDate;
    std::string additionalInfo;

public:
    // Конструктор класу
    Person(std::string id, std::string first, std::string last, std::string passport, std::string birth, std::string info)
        : uniqueId(id), firstName(first), lastName(last), passportNumber(passport), birthDate(birth), additionalInfo(info) {}

    // Публічні методи для отримання доступу на читання та зміну полів
    std::string getUniqueId() const { return uniqueId; }
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getPassportNumber() const { return passportNumber; }
    std::string getBirthDate() const { return birthDate; }
    std::string getAdditionalInfo() const { return additionalInfo; }

    void setFirstName(std::string first) { firstName = first; }
    void setLastName(std::string last) { lastName = last; }
    void setPassportNumber(std::string passport) { passportNumber = passport; }
    void setBirthDate(std::string birth) { birthDate = birth; }
    void setAdditionalInfo(std::string info) { additionalInfo = info; }
};

class Student : public Person {
private:
    std::string educationalInstitution;
    std::string specialization;
    std::string group;

public:
    // Конструктор класу Student, який викликає конструктор класу Person
    Student(std::string id, std::string first, std::string last, std::string passport, std::string birth, std::string info, std::string institution, std::string spec, std::string studentGroup)
        : Person(id, first, last, passport, birth, info), educationalInstitution(institution), specialization(spec), group(studentGroup) {}

    // Публічні методи для отримання доступу на читання та зміну полів
    std::string getEducationalInstitution() const { return educationalInstitution; }
    std::string getSpecialization() const { return specialization; }
    std::string getGroup() const { return group; }

    void setEducationalInstitution(std::string institution) { educationalInstitution = institution; }
    void setSpecialization(std::string spec) { specialization = spec; }
    void setGroup(std::string studentGroup) { group = studentGroup; }
};

int main() {
    // Створення об'єкта класу Student
    Student student("12345", "Viktor", "Duduk", "AB123456", "2000-01-01", "Some info", "University", "Computer Science", "CS101");

    // Виведення інформації про студента на екран
    std::cout << "Student Information:" << std::endl;
    std::cout << "ID: " << student.getUniqueId() << std::endl;
    std::cout << "Name: " << student.getFirstName() << " " << student.getLastName() << std::endl;
    std::cout << "Passport Number: " << student.getPassportNumber() << std::endl;
    std::cout << "Birth Date: " << student.getBirthDate() << std::endl;
    std::cout << "Additional Info: " << student.getAdditionalInfo() << std::endl;
    std::cout << "Educational Institution: " << student.getEducationalInstitution() << std::endl;
    std::cout << "Specialization: " << student.getSpecialization() << std::endl;
    std::cout << "Group: " << student.getGroup() << std::endl;

    return 0;
}
