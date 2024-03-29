#include "FD_Doctor_View.h"
#include <iostream>
#include <iomanip>

void FD_Doctor_View::show_list_view(const std::vector<std::map<std::string, std::string>> &data)
{
    show_header();
    show_list_header();
    if (data.size() == 0)
    {
        show_list_empty_message();
    }
    else
    {
        show_column_header();
    }
    show_list_contents(data);
    show_separator();
    show_menu();
};
void FD_Doctor_View::show_list_view_data(const std::vector<std::map<std::string, std::string>> &data)
{
    show_header();
    show_list_header();
    if (data.size() == 0)
    {
        show_list_empty_message();
    }
    else
    {
        show_column_header();
    }
    show_list_contents(data);
    show_separator();
};

void FD_Doctor_View::show_list_empty_message()
{
    std::cout << "No doctors stored!" << '\n';
};
void FD_Doctor_View::show_list_header()
{
    std::cout << "Doctor List:" << '\n';
};
void FD_Doctor_View::show_column_header()
{
    std::cout << std::left << std::setfill(' ') << std::setw(10) << "ID";
    std::cout << " - ";
    std::cout << std::left << std::setfill(' ') << std::setw(20) << "First Name";
    std::cout << " - ";
    std::cout << std::left << std::setfill(' ') << std::setw(20) << "Last Name";
    std::cout << " - ";
    std::cout << std::left << std::setfill(' ') << std::setw(20) << "Doctor Specialties";
    std::cout << '\n';
};
void FD_Doctor_View::show_list_contents(const std::vector<std::map<std::string, std::string>> &data)
{
    for (auto current_element : data)
    {
        std::cout << std::left << std::setfill(' ') << std::setw(10) << current_element["id"];
        std::cout << " - ";
        std::cout << std::left << std::setfill(' ') << std::setw(20) << current_element["first_name"];
        std::cout << " - ";
        std::cout << std::left << std::setfill(' ') << std::setw(20) << current_element["last_name"];
        std::cout << " - ";
        std::cout << std::left << std::setfill(' ') << std::setw(20) << current_element["doctors_specialties"];
        std::cout << '\n';
    };
};
