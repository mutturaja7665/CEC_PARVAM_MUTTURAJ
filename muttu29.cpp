#include <iostream>
#include <vector>
#include <memory>

using namespace std;

// Base Booking Class
class Booking {
protected:
    string customerName;
    int numberOfSeats;
public:
    Booking(const string& name, int seats) : customerName(name), numberOfSeats(seats) {}
    virtual void showDetails() const = 0;
    virtual string getType() const = 0;
    virtual ~Booking() = default;
};

// Flight Booking
class FlightBooking : public Booking {
    string flightNumber;
public:
    FlightBooking(const string& name, int seats, const string& flightNo)
        : Booking(name, seats), flightNumber(flightNo) {}

    void showDetails() const override {
        cout << "[Flight Booking]\n"
             << "Name: " << customerName << "\nSeats: " << numberOfSeats
             << "\nFlight Number: " << flightNumber << "\n\n";
    }

    string getType() const override {
        return "Flight";
    }
};

// Bus Booking
class BusBooking : public Booking {
    string busRoute;
public:
    BusBooking(const string& name, int seats, const string& route)
        : Booking(name, seats), busRoute(route) {}

    void showDetails() const override {
        cout << "[Bus Booking]\n"
             << "Name: " << customerName << "\nSeats: " << numberOfSeats
             << "\nRoute: " << busRoute << "\n\n";
    }

    string getType() const override {
        return "Bus";
    }
};

// Group Booking
class GroupBooking : public Booking {
    vector<string> groupMembers;
public:
    GroupBooking(const string& name, const vector<string>& members)
        : Booking(name, members.size()), groupMembers(members) {}

    void showDetails() const override {
        cout << "[Group Booking]\n"
             << "Group Leader: " << customerName << "\nTotal Members: " << numberOfSeats << "\nMembers:\n";
        for (const auto& member : groupMembers) {
            cout << " - " << member << '\n';
        }
        cout << "\n";
    }

    string getType() const override {
        return "Group";
    }
};

// Booking Manager
class BookingManager {
    vector<shared_ptr<Booking>> bookings;
public:
    void addBooking(shared_ptr<Booking> booking) {
        bookings.push_back(booking);
    }

    void showAllBookings() const {
        cout << "\n--- All Bookings ---\n";
        for (const auto& booking : bookings) {
            booking->showDetails();
        }
    }
};

// Main Function
int main() {
    BookingManager manager;

    // Example bookings
    manager.addBooking(make_shared<FlightBooking>("Alice", 1, "FL123"));
    manager.addBooking(make_shared<BusBooking>("Bob", 2, "Route66"));
    manager.addBooking(make_shared<GroupBooking>("Charlie", vector<string>{"Charlie", "Dave", "Eve"}));

    // Show all bookings
    manager.showAllBookings();

    return 0;
}