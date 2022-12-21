#include <iostream>
#include "h.h"
int main() {
    SportShoesStore a = SportShoesStore();
    a.assortment[0] = Sneakers("Nike", 36, "White", "Plastic", 2399.9, 310, 34);
    a.assortment[1] = Sneakers("Bibi", 37, "Blue", "Plastic", 2499.9, 250, 99);
    a.assortment[2] = Sneakers("Adidas", 43, "Black", "Plastic", 2999.9, 350, 55);
    a.assortment[3] = Sneakers("Fop", 39, "White", "Plastic", 6999.9, 201, 150);
    a.assortment[4] = Sneakers("Nirt", 38, "Pink", "Metal", 8999.9, 99, 10);

    a.priceSorting();
    a.numberOfSalesSorting();

    return 0;
}