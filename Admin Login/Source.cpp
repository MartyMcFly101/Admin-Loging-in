#include <iostream>
#include <algorithm>
#include <vector>

//strings
const std::string Username = "admin";
const std::string Password = "adminpass";
std::string usernameAttemt;
std::string passwordAttemt;

//voids.
void loginboxs();

void Task2();
void Task3();
void Task4();
void Task5();
void QuitProgram();


int main() {

	loginboxs();

	return 0;
}

//Task1 Login User:admin
void loginboxs() {


	std::cout << "Enter your username & password: \n";
	std::cout << "Username : ";
	std::cin >> usernameAttemt;

	if (usernameAttemt == Username) {

		//First Attempt
		std::cout << "Password : ";
		std::cin >> passwordAttemt;

		if (passwordAttemt == Password) {
			std::cout << "Password is correct. Moving on.\n";
			system("cls");
			Task3();

		}
		else if (passwordAttemt != Password) {
			std::cout << "Wrong try aiagn.\n";


			//Second Attempt
			std::cout << "Password : ";
			std::cin >> passwordAttemt;

			if (passwordAttemt == Password) {
				std::cout << "Password is correct. Moving on.";
				system("cls");
				Task3();
			}
			else if (passwordAttemt != Password) {
				std::cout << "Wrong try aiagn.\n";


				//Third Attempt
				std::cout << "Password : ";
				std::cin >> passwordAttemt;

				if (passwordAttemt == Password) {
					std::cout << "Password is correct. Moving on.";
					system("cls");
					Task3();

				}
				else if (passwordAttemt != Password) {
					std::cout << "Wrong try aiagn.\n";


					//Fourth Attempt
					std::cout << "Password : ";
					std::cin >> passwordAttemt;

					if (passwordAttemt == Password) {
						std::cout << "Password is correct. Moving on.";
						system("cls");
						Task3();

					}
					else if (passwordAttemt != Password) {
						std::cout << "Wrong try aiagn.\n";


						//Fifth Attempt
						std::cout << "Password : ";
						std::cin >> passwordAttemt;

						if (passwordAttemt == Password) {
							std::cout << "Password is correct. Moving on.";
							system("cls");
							Task3();

						}
						else if (passwordAttemt != Password) {
							std::cout << "Wrong. That was your last try. \n";

						}
					}
				}

			}
		}


	}
}

//Initial and final charatcers
void Task2() {

	std::vector <std::string> names{ "Jonathan", "Suzan", "Lucy", "Jhon" };



	std::cout << "The first name is : " << names[0] << std::endl;
	std::cout << "The second name is : " << names[1] << std::endl;
	std::cout << "The third name is : " << names[2] << std::endl;
	std::cout << "The fourth name is : " << names[3] << std::endl;


	std::cout << "The first names first and last initials is : " << names[0].front() << names[0].back() << '\n';
	std::cout << "The second names first and last initials is : " << names[1].front() << names[1].back() << '\n';
	std::cout << "The third names first and last initials is : " << names[2].front() << names[2].back() << '\n';
	std::cout << "The fourth names first and last initials is : " << names[3].front() << names[3].back() << '\n';


}


//Manu.
void Task3() {
	char choice{};

	std::cout << "Please choose one Task of the latter: \n";
	std::cout << "--------------------\n";
	std::cout << "1. Print names' Initials and Lasts.\n";
	std::cout << "2. Check students' exam result. \n";
	std::cout << "3. Type a sentence. \n";
	std::cout << "4. Go to the exit program. \n";
	std::cout << "--------------------\n";

	std::cin >> choice;

	switch (choice) {
	case '1':
		system("cls");
		std::cout << "1. Print names' Initials and Lasts.\n";
		Task2();
		break;

	case '2':
		system("cls");
		std::cout << "2. Check students' exam result. \n";
		Task4();
		break;
	case '3':
		system("cls");
		std::cout << "3. Type a sentence. \n";
		Task5();
		break;
	case '4':
		system("cls");
		std::cout << "4. Go to the exit program. \n";
		QuitProgram();
		break;
	default:
		break;
	}



}

void Task4() {

	struct User
	{
		std::string first_name;
		std::string second_name;
		std::string third_name;
		std::string fourth_name;

		std::string firstN_mark;
		std::string secondN_mark;
		std::string thirdN_mark;
		std::string fourthN_mark;

		std::string RightMark = "ABDCABDA";
	};

	User user;

	std::cout << "Enter student name : ";
	std::cin >> user.first_name;

	std::cout << "Enter " << user.first_name << " mark (8 uppercase laters)\n";
	std::cin >> user.firstN_mark;

	std::cout << "Enter student name : ";
	std::cin >> user.second_name;

	std::cout << "Enter " << user.second_name << " mark (8 uppercase laters)\n";
	std::cin >> user.secondN_mark;

	std::cout << "Enter student name : ";
	std::cin >> user.third_name;

	std::cout << "Enter " << user.third_name << " mark (8 uppercase laters)\n";
	std::cin >> user.thirdN_mark;

	std::cout << "Enter student name : ";
	std::cin >> user.fourth_name;

	std::cout << "Enter " << user.fourth_name << " mark (8 uppercase laters)\n";
	std::cin >> user.fourthN_mark;




}

void Task5() {

}

void QuitProgram() {
	std::cout << " Yeah not much here.. boiii\n";
	exit;

}