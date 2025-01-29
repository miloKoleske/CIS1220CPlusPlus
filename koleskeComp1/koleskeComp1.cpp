// Milo Koleske
// mkoleske@cnm.edu
// KoleskeP1

#include <iostream>
using namespace std;
#include <cmath>//use math
#include <iomanip>


int main()
{

    // In main, declare variables you will need and declare constants for:
    const double pi{ 3.14159 }; //declare constant double inside of main function
    const double area_per_slice{ 14.125 };
    const double slice_per_person{ 4 };
    const double price_per_inch{ 0.65 };
    const double sales_tax_percent{ 7.875 };

    // Display your header using cout to write the information in program requirements
    cout << "Programmer name: Milo Koleske\n";
    cout << "Program title: KoleskeP1\n\n";
    cout << "Program objective: Calculate the number of pizzas to order for a party based on number of attendants and how much each person eats on average. Print how much the pizzas will cost.\n";
    cout << "-------------------------------------------------------------------\n\n";

    // Calculate the number of slices in one pizza:  
    cout << "Which pizza size do you prefer? Your options are 12, 14, or 16\n";
    double pizza_size; //declaring a variable for the pizza size choice
    cin >> pizza_size; // instantiating user's input = pizza size choice

    //calculate surface area of one pizza
    double diameter; // declaring a variable for the pizza's diameter
    diameter = pizza_size; // instantiating diameter to pizza size chosen by guest
    double radius = diameter / 2; // radius is half of diameter
    double area = pi * radius * radius; //formula to calculate surface area
    cout << "When pizza size is " << pizza_size << "inches, the surface area of the pizza is " << area << " inches\n\n";
    int slices_per_pizza = area / area_per_slice; //declare and instantiate slices per pizza = (area per slice/total area) * 360
    cout << "A pizza of this size has " << slices_per_pizza << " slices\n";

    // calculate number of pizzas to order
    cout << "How many people will be invited to the party?\n";
    int num_of_guests; //declaring a variable for the number of guests
    cin >> num_of_guests; // user's input = number of guests
    double no_of_pizzas_decimal = (num_of_guests * slice_per_person) / slices_per_pizza;
    int no_of_pizzas = ceil(no_of_pizzas_decimal);
    cout << "You will need to buy " << no_of_pizzas << " pizzas\n";

    // Calculate the cost of the pizzas for the party:
    double pizza_base_price = (price_per_inch * area) * no_of_pizzas; //declaring and instantiating pizza base price
    double pizza_tax_price = pizza_base_price * (sales_tax_percent / 100); //calculating pizza price with sales tax
    double rounded_pizza_final_price{ 0 }; // instantiate
    rounded_pizza_final_price = (ceil((pizza_tax_price * 100)) / 100);

    //Display the information you have calculated:
    cout << "\n\nYou invited " << num_of_guests << " to your party.\n\n";
    cout << "Each pizza of " << pizza_size << "inches has " << slices_per_pizza << " slices on it.\n\n";
    cout << "You need to order " << no_of_pizzas << " pizzas to feed everyone.";
    cout << "That's gonna cost you $" << rounded_pizza_final_price << ".\n\n";
    cout << "Bye! Have a fun party! \n\n";

    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu