//
//  main.cpp
//  CYOA
//
//  Created by Chaya Venkatasubbarao on 10/3/17.
//  Copyright © 2017 Addy Chandrashekar. All rights reserved.
//
int health;
#include <iostream>
using namespace std;

int main(void) {
    bool startMenu = true;
    string name;
    string location = "";
    int health;
    string userChoice = "";
    int hasEscaped = 0;
    
    //To see if they want to play the game or not
    while(startMenu == true) {
        cout << "Hello and welcome to Addy's Game. Would you like to start the game? Either put yes or no.\n";
        cin >> userChoice;
    }
    
        if(userChoice == "Yes" || userChoice == "YEs" || userChoice == "YES" || userChoice == "yEs" || userChoice == "yES" || userChoice == "yeS") {
            cout << "What is your name?";
            cin >> name;
        
        }
    
        else if (userChoice == "No" || userChoice == "NO" || userChoice == "no") {
            cout << "Say yes whenever you want to play the game.";
    }
    
        else {
        
            cout << "Please answer with a yes or no.\n";
            cin >> userChoice;
    }
 
    
    if (location == "Start") {
        cout << "You find yourself in a dark room. You cannot see anything. Would you like to turn on the lights?"
        cin >> userChoice;
        if
    }
    
    
    
}
