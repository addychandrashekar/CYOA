//
//  main.cpp
//  CYOA
//
//  Created by Chaya Venkatasubbarao on 10/3/17.
//  Copyright © 2017 Addy Chandrashekar. All rights reserved.
//

//This is a change

#include <iostream>
#include <string>

using namespace std;

int main() {
    string choice = "";
    string location = "Menu";
    int health = 0;
    string name = "";
    int age = 0;
    int won;
    int start = 0;
    int livingRoom = 0;
    int noteRoom = 0;
    int upstairs = 0;
    int eastRoom = 0;
    int northRoom = 0;
    int westRoom = 0;
    int southRoom = 0;
    int swordRoom = 0;
    bool hasStick = false;
    
    
    if(location == "Menu") {
        cout << "What is your name?\n";
        cin >> name;
        cout << "What is your age?\n";
        cin >> age;
    }
    
    if(age > 13) {
        location = "start";
    }
    
    else if (age < 13) {
        cout << "Sorry but you are too young to play this game!\n";
        choice = "q";
    }
    
    while (choice != "q" && choice != "Q") {
        
        
        if (location == "start" && start == 0) {
            
            cout << "Hello " << name << ". You find yourself in a dark room. You feel a light switch. Would you like to switch it on?\n";
            cin >> choice;
            
            if (choice == "Yes" || choice == "YEs" || choice == "YES" || choice == "yEs" || choice == "yES" || choice == "yeS" || choice == "yes") {
                
                location = "livingRoom";
                start = 1;
            }
            
            else if (choice == "No" || choice == "NO" || choice == "nO" || choice == "no")
            {
                cout << "There was a monster hiding and since you didn't turn on the lights it killed you.\n";
                choice = "q";
                return 0;
            }
            
            else {
                cout << "I do not understand\n";
                cin >> choice;
            }
        }
        
        else if (location == "start" && start > 0) {
            location = "LivingRoom";
        }
        
        
        if (location == "livingRoom" && livingRoom == 0) {
            cout << "You see a couch, tv, computer, paintings, and a door.\n";
            cout << "1. Sleep on the couch.\n" << "2. Turn on the tv.\n" << "3. Play on the computer.\n" << "4. Look at the paintings\n" << "5. Go through the door\n" << "Enter 1 to sleep on the couch, 2 to turn on the tv, 3 to play on the computer, 4 to look at the paintings, and 5 to go through the door.\n";
            cin >> choice;
            if (choice == "1") {
                location = "dream";
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
           
        }
        

                
        if (location == "noteRoom"){
            cout << "You opened the door and you walked in. Suddenly, you saw a note on the floor. Would you like to pick it up?\n 1. Yes\n 2. No\n";
            cin >> choice;
                   
            if (choice == "1"){
                cout << "You picked up the note. It says " "Hello. I am Dr. James Hardy and I wrote this note to tell whoever is here how to get out. You need to first find a sword and then enter a room where there are minions and a boss. You need to destroy the minions and the boss in order for you to be able to get the key that can get out of here. Once you get the key, you need to beat 2 more bosses in order to get to the door which gets you out of here. I wish you luck. I wrote this note before I died. Good luck and have fun!!! Hope you make it out of here alive.. PS: If you try killing the minions or the boss without a sword, they will easily kill you. You have no chance. Even if you find a glitch to get to the door without killing the bosses, without the key, you can't open it. If you try to open it or try to break it, it will activate a booby trap which will activate spikes to come from the floor and the walls will start to close in. If you somehow survive, a bomb will go off so either way, you are going to die. Have fun!!! Have a good day too.\n";
                       
                cout << "Enter 1 if you would like to go back through the door. Enter 2 if you would like to climb the stairs!\n";
                        
                cin >> choice;
                        
                        
                if (choice == "1") {
                    location = "start";
                }
                        
                else if(choice == "2"){
                    location = "upstairs";
                }
            }

                    
                else if (choice == "2"){
                cout << "Enter 1 if you would like to go back through the door. Enter 2 if you would like to climb the stairs!\n";
                        cin >> choice;
                        
                        if (choice == "1"){
                            location = "start";
                        }
                        
                        else if(choice == "2"){
                            location = "upstairs";
                        }
                    }
                }
        
                
                if (location == "upstairs") {
                    cout << "You are now upstairs. You see 4 doors. One to your north. One to your east. One to your South. One to your West. Enter n to go north, e to go east, s to go south, w to go west, and d to go downstairs.\n";
                    cin >> choice;
                    
                    if (choice == "n" || choice == "N"){
                        location = "northRoom";
                    }
                    
                    if (choice == "e" || choice == "E") {
                        location = "eastRoom";
                    }
                    
                    if (choice == "s" || choice == "S") {
                        location = "southRoom";
                    }
                    
                    if (choice == "w" || choice == "W") {
                        location = "westRoom";
                    }
                    
                    if (choice == "d" || choice == "D") {
                        location = "noteRoom";
                    }
                }
        
        if (location == "northRoom" && hasStick == false) {
            cout << "You opened the door and went in it. You are now in the North Room. There is a monster with a bazooka roaming around. It saw you and it turned towards you.\n Enter 1 if you would like to fight.\n Enter 2 if you want to go out the door.\n";
            cin >> choice;
            
            if (choice == "1") {
                cout << "You tried fighting the monster with your bare hands. It was hands vs bazooka so take a guess on who won. If you guessed the monster, you are right. It blew you up into a million different pieces and you died. You are really stupid, did you really think you would win?\n";
                choice = "q";
            }
            
            if (choice == "2") {
                location = "upstairs";
            }
        }
        
        if (location == "northRoom") {
            if (hasStick == true) {
                cout << "You opened the door and went in it. You are now in the North Room. There is a monster with a bazooka roaming around. It saw you and it turned towards you.\n Enter 1 if you would like to fight.\n Enter 2 if you want to go out the door.\n";
                cin >> choice;
            
                if (choice == "1") {
                    cout << "You killed the monster and you got a knife. Enter 1 to exit the room.";
                    cin >> choice;
                    if (choice == "1") {
                        location = "upstairs";
                    }
                }
            }
        }
        
        if (location == "northRoom") {
            if (hasStick != true) {
                cout << "You opened the door and went in it. You are now in the North Room. There is a monster with a bazooka roaming around. It saw you and it turned towards you.\n Enter 1 if you would like to fight.\n Enter 2 if you want to go out the door.\n";
                cin >> choice;
                
                if (choice == "1") {
                    cout << "The monster killed you. You didn't have any weapon so your hands didn't do much damage.\n";
                    choice = "q";
                }
            }
        }
        if (location == "eastRoom") {
             cout << "You opened the door and you walked in. You are now in the East Room. You see a shiny object. You go towards it and you see that it is a golden box. Would you like to open the box?\n Enter y if you would like to open the box and enter n if you don't want to.\n";
             cin >> choice;
            
            if (choice == "y" || choice == "Y") {
                cout << "You opened the box and you see a letter. The letter says 2903. You don't know what that means. Would you like to keep the letter?\n Enter y if you want to and enter n if you don't want to.\n";
                cin >> choice;
               
                if (choice == "y" || choice == "Y") {
                    cout << "You have now picked up the paper. Enter 1 if you want to walk back out the door and you can't really explore the room anymore so I suggest you leave the room.\n";
                    cin >> choice;
                    
                    if (choice == "1"){
                        location = "upstairs";
                }
            }
        }
    }
        if (location == "southRoom") {
            cout << "You are now in the South Room. There is a locked door here. You need to enter a four digit passcode in order to open the door.\n Enter the passcode: \n";
             cin >> choice;
            
            if (choice == "2903") {
                location = "stickRoom";
                
                
            }
            
            else if (choice != "2903") {
                cout << "This is the wrong password.\n";
                cout << "Either keep guessing or enter leave to go back through the door.\n";
                
                if (choice == "leave") {
                    location = "upstairs";
                }
            }
        }
        
        if (location == "westRoom") {
             cout << "You are now in the West Room. You see things. (This room is still being worked on so I suggest you leave.\n Just enter leave to leave the room.\n";
             cin >> choice;
            
            if (choice == "leave") {
                location = "upstairs";
            }
            
        }
        
        if (location == "stickRoom") {
            cout << "There is a stick here. Would you like to pick up the stick?\n";
            cin >> choice;
            
            if (choice == "Yes" || choice == "YEs" || choice == "YES" || choice == "yEs" || choice == "yES" || choice == "yeS" || choice == "yes") {
                cout << "You have now picked up the stick. Enter 1 to leave the room and enter 2 to stay.\n";
                hasStick = true;
                
                if (choice == "1") {
                    location = "southRoom";
                }
                else if (choice == "2") {
                    cin >> choice;
                }
            }
        }
            else if (choice == "no" || choice == "nO" || choice == "No"|| choice == "NO") {
                cout << "You did not pick up the stick. Enter 1 to leave the room and enter 2 to stay.\n";
                
                if (choice == "1") {
                    location = "southRoom";
                }
                else if (choice == "2") {
                    cin >> choice;
                }
        }
        
        if (location ==  "dream") {
            cout << "You were dreaming about zombies attacking you. You see a gun to fight them back. Would you like to pick up the gun and fight them?\n";
            cin >> choice;
            
            if (choice == "yes") {
                cout << "You have now picked up the gun. Enter s to shoot back at the zombies\n";
                cin >> choice;
                
                if (choice == "s") {
                    cout << "You have killed the zombies. Good job!!\n";
                    cout << "You have now woken up from your dream\n";
                    location = "livingRoom";
                }
                
            }
           
            if (choice == "no") {
                cout << "You have now died since you were so stupid enough to not pick up the gun and shoot at the zombies";
                cout << "You have now woken up from your dream";
                location = "livingRoom";
            }
        }
    }
    return 0;
}

