#include <iostream>

int main() {
    // Define the number of notebooks and pens needed
    int numNotebooks = 15;
    int numPens = 20;

    // Define the cost of each notebook and pen
    double notebookCost = 2.25;
    double penCost = 0.75;

    // Calculate the total cost of notebooks
    double totalNotebookCost = numNotebooks * notebookCost;

    // Calculate the total cost of pens
    double totalPenCost = numPens * penCost;

    // Calculate the total cost of all supplies
    double totalCost = totalNotebookCost + totalPenCost;

    // Display the results
    std::cout << "Total cost of notebooks: Rs. " << totalNotebookCost << std::endl;
    std::cout << "Total cost of pens: Rs. " << totalPenCost << std::endl;
    std::cout << "Total cost of all supplies: Rs. " << totalCost << std::endl;

return 0;
}
