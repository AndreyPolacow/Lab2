﻿#include <iostream>

import student_1bib21097.Lab2.Variant15.Task1;
import student_1bib21097.Lab2.Variant15.Task2;
import student_1bib21097.Lab2.Variant15.Task3;
import student_1bib21097.Lab2.Variant15.Task4;
import student_1bib21097.Lab2.Variant15.Task5;


int main()
{
    setlocale(LC_ALL, "RUSSIAN"); 
    int repeat;
    do {
        int option;
        ;
        std::cout << "Выберите опцию 1-5: ";
        std::cin >> option;
        switch (option) {
        case 1: {

            std::cout << "Выбраны функции 1 задания: ";
            RBPO::Lab2::Variant15::Task1::Function1();
            RBPO::Lab2::Variant15::Task1::Function2();
            int i;
            double result;
            std::cout << "Введите значения i: ";
            std::cin >> i;
            result = RBPO::Lab2::Variant15::Task1::FunctionA(i);
            std::cout << "Результат  a(i) = " << result << std::endl;
            RBPO::Lab2::Variant15::Task1::Function3();
            RBPO::Lab2::Variant15::Task1::Function4();
            break;
        }
        case 2: {

            std::cout << "Выбраны функции 2 задания: ";
            RBPO::Lab2::Variant15::Task2::Function1();
            RBPO::Lab2::Variant15::Task2::Function2();
            RBPO::Lab2::Variant15::Task2::Function3();
            RBPO::Lab2::Variant15::Task2::Function4();
            break;
        }
        case 3: {

            std::cout << "Выбраны функции 3 задания: ";
            RBPO::Lab2::Variant15::Task3::Function1();
            RBPO::Lab2::Variant15::Task3::Function2();
            RBPO::Lab2::Variant15::Task3::Function3();
            RBPO::Lab2::Variant15::Task3::Function4();
            break;
        }
        case 4: {

            std::cout << "Выбраны функции 4 задания: ";
            RBPO::Lab2::Variant15::Task4::Function1();
            RBPO::Lab2::Variant15::Task4::Function2();
            RBPO::Lab2::Variant15::Task4::Function3();
            RBPO::Lab2::Variant15::Task4::Function4();
            break;
        }
        case 5: {

            std::cout << "Выбраны функции 5 задания: ";
            RBPO::Lab2::Variant15::Task5::Function1();
            RBPO::Lab2::Variant15::Task5::Function2();
            RBPO::Lab2::Variant15::Task5::Function3();
            RBPO::Lab2::Variant15::Task5::Function4();
            break;
        }
        default:
            std::cout << "Введите другую опцию!\n";
        }
        std::cout << "Для повторения введите 1: ";
        std::cin >> repeat;
    } while (repeat == 1);
    
    return 0;
}
