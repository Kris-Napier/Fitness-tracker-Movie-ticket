/*
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(){
  string name, genre, answer;
  int tickets, age;
  double price, total;
  
  // Asking the user their name
  cout << "Enter your name: ";
  // Calls the name action
  cin >> name;
  // Asks the users age
  cout << "Enter your age: ";
  // Calls the age action
  cin >> age;
  // Asking the user how many ticket they are getting
  cout << "How many tickets do you need: ";
  // Calls the tickets action
  cin >> tickets;
  // Asking the price
  cout << "How much are your tickets: ";
  // Calls the price action
  cin >> price;
  // Asks the person what genra they want to watch
  cout << "what is the movie genre your watching: ";
  cin >> genre;
  // Calcuates the the discount on the age of the person
  
  cout << "Calculating Discount..." << endl; 

  // Gives Discount depending on age
  if(age < 18) {
    total = price * (1.0 - 0.1);
    cout << "The price of the ticket is: $" << total;
  }
  else if(age < 60) {
    total = price * (1.0 - 0.15);
    cout << "The price of the ticket is: $" << total;
  }

  // Transition to the movie
  cout << " Loading movie..." << endl;
  
  // Moive text depending what genre you are watching
  if(genre == "Action" || genre == "action" || genre == "Comedy" || genre == "comedy") {
    if(genre == "Action" || genre == "action") {
      cout << "Is it a plane? Is it a bird? No! It's movie time! ";
    }
    else {
      cout << "Why did the chicken cross the road? (Type something)";
      cin >> answer; // This just make them enter something b/c it's a question
      cout << "Because it wanted to watch a movie! ";
    }
  } 
  else {
    cout << "Thank you for waiting. You are now watching a " << genre << " movie" ;
  }

  return 0;
    
} // End of main
*/