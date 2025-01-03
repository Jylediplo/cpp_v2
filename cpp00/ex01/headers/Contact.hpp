#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <iomanip>
#include <limits>

class Contact 
{
    private:
    int         id;
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phone;
    std::string secret;
    public:
            Contact fill_form(int *i);
            void    display_index(Contact contact);
            void    all_infos(Contact contact);
};

////////////////////////////

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        void    add_contact(Contact contact, PhoneBook *phonebook, int *i);
        void    show_list(PhoneBook *phonebook, int *i);    
        void    display_all_infos(PhoneBook *phonebook, int index);
}; 

#endif