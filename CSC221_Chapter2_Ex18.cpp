// CSC221_Chapter2_Ex18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// This program displays the approximate number of customers surveyed who:
// 1) Purchase one or more energy drinks per week
// 2) Preferring citrus-flavored energy drinks
//
// Course: CSC 221
// Programmer: Aslihan Celik
// Date: 09/26/2024
// Assignment: Chapter 2 Exercise 18

#include <iostream>
using namespace std;

int main()
{
    // Constant for total number of customers surveyed
    const int TOTAL_CUSTOMER = 16500;

    // Constants for the percentage of surveyed people
    const double PERCENTAGE_ENERGY_DRINK = 0.15;  // Percentage purchasing one or more energy drinks per week
    const double PERCENTAGE_CITRUS_FLAVOR = 0.58; // Percentage of energy drink purchasers preferring citrus flavor

    // Variables to hold the calculated number of customers
    int energyDrinkCustomer, citrusflavorCustomer;

    // Calculating the number of customers purchasing energy drinks
    energyDrinkCustomer = TOTAL_CUSTOMER * PERCENTAGE_ENERGY_DRINK;

    // Calculating the number of customers preferring citrus-flavored energy drinks
    citrusflavorCustomer = energyDrinkCustomer * PERCENTAGE_CITRUS_FLAVOR;

    //Displaying the results
    cout << "The approximate number of customers in the survey:  \n";
    cout << " 1. Purchasing one or more energy drinks per week: " << energyDrinkCustomer << endl;
    cout << " 2. Preferring citrus-flavored energy drinks: " << citrusflavorCustomer << endl;

    return 0;
}