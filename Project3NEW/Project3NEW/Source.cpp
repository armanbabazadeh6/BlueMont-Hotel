#include <iostream>
using namespace std;
#include <iomanip>
#include <string>

/*
 * Class: CMSC140 CRN 20367
 * Instructor: Prof. Tsai
 * Project 3
 * Description: write a program that calculates the occupancy rate
   and the total hotel income for one night and displays this
   information as well as some other information described below.
 * Due Date: 10/31/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Full Name here: Arman Babazadeh
*/

	int main() {

		string hotelLocation;

		string programmerName = "Arman Babazadeh";

		string dueDate = "10/31/2022";

		int hotelFloor = 0;



		int floorRooms1 = 0;
		double singleRooms1 = 0;
		double doubleRooms1 = 0;         // I structured each floor with their own section. This is variables for floor 1.
		double kingRooms1 = 0;
		double suiteRooms1 = 0;


		int floorRooms2 = 0;
		double singleRooms2 = 0;
		double doubleRooms2 = 0;         // I structured each floor with their own section. This is variables for floor 2.
		double kingRooms2 = 0;
		double suiteRooms2 = 0;


		int floorRooms3 = 0;
		double singleRooms3 = 0;
		double doubleRooms3 = 0;          // I structured each floor with their own section. This is variables for floor 3.
		double kingRooms3 = 0;
		double suiteRooms3 = 0;



		int floorRooms4 = 0;
		double singleRooms4 = 0;
		double doubleRooms4 = 0;         //   // I structured each floor with their own section. This is variables for floor 4.
		double kingRooms4 = 0;
		double suiteRooms4 = 0;


		int floorRooms5 = 0;
		double singleRooms5 = 0;
		double doubleRooms5 = 0;       //   // I structured each floor with their own section. This is variables for floor 5.
		double kingRooms5 = 0;
		double suiteRooms5 = 0;



		int totalAmountOfRooms1 = 0;
		int totalAmountOfRooms2 = 0;
		int totalAmountOfRooms3 = 0;   // This is the total amount of rooms for each section
		int totalAmountOfRooms4 = 0;
		int totalAmountOfRooms5 = 0;


		int totalNumberOfRooms = 0;


		double singleRoomIncome = 0;
		double doubleRoomIncome = 0;     // This is for each section of singleroom, doubleroom, kingroom, suiteroom. Each income.
		double kingRoomIncome = 0;
		double suiteRoomIncome = 0;

		double totalHotelIncome = 0;  // This is the final amount for HotelIncome

		int totalNumberOfOccupiedRooms = 0; // Total number of OccupiedRooms

		int totalNumberOfUnOccupiedRooms = 0; // Total number of Unoccupied rooms

		double occupancyRate = 0.0;  // This is the occupancy rate

		double totalNumberOfFloorRooms = 0;

		int leastAmountOfRooms;

		int leastAmountOfRoomsFloor;

		const double occupancyRateCounter = 60.0; // This is the counter if occupancy rate is less than occupacyRateCounter which is 60% I print a statement.


		for (int i = 0; i < 70; i++) {
			cout << "=";
		}

		cout << endl;

		cout << "                           BlueMont Hotel " << endl;   // This is all for the for the equal signs instead of printing them out with Cout


		for (int j = 0; j < 70; j++) {
			cout << "=";
		}


		cout << endl;

		cout << "Enter the location of this hotel chain: " << hotelLocation;
		getline(cin, hotelLocation);                 // Input for hotelLocation and output



		do {

			cout << "Enter total number of floors of the hotel: ";
			cin >> hotelFloor;
			if (hotelFloor < 1 || hotelFloor > 5) {
				cout << "Number of floors should be between 1 and 5 !! please try again. " << endl;               // Input for how many floor rooms that have to be between 1 and 5
			}

		} while (hotelFloor < 1 || hotelFloor > 5);
		
		for (int i = 1; i <= hotelFloor; i++) { // I used a forloop to create index i which will increment up 1 if it is less than hotelFloor the users input.


			cout << endl;
			cout << endl;

			if (i == 1) {                     // For Floor 1
				do {
					cout << "Enter total number of rooms in the " << i << "th " << "Floor: ";        // This takes the input for how many floors between 1 and 5.
					cin >> floorRooms1;
					if (floorRooms1 < 1 || floorRooms1 > 30) {
						cout << "Number of Rooms should be between 1 and 30 !! please try again. " << endl; 
					}
				} while (floorRooms1 < 1 || floorRooms1 > 30);
		
				do {
					if (totalAmountOfRooms1 > floorRooms1) {
						cout << endl;
						cout << "Enter total number of rooms in the " << i << "th " << "Floor: ";
						cin >> floorRooms1;
					}
					cout << "How many SINGLE rooms are occupied in the " << i << "th " << "Floor: ";  
					cin >> singleRooms1;
					cout << "How many DOUBLE rooms are occupied in the " << i << "th " << "Floor: ";   // This section is a do while loop in the for loop which will ask for hotel single, double, king, and suite. And if the total of all rooms are above how many rooms there is it will loop again.
					cin >> doubleRooms1;
					cout << "How many KING rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> kingRooms1;
					cout << "How many SUITE rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> suiteRooms1;
					totalAmountOfRooms1 = (singleRooms1 + doubleRooms1 + kingRooms1 + suiteRooms1);

					if (totalAmountOfRooms1 > floorRooms1) {
						cout << "Total number of occipied rooms exceeds the total number of rooms on this floor. Please try again!! ";
						cout << endl;
					}

					leastAmountOfRooms = floorRooms1;

					leastAmountOfRoomsFloor = i;    // I created this to check at the end which floor has the least amount of rooms.

				} while (totalAmountOfRooms1 > floorRooms1);

			}

			//----------------------------------------------------------------------------------------------------------------------------

			if (i == 2) {                     // For Floor 2
				do {
					cout << "Enter total number of rooms in the " << i << "th " << "Floor: ";
					cin >> floorRooms2;
					if (floorRooms2 < 1 || floorRooms2 > 30) {
						cout << "Number of Rooms should be between 1 and 30 !! please try again. " << endl;
					}
				} while (floorRooms2 < 1 || floorRooms2 > 30);
				do {
					if (totalAmountOfRooms2 > floorRooms2) {
						cout << endl;
						cout << "Enter total number of rooms in the " << i << "th " << "Floor: ";
						cin >> floorRooms2;
					}
					cout << "How many SINGLE rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> singleRooms2;
					cout << "How many DOUBLE rooms are occupied in the " << i << "th " << "Floor: "; // This section is a do while loop in the for loop which will ask for hotel single, double, king, and suite. And if the total of all rooms are above how many rooms there is it will loop again.
					cin >> doubleRooms2;
					cout << "How many KING rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> kingRooms2;
					cout << "How many SUITE rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> suiteRooms2;
					totalAmountOfRooms2 = (singleRooms2 + doubleRooms2 + kingRooms2 + suiteRooms2);

					if (totalAmountOfRooms2 > floorRooms2) {
						cout << "Total number of occipied rooms exceeds the total number of rooms on this floor. Please try again!! ";
						cout << endl;
					}

					if (floorRooms2 < leastAmountOfRooms) {
						leastAmountOfRooms = floorRooms2;
						leastAmountOfRoomsFloor = i;
					}

				} while (totalAmountOfRooms2 > floorRooms2);
			}
			//--------------------------------------------------------------------------------------------------------------------------------
			
			if (i == 3) {                     // For Floor 3
				do {
					cout << "Enter total number of rooms in the " << i << "th " << "Floor: ";
					cin >> floorRooms3;
					if (floorRooms3 < 1 || floorRooms3 > 30) {
						cout << "Number of Rooms should be between 1 and 30 !! please try again. " << endl;
					}
				} while (floorRooms3 < 1 || floorRooms3 > 30);
				do {
					if (totalAmountOfRooms3 > floorRooms3) {
						cout << endl;
						cout << "Enter total number of rooms in the " << i << "th " << "Floor: ";
						cin >> floorRooms3;
					}
					cout << "How many SINGLE rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> singleRooms3;
					cout << "How many DOUBLE rooms are occupied in the " << i << "th " << "Floor: "; // This section is a do while loop in the for loop which will ask for hotel single, double, king, and suite. And if the total of all rooms are above how many rooms there is it will loop again.
					cin >> doubleRooms3;
					cout << "How many KING rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> kingRooms3;
					cout << "How many SUITE rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> suiteRooms3;
					totalAmountOfRooms3 = (singleRooms3 + doubleRooms3 + kingRooms3 + suiteRooms3);

					if (totalAmountOfRooms3 > floorRooms3) {
						cout << "Total number of occipied rooms exceeds the total number of rooms on this floor. Please try again!! ";
						cout << endl;
					}

					if (floorRooms3 < leastAmountOfRooms) {
						leastAmountOfRooms = floorRooms3;
						leastAmountOfRoomsFloor = i;
					}

				} while (totalAmountOfRooms3 > floorRooms3);
			}

			//--------------------------------------------------------------------------------------------------------------------------------

			if (i == 4) {                     // For Floor 4
				do {
					cout << "Enter total number of rooms in the " << i << "th " << "Floor: ";
					cin >> floorRooms4;
					if (floorRooms4 < 1 || floorRooms4 > 30) {
						cout << "Number of Rooms should be between 1 and 30 !! please try again. " << endl;
					}
				} while (floorRooms4 < 1 || floorRooms4 > 30);
				do {
					if (totalAmountOfRooms4 > floorRooms4) {
						cout << endl;
						cout << "Enter total number of rooms in the " << i << "th " << "Floor: ";
						cin >> floorRooms4;
					}
					cout << "How many SINGLE rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> singleRooms4;
					cout << "How many DOUBLE rooms are occupied in the " << i << "th " << "Floor: "; // This section is a do while loop in the for loop which will ask for hotel single, double, king, and suite. And if the total of all rooms are above how many rooms there is it will loop again.
					cin >> doubleRooms4;
					cout << "How many KING rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> kingRooms4;
					cout << "How many SUITE rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> suiteRooms4;
					totalAmountOfRooms4 = (singleRooms4 + doubleRooms4 + kingRooms4 + suiteRooms4);

					if (totalAmountOfRooms4 > floorRooms4) {
						cout << "Total number of occipied rooms exceeds the total number of rooms on this floor. Please try again!! ";
						cout << endl;
					}

					if (floorRooms4 < leastAmountOfRooms) {
						leastAmountOfRooms = floorRooms4;
						leastAmountOfRoomsFloor = i;
					}

				} while (totalAmountOfRooms4 > floorRooms4);
			}


			cout << endl;

			cout << endl;



			//--------------------------------------------------------------------------------------------------------------------------------

			if (i == 5) {                     // For Floor 5
				do {
					cout << "Enter total number of rooms in the " << i << "th " << "Floor: ";
					cin >> floorRooms5;
					if (floorRooms5 < 1 || floorRooms5 > 30) {
						cout << "Number of Rooms should be between 1 and 30 !! please try again. " << endl;
					}
				} while (floorRooms5 < 1 || floorRooms5 > 30);
				do {
					if (totalAmountOfRooms5 > floorRooms5) {
						cout << endl;
						cout << "Enter total number of rooms in the " << i << "th " << "Floor: ";
						cin >> floorRooms5;
					}
					cout << "How many SINGLE rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> singleRooms5;
					cout << "How many DOUBLE rooms are occupied in the " << i << "th " << "Floor: "; // This section is a do while loop in the for loop which will ask for hotel single, double, king, and suite. And if the total of all rooms are above how many rooms there is it will loop again.
					cin >> doubleRooms5;
					cout << "How many KING rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> kingRooms5;
					cout << "How many SUITE rooms are occupied in the " << i << "th " << "Floor: ";
					cin >> suiteRooms5;
					totalAmountOfRooms5 = (singleRooms5 + doubleRooms5+ kingRooms5 + suiteRooms5);

					if (totalAmountOfRooms5 > floorRooms5) {
						cout << "Total number of occipied rooms exceeds the total number of rooms on this floor. Please try again!! ";
						cout << endl;
					}

					if (floorRooms5 < leastAmountOfRooms) {
						leastAmountOfRooms = floorRooms5;
						leastAmountOfRoomsFloor = i;
					}

				} while (totalAmountOfRooms5 > floorRooms5);
			}

			 

		}
		//--------------------------------------------------------------------------------------------------------------------------------------------



		for (int i = 0; i < 100; i++) { // This is to make the spaces with the equal sign instead of cout the entire lines.
			cout << "=";
		}
		cout << endl;
		cout << "                   BlueMont Hotel located in " << hotelLocation << endl;
		cout << endl;
		cout << "                     TODAY'S ROOM RATES<US$/night) " << endl;

		cout << endl;

		cout << "        Single Room " << "        Double Room " << "        King Room " << "        Suite Room " << endl;
		cout << endl;
		cout << "                 60 " << "                 75 " << "              100 " << "               150 " << endl;
		

		for (int j = 0; j < 100; j++) {
			cout << "=";
		}

		totalNumberOfRooms = (floorRooms1 + floorRooms2 + floorRooms3 + floorRooms4 + floorRooms5);


		singleRoomIncome = (singleRooms1 + singleRooms2 + singleRooms3 + singleRooms4 + singleRooms5) * 60;    // These are all the calucations being done for the other half of the project.
		doubleRoomIncome = (doubleRooms1 + doubleRooms2 + doubleRooms3 + doubleRooms4 + doubleRooms5) * 75;
		kingRoomIncome = (kingRooms1 + kingRooms2 + kingRooms3 + kingRooms4 + kingRooms5) * 100;
		suiteRoomIncome = (suiteRooms1 + suiteRooms2 + suiteRooms3 + suiteRooms4 + suiteRooms5) * 150;

		totalHotelIncome = (singleRoomIncome + doubleRoomIncome + kingRoomIncome + suiteRoomIncome);

		totalNumberOfOccupiedRooms = (singleRooms1 + singleRooms2 + singleRooms3 + singleRooms4 + singleRooms5 + doubleRooms1 + doubleRooms2 + doubleRooms3 + doubleRooms4 + doubleRooms5 + kingRooms1 + kingRooms2 + kingRooms3 + kingRooms4 + kingRooms5 + suiteRooms1 + suiteRooms2 + suiteRooms3 + suiteRooms4 + suiteRooms5);

		totalNumberOfUnOccupiedRooms = (floorRooms1 + floorRooms2 + floorRooms3 + floorRooms4 + floorRooms5) - totalNumberOfOccupiedRooms;

		totalNumberOfFloorRooms = (floorRooms1 + floorRooms2 + floorRooms3 + floorRooms4 + floorRooms5);

		occupancyRate = (totalNumberOfOccupiedRooms / totalNumberOfFloorRooms) * 100;
		
 
		cout << endl;

cout << fixed << setprecision(2) << "                 Hotel Income: " << "        " << "$" << totalHotelIncome; // Total amount of HotelIncome
cout << endl;
cout << "            Total # of rooms: " << "        " << totalNumberOfRooms;   // Total amount of rooms
cout << endl;
cout << "    Total # Occupied Rooms: " << "          " << totalNumberOfOccupiedRooms;     // TotalNumberOccupied
cout << endl;
cout << "Total # of UnOccupied Rooms: " << "         " << totalNumberOfUnOccupiedRooms; // Total amount of UnOccupied rooms
cout << endl;
cout << fixed << setprecision(2) << " Occupancy rate " << "                     " << occupancyRate << "% " << endl; // Occupancy Rate
cout << endl;

cout << leastAmountOfRoomsFloor << "th Floor with " << leastAmountOfRooms << " rooms has the least # of rooms. " << endl;

		if (occupancyRate < occupancyRateCounter) {
			cout << "Need to improve Hotel Occupnacy Rate!! " << endl;  // This checks if occupancy rate is lower than 60 percent.
		}
		
		cout << endl;
		cout << endl;

		cout << "Thank you for testing my program!! " << endl;
		cout << "PROGRAMMER: " << programmerName;                      // This is the goodbye statement
		cout << endl;
		cout << "CMSC140 Common Project 3 " << endl;
		cout << "Due Date: " << dueDate;

	return 0;

}
