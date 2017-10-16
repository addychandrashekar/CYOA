//
//  main.cpp
//  CYOA
//
//  Created by Chaya Venkatasubbarao on 10/3/17.
//  Copyright © 2017 Addy Chandrashekar. All rights reserved.
//

//This is a change

int health;
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string location = "Menu";
    string choice = "";
    int health = 0;
    string name = "";
    int age;
    int won = 0;
    
    
    while (choice != "q" && choice != "Q") {
        
        if(location == "Menu") {
            cout << "What is your name?\n";
            cin >> name;
            cout << "What is your age?\n";
            cin >> age;
            location = "start";
        }
        
        if(age < 13) {
            cout << "Sorry but you are too young to play this game!";
            choice = "q";
        }
        
        if (location == "start")
        {
            cout << "Hello " << name << ". You find yourself in a dark room. You feel a light switch. Would you like to switch it on?\n";
            cin >> choice;
            
            if (choice == "Yes" || choice == "YEs" || choice == "YES" || choice == "yEs" || choice == "yES" || choice == "yeS" || choice == "yes"                                                                                                                                                                                                                                                                                                                                                )
            {
                cout << "You have turned the lights on.\n";
                cout << "You see a couch, tv, computer, paintings, and a door.\n";
                cout << "1. Sleep on the couch.\n" << "2. Turn on the tv.\n" << "3. Play on the computer.\n" << "4. Look at the paintings\n" << "5. Go through the door\n" << "Enter 1 to sleep on the couch, 2 to turn on the tv, 3 to play on the computer, 4 to look at the paintings, and 5 to go through the door.\n";
                cin >> choice;
                if (choice == "1") {
                    cout << "You were sleeping on the couch but it sucked you into another dimension and you died.\n";
                    choice = "q";
                }
                
                if (choice == "2"){
                    cout << "You were watching a movie where someone was shooting a gun and the tv sucked you into the movie and you got shot in the head so you died.\n";
                    choice = "q";
                }
                
                if (choice == "3"){
                    cout << "You were too busy playing on the computer when a fan fell on your head and killed you. Bad luck.\n";
                    choice = "q";
                }
                
                if (choice == "4"){
                    cout << "You tried to steal the painting but it activated lazers and the lazers killed you. Tough luck.\n";
                    choice = "q";
                }
                
                if (choice == "5"){
                    location = "noteRoom";
                    }
                    

                
                if (location == "noteRoom"){
                    cout << "You opened the door and you walked in. Suddenly, you saw a note on the floor. Would you like to pick it up?\n 1. Yes\n 2. No\n";
                    cin >> choice;
                    if (choice == "1"){
                        cout << "You picked up the note. It says " "Hello. I am Dr. James Hardy and I wrote this note to tell whoever is here how to get out. You need to first find a sword and then enter a room where there are minions and a boss. You need to destroy the minions and the boss in order for you to be able to get the key that can get out of here. Once you get the key, you need to beat 2 more bosses in order to get to the door which gets you out of here. I wish you luck. I wrote this note before I died. Good luck and have fun!!! Hope you make it out of here alive.. PS: If you try killing the minions or the boss withou a sword, they will easily kill you. You have no chance. Even if you find a glitch to get to the door without killing the bosses, without the key, you can't open it. If you try to open it or try to break it, it will activate a booby trap which will activate spikes to come from the floor and the walls will start to close in. If you somehow survive, a bomb will go off so either way, you are going to die. Have fun!!! Have a good day too.\n";
                       
                        cout << "Enter 1 if you would like to go back through the door. Enter 2 if you would like to climb the stairs!\n";
                        
                        cin >> choice;
                        
                        }
                    
                    else if (choice == "2"){
                        cout << "Enter 1 if you would like to go back through the door. Enter 2 if you would like to climb the stairs!\n";
                        if (choice == "1") {
                            location = "start";
                        }
                        
                        else if(choice == "2"){
                            location = "upstairs";
                        }
                
                if (location == "upstairs") {
                    cout << "You are now upstairs. You see things.";
                    cin >> choice;
                }
                        
        else if (choice == "No" || choice == "NO" || choice == "nO" || choice == "no")
        {
            cout << "There was a monster hiding and since you didn't turn on the lights it killed you.\n";
            choice = "q";
        }
          
            return 0;
            }
        }
    }
}
}
}
