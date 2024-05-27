#include <iostream>

class Student
{
    public:
        int16_t num_of_exams = 0;
        int32_t id_number;
        std::string name;
        Student(std::string par_name, int32_t par_id_number);
        void print() const;
        void update_bank_account(int64_t par_bank_account);
    private:
        int64_t bank_account = 0;
};

Student::Student(std::string par_name, int32_t par_id_number) : name{par_name}
{
    id_number = par_id_number;
}
void Student::print() const
{
    std::cout << "Name: " << name << "; ID: " << id_number << std::endl;
}


auto main() -> int
{
    std::cout << "Hello, World!" << std::endl;
}