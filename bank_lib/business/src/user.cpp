#include "../include/business/user.h"

int User::get_user_count()
{
    return user_count;
}

User::User()
{
    user_count++;
    std::cout << "Contstructor";
}
User::User(std::string first_name, std::string last_name)
{
    this->first_name = first_name;
    this->last_name = last_name;
    user_count++;
}

User User::create(){
    
}

User::~User()
{
    std::cout << "Destructor";
    user_count--;
}


// void output_status(User user);
// std::ostream &operator<<(std::ostream &output, User user);
// std::istream &operator>>(std::istream &input, User &user);