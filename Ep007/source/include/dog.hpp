#include <string>
#include <iostream>

class Dog
{
    public:
    explicit Dog(std::string name);
    Dog() = default;
    ~Dog();

    std::string get_name() const
    {
        return dog_name;
    }

    void set_name(std::string &name)
    {
        dog_name = name;
    }

    void print_info() const
    {
        std::cout << "Dog [ name: " << dog_name << "]" << std::endl;
    }

private:
    std::string dog_name{"Puffy"};
};