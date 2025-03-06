#include <iostream>
#include <string>
using namespace std;

const int MAX_EMPLOYEES = 5;

struct Employee {
    string name, role, city, language;
    double salary, rating;
    bool isAvailable;
};

void displayAllEmployees(Employee employees[], int size) {
    cout << "\nCompany Data:\n";
    for (int i = 0; i < size; i++) {
        cout << "Name: " << employees[i].name << ", Role: " << employees[i].role
             << ", City: " << employees[i].city << ", Language: " << employees[i].language
             << ", Salary: " << employees[i].salary << ", Rating: " << employees[i].rating
             << ", Available: " << (employees[i].isAvailable ? "Yes" : "No") << "\n";
    }
}

void displayHRData(Employee employees[], int size) {
    cout << "\nHR Data:\n";
    for (int i = 0; i < size; i++) {
        if (employees[i].role == "HR") {
            cout << "Name: " << employees[i].name << ", City: " << employees[i].city << "\n";
        }
    }
}

void displayEmployeeData(Employee employees[], int size) {
    cout << "\nEmployee Data:\n";
    for (int i = 0; i < size; i++) {
        if (employees[i].role != "HR") {
            cout << "Name: " << employees[i].name << ", City: " << employees[i].city << "\n";
        }
    }
}

void sortBySalary(Employee employees[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (employees[i].salary < employees[j].salary) {
                swap(employees[i], employees[j]);
            }
        }
    }
}

void sortByAvailability(Employee employees[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (!employees[i].isAvailable && employees[j].isAvailable) {
                swap(employees[i], employees[j]);
            }
        }
    }
}

void sortByLanguage(Employee employees[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (employees[i].language > employees[j].language) {
                swap(employees[i], employees[j]);
            }
        }
    }
}

void sortByName(Employee employees[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (employees[i].name > employees[j].name) {
                swap(employees[i], employees[j]);
            }
        }
    }
}

void sortByRating(Employee employees[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (employees[i].rating < employees[j].rating) {
                swap(employees[i], employees[j]);
            }
        }
    }
}

void printCompanyByCity(Employee employees[], int size, const string& city) {
    cout << "\nEmployees in " << city << ":\n";
    for (int i = 0; i < size; i++) {
        if (employees[i].city == city) {
            cout << "Name: " << employees[i].name << ", Role: " << employees[i].role << "\n";
        }
    }
}

int main() {
    Employee employees[MAX_EMPLOYEES] = {
        {"Jinal", "Developer", "Surat", "C++", 75000, 4.5, true},
        {"Krina", "HR", "Vadodara", "NA", 50000, 4.0, true},
        {"Krish", "Tester", "Ahemdabad", "Python", 60000, 4.3, false},
        {"Swastik", "HR", "Surat", "NA", 55000, 4.1, true},
        {"Sushil", "Manager", "Pune", "Java", 85000, 4.8, true}
    };

    int choice;
    string city;
    do {
        cout << "\n1. Display All Employees\n2. Display HR Data\n3. Display Employee Data\n4. Sort by Salary\n5. Sort by Availability\n6. Sort by Language\n7. Sort by Name\n8. Sort by Rating\n9. Print Company by City\n0. Exit\nChoose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayAllEmployees(employees, MAX_EMPLOYEES);
                break;
            case 2:
                displayHRData(employees, MAX_EMPLOYEES);
                break;
            case 3:
                displayEmployeeData(employees, MAX_EMPLOYEES);
                break;
            case 4:
                sortBySalary(employees, MAX_EMPLOYEES);
                cout << "Sorted by Salary:\n";
                displayAllEmployees(employees, MAX_EMPLOYEES);
                break;
            case 5:
                sortByAvailability(employees, MAX_EMPLOYEES);
                cout << "Sorted by Availability:\n";
                displayAllEmployees(employees, MAX_EMPLOYEES);
                break;
            case 6:
                sortByLanguage(employees, MAX_EMPLOYEES);
                cout << "Sorted by Language:\n";
                displayAllEmployees(employees, MAX_EMPLOYEES);
                break;
            case 7:
                sortByName(employees, MAX_EMPLOYEES);
                cout << "Sorted by Name:\n";
                displayAllEmployees(employees, MAX_EMPLOYEES);
                break;
            case 8:
                sortByRating(employees, MAX_EMPLOYEES);
                cout << "Sorted by Rating:\n";
                displayAllEmployees(employees, MAX_EMPLOYEES);
                break;
            case 9:
                cout << "Enter city: ";
                cin >> city;
                printCompanyByCity(employees, MAX_EMPLOYEES, city);
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
