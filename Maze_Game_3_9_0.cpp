#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stddef.h>
#include <limits>
#include <fstream>
#include <unistd.h> // Unix Standard
using namespace std;  // This is a comment.
/*
Maze Game Version 3.9.0
*/
// Create a class for giant fans in runners and risers
class GiantFan {
    private:
        int fanhealth;
    public:
        int fandiameter;
        int fanspeed;
        bool estop;
        bool fanpower;
        GiantFan() {
            // do not use the default constructor
            // an error about accessing attributes of a non class type object will be thrown
            fandiameter = 3000;
            fanspeed = 1;
            fanpower = false;
            estop = false;
            fanhealth = 100;
        }
        GiantFan(int arg_1, bool arg_2, bool arg_3) {
            fandiameter = 3000;
            fanspeed = arg_1;
            fanpower = arg_2;
            estop = arg_3;
            fanhealth = 100;
        }
        GiantFan(int arg_1, int arg_2, bool arg_3, bool arg_4) {
            fandiameter = arg_1;
            fanspeed = arg_2;
            fanpower = arg_3;
            estop = arg_4;
            fanhealth = 100;
        }
        void PowerOn() {
            fanspeed = 100;
            estop = false;
            fanpower = true;
        }
        void Emergency_Stop() {
            fanspeed = 0;
            estop = true;
            fanpower = false;
        }
};
// the fans
GiantFan MyRunnerFan(1,false,false);
GiantFan MyRiserFan(100,0,false,false);
// the explorer
string firstName;
string lastName;
string oldFirst = "boom";
string oldLast = "boom";
// character can become irritated
int frustration = 0;
// character can become angry
int rage = 0;
// character has finite health, finite strength, light armor, slightly less health than nominal 200
int health = 196;
int attack = 7;
int def = 3;
// character can become tired and slow, already less than nominal 1024
int stamina = 888;
// finite memory
int remember = 256;
string thought;

// state variables
int Closet_State = 0;
int Lobby_Fan_State = 0;
int Room_3_State = 0;
int Room_4_State = 0;
int Room_5_State = 0;
int Room_6_State = 0;
int Room_8_State = 0;
int TV_State = 0;

// function declarations
void Hall_1();
void Closet_1();
void PipeChase();
void Room_1();
void Room_2();
void Room_3();
void Room_4();
void Space_Warp();
void Room_5();
void Room_6();
void Room_7();
void Room_8();
void beatupcloset();
void Elevator();
void Basement();
void KaiWinn_Warp();
void mech_chase();
void innerspace();
void Lobby() {
    cout << "The lobby has black mold and brown stains. It is mostly gutted except for a desk and 4 chairs in the south east corner near you. \n";
    cout << "A large ceiling fan hangs from the ceiling without speed controls. The room is lit with daylight LED filament bulbs. Only 2 work. \n";
    if (Lobby_Fan_State == 0) {
        cout << "The fan has eight blades and is motionless. \n";
    }
    else {
        cout << "The fan has eight blades and spins at a lazy 65 RPM. \n";
    }
    cout << "The room reeks of mold and mildew. There are a set of double fire doors to your north. \n";
    cout << "There are false wood doors to your east and west. There are windows to the south. They are disgusting and some panes are missing. \n";
    cout << "What do you do????? Type 1 to go north, 2 to go south, 3 to go east, 4 to go west, 5 to toggle the fan, 6 to write user data for " << firstName << " to a file , 7 to write user data for " << firstName << " to a csv \n";
    int choose;
    cin >> choose;
    // citation: https://stackoverflow.com/questions/5864540/infinite-loop-with-cin-when-typing-string-while-a-number-is-expected
    // citation: https://stackoverflow.com/questions/71296302/numeric-limits-is-not-a-member-of-std
    if (cin.fail())
    {
        cout << "ERROR 01: Invalid state detected.";

        // get rid of failure state
        cin.clear(); 

        // From Eric's answer (thanks Eric)
        // discard 'bad' character(s) 
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    switch (choose) {
case 1:
    Hall_1();
    break;
case 2:
    cout << "The doors are locked.\n";
    frustration = frustration + 1;
    Lobby();
    break;
case 3:
    Closet_1();
    break;
case 4:
    PipeChase();
    break;
case 5: {
    if (Lobby_Fan_State == 0) {
        Lobby_Fan_State = 1;
        cout << "The fan accelerates to low speed and runs at low speed... \n\n\n";
        Lobby();
    }
    else {
        Lobby_Fan_State = 0;
        cout << "The fan comes to a stop... \n\n\n";
        Lobby();
    }
    break;
}
case 6: {
    cout << "Saving data for " << firstName << " " << lastName << "\n";
    ofstream datawrite("explorer.39");
    datawrite << "Maze Game Data Dump \n";
    datawrite << "Name is " << firstName << " " << lastName << "\n";
    datawrite << "Frustration " << frustration << " rage " << rage << "\n";
    datawrite << "health is " << health << " attack is " << attack << " defense is " << def << " stamina is " << stamina << "\n";
    datawrite << "Your thought word is " << thought << "\n";
    datawrite << "testcsv \n";
    datawrite << Closet_State << "," << Lobby_Fan_State << "," << Room_3_State << "," << Room_4_State << "," << Room_5_State << "," << Room_6_State << "," << Room_8_State << "," << TV_State;
    datawrite.close();
    cout << "Done! \n";
    Lobby();
    break;
}
case 7: {
    // citation: https://stackoverflow.com/questions/25201131/writing-csv-files-from-c
    cout << "Saving CSV for " << firstName << " " << lastName << "\n";
    ofstream csvout("explorer.csv");
    csvout << "Name," << firstName << "," << lastName << ",\n";
    csvout << "defense," << def << "," << stamina << ",\n";
    csvout << "Anger," << frustration << "," << rage << ",\n";
    csvout << "health," << health << "," << attack << ",\n";
    csvout << "thought," << thought << "," << remember << "\n";
    csvout << Closet_State << "," << Lobby_Fan_State << "," << Room_3_State << "," << Room_4_State << ",\n";
    csvout << Room_5_State << "," << Room_6_State << "," << Room_8_State << "," << TV_State << ",\n";
    csvout.close();
    cout << "Done! \n";
    Lobby();
    break;
}
default:
    cout << "Type 1, 2, 3, 4, or 5. \n";
    frustration = frustration + 3;
    Lobby();
    }
}
void Closet_1(){
    cout << "You are looking in a reach in storage closet. It is gutted \n" ;
    cout << "There is a trapdoor in the floor of the closet. \n";
    cout << "input 1 to turn around or 2 to enter the trapdoor.\n";
    int choose3;
    cin >> choose3;
if (choose3 == 1) {
    Lobby();
}
else if (choose3 == 2) {
    cout << "The door reveals a ladder that goes down a very deep shaft. \n";
    if (stamina > 300) {
        cout << "You ease down the ladder, noticing that the safety cage continues almost to the floor, leaving barely enough room to exit.\n";
        stamina = stamina - 40;
        cout << "your stamina is " << stamina << endl;
        mech_chase();
    }
    else if (stamina > 50) {
        cout << "You struggle to ease down the ladder... \n\n\n";
        frustration = frustration + 25;
        sleep(10);
        stamina = stamina - 40;
        cout << "your stamina is " << stamina << endl;
        cout << "You notice that the safety cage continues almost to the floor, leaving barely enough room to exit. You stumble and bash your head on the cage... \n\n\n\n";
        sleep(2);
        health = health - 5;
        cout << "Your health is " << health << endl;
        if (health < 1) {
            cout << "Game Over! \n\n";
            sleep(3);
            Space_Warp();
        }
        mech_chase();
    }
    else {
        cout << "You struggle to ease down the ladder... \n\n\n";
        frustration = frustration + 25;
        sleep(10);
        cout << "You become discoordinated and fail. Your right foot twists, you fall back and hit the cage, then fall vertically and hit the ground..... \n\n\n\n";
        cout << "You take severe fall damage... \n";
        frustration = frustration + 25;
        rage = rage + 3;
        stamina = 0;
        sleep(2);
        health = health - 77;
        cout << "Your health is " << health << endl;
        if (health < 1) {
            cout << "Game Over! \n\n";
            sleep(3);
            Space_Warp();
        }
        mech_chase();
    }
}
else {
    cout << "Type 1 or 2 \n";
    frustration = frustration + 2;
    Closet_1();
}
}
void mech_chase(){
    cout << "You are in a cramped space with pipes running on the walls and ceiling. \n" ;
    cout << "You can climb the ladder to head back to the lobby \n";
    cout << "The ladder extends what seems to be 50 feet up to the trapdoor.\n";
    cout << "The pipe chase area forms a crude hall. You can walk to right or left, both turn to north after a short distance. \n";
    cout << "There is an iron door near the ladder. It is to your south and has a porthole window in it. It is dark behind the door. \n";
    cout << "You can climb the ladder to head back to the lobby \n";
    cout << "input 1 to climb back to the lobby, 2 to enter the iron door, 3 to go right, and 4 to go left.\n";
    cout << "behind the iron door is a fan with a diameter of " << MyRiserFan.fandiameter << " feet\n";
    int pipe_choose;
    cin >> pipe_choose;
    if (pipe_choose == 1) {
        cout << "You ease up the ladder and carefully climb back into the closet, then walk into the lobby, closing each door as you return.\n" ;
        Lobby();
    }
    else if (pipe_choose == 2) {
        if (MyRiserFan.fanspeed == 0) {
            cout << "The door opens easily and swings inward rapidly, banging against the interior wall.\n";
            cout << "The room is flooded with harsh, high power LED spotlights. A school bell rings. The room is a massive concrete shaft. The floor is a metal grate.  \n";
            cout << "A huge three blade propeller sits motionless below the grate. The depth of the shaft makes you dizzy.\n";
            cout << "The shaft drops to what seems like infinity. Above you, the shaft splits into many square ducts that run off on all sides except the ones the building is on.\n";
            cout << "The air is perfectly still and ice cold. You shiver and slam the door shut, walking back into the mechanical pipe chase. \n";
            frustration = frustration + 8;
            if (frustration > 30) {
                cout << "You squeal and lose focus..... \n\n\n\n";
                sleep(4);
            }
            mech_chase();
        }
        else if (MyRiserFan.fanspeed == 1) {
            cout << "The door opens easily and swings inward rapidly, banging against the interior wall.\n";
            cout << "The room is flooded with harsh, high power LED spotlights. A school bell rings. The room is a massive concrete shaft. The floor is a metal grate.  \n";
            cout << "A huge three blade propeller spins slowly below the grate. The depth of the shaft makes you dizzy.\n";
            cout << "The shaft drops to what seems like infinity. Above you, the shaft splits into many square ducts that run off on all sides except the ones the building is on.\n";
            cout << "A stiff, cold breeze flows through the room. You shiver and slam the door shut, walking back into the mechanical pipe chase. \n";
            frustration = frustration + 8;
            if (frustration > 30) {
                cout << "You squeal and lose focus..... \n\n\n\n";
                sleep(4);
            }
            mech_chase();
        }
        else if ((MyRiserFan.fanspeed > 1) && (MyRiserFan.fanspeed < 20)) {
            cout << "The door is pulled out of your hand and rapidly opens inwards. \n";
            cout << "A loud helicopter noise can be heard and cold air rushes out the door. The room fills with bright blue light. \n";
            cout << "A huge three blade propeller fan spins at low speed under a grate in the room.\n";
            cout << "The door bats itself shut and slams with a bang noise. You shiver.....\n";
            cout << "This is rather frustrating! \n";
            frustration = frustration + 50;
            if (frustration > 30) {
                cout << "You squeal and lose focus..... \n\n\n\n";
                sleep(4);
            }
            mech_chase();
        }
        else {
            cout << "The door is violently ripped open with you on it! \n";
            cout << "A deafening scream fills your ears and you cannot think!!! The room fills with bright blue light. \n";
            cout << "A hurricane force wind rips you off of the door. The fan appears to make a subtle orbiting motion and the blades deform but the fan is motionless due to the flickering of the lights. \n";
            cout << "You fly up and are pinned against the ceiling!!!! \n";
            cout << "Everything resets. \n";
            Space_Warp();
        }
        
    }
    else if (pipe_choose == 3) {
        cout << "You walk around a corner, and down the hall. There are huge centipedes in the hall. You avoid them. \n";
        cout << "The mechanical chase continues and continues, both sides are cinder block, and pipes and conduit run on the ceiling.\n";
        innerspace();
    }
    else if (pipe_choose == 4) {
        cout << "You walk around the corner and then up some spiral staris. \n";
        cout << "You see a door and open in. It shuts behind you, you notice the lack of a handle on the other side.\n";
        cout << "This room has some shelves in it as well as a door on the far side. The sound of dissonant violins can be heard through the door. \n";
        cout << "The lights are flickering fluorescent bulbs. The room smells of general decay and dirt. There is a desk on the far side. \n";
        cout << "There is nothing on or in it... \n";
        cout << "You think: What if there is an concert hall on the other side of the door? I could escape! You then go through the door. \n\n\n";
        cout << "The hall is cinder block and dimly lit with old incandescent lamps. The violins are now deafening.\n";
        cout << "The noises get louder \n";
        cout << "The noises get softer. \n";
        cout << "The noises get louder \n";
        cout << "The noises get softer. \n";
        cout << "The noises get louder \n";
        cout << "The noises get softer. \n";
        cout << "The noises get louder \n";
        cout << "The noises get softer. \n";
        cout << "The noises get louder \n";
        cout << "The noises get softer. \n";
        cout << "The sound abruptly stops. You Whuf! \n";
        frustration = frustration + 20;
        rage = rage + 5;
        if (frustration > 30) {
            cout << "You squeal and lose focus..... \n\n\n\n";
            sleep(4);
        }
        if (frustration > 300) {
            cout << "You shriek, turn around, try to exit to the room in the basement..... \n\n\n\n";
            cout << "There is a sound like a cannon firing.... \n\n\n\n";
            cout << "You are suddenly in a very dark field with tree silhouettes all around you and a very dull blue purple sky. You walk forwards. A 30 foot long horse fly startles, jumps, and then flies off from right beside you. \n\n";
            cout << "You are hit by a wing!!!!!! \n\n\n All goes black \n\n\n\n";
            sleep(10);
            frustration = frustration + 50;
            rage = rage + 20;
            if (stamina > 400) {
                stamina = stamina - 30;
            }
            Basement();
        }
        else if (stamina > 50) {
            cout << "You run down the hall out of desperation. It goes on infinitely.... The walls stretch and everything begins to fade. \n";
            cout << "There is a loud bang and a white flash. You briefly see your car and your gear........ Then everything goes pitch black and silent. \n";
            cout << "There is a reverse cymbal! \n";
            cout << "After a very bright blue flash: \n";
            Basement();
        }
        else if (stamina < 51) {
            cout << "You run down the hall out of desperation. You become discoordinated and trip and fall. You skid to a stop on the floor. \n";
            cout << "There is a loud bang and a white flash, and the hall becomes a parallelogram. The hall becomes a rhombus and continues to collapse. \n";
            cout << "There is a reverse cymbal! \n";
            cout << "After a very bright blue flash: \n";
            Space_Warp();
        }
        else {
            cout << "------";
        }
    }
    else {
        cout << "Type 1, 2, 3, or 4 \n";
        frustration = frustration + 5;
        Closet_1();
    }
}
void PipeChase(){
    cout << "You are looking into a pipe chase. There are pipes coming out of the floor and going into the ceiling and interior walls.\n ";
    cout << "The floor is concrete, and a single fixture hangs overhead. \n";
    if (Closet_State == 0) {
        cout << "A single ambiguous frosted A19 bulb hangs in the socket. It could be LED or incandescent. \n";
    }
    else {
        cout << "The socket has the remains of a broken halogen lamp inside it. \n";
    }
    cout << "What do you do? press 1 to leave or 2 to turn on the bulb. \n";
    int bulbexplode;
    cin >> bulbexplode;
if (bulbexplode == 1) {
    Lobby();
}
else if (bulbexplode == 2) {
    if (Closet_State == 0) {
        cout << "The lightbulb explodes. You run into the lobby and are slightly burned. There is shattered glass everywhere. \n";
        frustration = frustration + 4;
        if (frustration > 30) {
            cout << "You squeal and lose focus..... \n\n\n\n";
            sleep(4);
        }
        health = health - 3;
        cout << "Your health is " << health << endl;
        if (health < 1) {
            cout << "Game Over! \n\n";
            sleep(3);
            Space_Warp();
        }
        cout << "You head north into the hall. \n";
        Closet_State = 1;
        Hall_1();
    }
    else {
        cout << "The switch clicks noisily... There is no lightbulb. There is shattered glass on the floor. \n";
        frustration = frustration + 3;
        cout << "You head north into the hall. \n";
        Hall_1();
    }
}
else {
    cout << "Type 1 or 2\n";
    frustration = frustration + 2;
    PipeChase();
}}
void Hall_1 () {
    cout << "The hall has old, worn out carpet. The LED lights are soft white. All lights work. You hear an air handler running. There are doors on each side.\n";
    cout << "They are numbered 101 to 110, then 301. \n";
    cout << "The fire door at the far end is jammed. There is the sound of dogs barking from behind it when it is hit or jiggled. You decide it is off limits. \n";
    cout << "type in the room number, or 1 to return to the lobby. There is a warning sign on the wall. \n";
int choose2;
    cin >> choose2;
    switch (choose2) {
case 101:
    Room_1();
    break;
case 102:
    Room_2();
    break;
case 103:
    Room_3();
    break;
case 104:
    Room_4();
    break;
case 105:
    Room_5();
    break;
case 106:
    Room_6();
    break;
case 107:
    Room_7();
    break;
case 108:
    Room_8();
    break;
case 109:
    cout << "This was an old suite. It is like a time capsule. It looks unused since 1999, and there is a May 1999 NASA Calendar on the wall. \n";
    cout << "The closet is open and there are very dusty tuxedos hanging in the closet. Only one bulb works. There are model sports cars on the dresser \n";
    cout << "The floor is covered in baseball cards. Some teams are very different. There is a full set of Constantinople Wildcats cards, as well as a \n";
    cout << "full set of San Juan Eagles cards. \n";
    cout << "You leave the room, it is not a way out. \n";
    frustration = frustration + 5;
    Hall_1();
    break;
case 110:
    cout << "This room was another suite. The closet door is on the ground in front of the closet. The closet is rotting on the inside and has peeling paint. \n";
    cout << "There is a few books on the wall. The name in one is Nora Helmer. The room is disgusting despite containing no other personal belongings except a desk and a picture. \n";
    cout << "There is a picture in a frame on the desk of someone in a Victorian Era dress standing with someone in a wedding dress. They both have short, dark hair and athletic builds. \n";
    cout << "They are at Yellowstone National Park at an overlook. \n";
    cout << "There is a map on the table, it is addressed to Nora, and comments that her old heirloom items are in the basement in B02. It is signed Donna. \n";
    cout << "It also mentions a portal in the basement and says that it leads to an alternate timeline. She commented that that timeline had a pandemic of COVID-19. \n";
    cout << "It further comments that Hero had already dissovled the lease on room 110 and that no one owned it anymore. \n";
    cout << "You realize that this is your way out! \n";
    cout << "The map shows the location of the elevator. You head to it. \n";
    Elevator();
    break;
case 301:
    cout << "This is a large, almost empty room. A violin and bow lay in one corner, and there are piles of desks and chairs in the other corner. \n";
    cout << "The room is covered in brown and yellow stains on the floor, walls, and ceiling. The floor looks like someone threw up on it. \n";
    cout << "The fixtures are from the 1950s and have harsh 6700K fluorescent tubes in them. \n";
    cout << "There is a door on the wall with the fire door, it is open. A German Shepherd dog comes through the door. It snarls and growls. \n";
    cout << "You leave and slam the door. The dog bangs against it and roars loudly, then everything is silent. \n";
    rage = rage + 15;
    Hall_1();
    break;
case 1:
    Lobby();
    break;
default:
    cout << "Type 1, 101 - 110, or 301.\n";
    Hall_1();
    }
}
void Room_1(){
cout << "You are in a square room. There is a KTNC Railroad 2015 calendar on the wall. Only 5 lights work. They are Daylight LEDs. There is a closet in this room.\n";
cout << "There is a music disk on the only desk in the room. It is titled Wait Walk, is by FanFan61618, and has a traffic light on the front. \n";
cout << "There is a computer on the desk. It shows a blue screen that says Error format disk C:/. \n";
cout << "The filter in this room is plugged, and the room smells like dust and old books. \n";
if (frustration > 30) {
    cout << "You squeal and lose focus..... \n\n\n\n";
    sleep(4);
}
cout << "Press 1 to leave, 2 to look in the closet \n";
int nagnag;
cin >> nagnag;
if (nagnag == 1) {
    Hall_1();
}
else if (nagnag == 2) {
    cout << "There is a desk fan on the closet floor. There is a rain jacket and a Victorian Era dress and coat in the closet.\n";
    cout << "There is also a spider in the closet. It has black and yellow stripes on it. You get scared and slam the door.\n";
    cout << "You run into the hall out of fear. \n";
    frustration = frustration + 8;
    Hall_1();
}
else {
    cout << "Type 1 or 2\n";
    frustration = frustration + 2;
    if (frustration > 30) {
        cout << "You squeal and lose focus..... \n\n\n\n";
        sleep(4);
    }
    Room_1();
}
}
void beatupcloset() {
    cout << "The closet interior has no shelves inside it. \n";
    cout << "There is a dsiplay in the closet. \n";
    cout << "The display shows an error message, then becomes corrupt, filling with this text: \n";
    srand(time(NULL)); 
    int garbageText;
    for (int brokendisplay = 1; brokendisplay <= 25; brokendisplay++) {
        garbageText = rand() * 3 - 45;
        cout << garbageText;
    }
    cout << "The screen goes dark, you return to the hall \n";
    Hall_1();
}
void Room_2(){
    cout << "This room is in very poor condition. There are multi colored stains on the walls and dirt on the floor. Only one light works. \n";
    cout << "There is a what looks like a closet. There is no furniture or items in the room. The window has been smashed.\n";
    cout << "There is shattered glass on the floor near the window. \n";
    if (frustration > 30) {
        cout << "You squeal and lose focus..... \n\n\n\n";
        sleep(4);
    }
    cout << "The room smells of mold, dirt, and rotten wood. Input 1 to enter the closet, anything else to leave.\n";
    int closet102;
    cin >> closet102;
    if (closet102 == 1){
        beatupcloset();
    }
    else {
        cout << "You decide that this room is not important and return to the hall. \n";
        Hall_1();
    }
}
void Room_3(){
    int pushbutton;
    int Door103;
    if (Room_3_State == 0) {
        cout << "The lights are off. There is a push button near the door. Press 1 to push the button or 2 to leave the room. \n";
        cin >> pushbutton;
        if (pushbutton == 1) {
            Room_3_State = 1;
            cout << "The lights turn on. They are LED tubes on the ceiling. \n";
            cout << "There are tables and chairs in this room. There are no brown stains. \n";
            cout << "There is a door on the far wall near a dirty window. Press 1 to open the door or any integer other than 1 to leave.\n";
            cin >> Door103;
            if (Door103 == 1){
                cout << "The door seems stuck. You kick it and it opens. It goes to room 102. You walk through the door, and then shut it. It will not open again.\n";
                cout << "The lights remain on in Room 103. \n";
                Room_2();
            }
            else {
                cout << "You leave the room. \n";
                Hall_1();
            }
        }
        else if (pushbutton == 2) {
            cout << "You leave without turning the lights on. \n";
            if (frustration > 30) {
                cout << "You squeal and lose focus..... \n\n\n\n";
                sleep(4);
            }
            frustration = frustration + 3;
            Hall_1();
        }   
        else {
            cout << "Type 1 or 2\n";
            frustration = frustration + 3;
            Room_3();
        }
    }
    else {
        cout << "The lights are already on. They are LED tubes on the ceiling. \n";
        cout << "There are tables and chairs in this room. There are no brown stains. \n";
        cout << "There is a door on the far wall near a dirty window. Press 1 to open the door or any integer other than 1 to leave.\n";
        cin >> Door103;
        if (Door103 == 1){
            cout << "The door seems stuck. You kick it and it opens. It goes to room 102. You walk through the door, and then shut it. It will not open again.\n";
            cout << "The lights remain on in Room 103. \n";
            Room_2();
        }
        else {
            cout << "You leave the room. \n";
            frustration = frustration + 3;
            Hall_1();
        }
    }
}

void Room_4(){
    if (Room_4_State == 0) {
        cout << "You flip the light switch and the lights turn on. They are old incandescent bulbs. The TV in the room turns on on motion detector. \n";
        Room_4_State = 1;
        TV_State = 1;
    }
    else {
        cout << "The room is lit with incandescent lights. The TV does not turn on again \n";
        TV_State = 35;
    }
    if (TV_State == 1) {
        cout << "It starts to play a tape of scenes from the KTNC, North Lebanon and Pikeville RR, and the Hocking Valley RR. There is a calendar on the wall. It is on March 2016.\n";
    }
    else {
        cout << "There is a calendar on the wall. It is on March 2016.\n";
    }
    cout << "This is a North Lebanon and Pikeville Railroad Calendar (A KTNC Affiliate). This used to be a lodge that was used by railroad executives. \n";
    cout << "You are in the Western Pacific Universe!!!\n";
    cout << "The room smells strongly of mothballs and cleaner. \n";
    cout << "There is a closet in this room. It is on the same side of the hall as room 101 and across from room 102 and 103. There is a package on the desk. It is on its side.\n";
    cout << "It is addressed to Maria Johanna, 145 Trestle Street, Russellville, AL.... The zip code is illegible. The box is moderately light, and you lift it and reposition it easily. \n";
    cout << "Press 1 to open the box, 2 to look in the closet, or 3 to leave \n";
    int Choose104;
    int randnum1;
    srand(time(NULL));  // The random sequence is different each time
    randnum1 = rand() %20 +1; // generates a random number
    cin >> Choose104;
    if (Choose104 == 1){
        cout << "There are DVDs in the box. It is video of every KTNC owned railroad! East, west, and Appalachian region footage from 1991 to 2016 is included. \n";
        cout << "You repack the disks. \n";
        cout << "You leave the room as to not go through someones personal belongings.\n";
        if (TV_State == 1) {
            cout << "The TV turns off. \n\n";
        }
        frustration = frustration + 2;
        Hall_1();
    }
    else if (Choose104 == 2){
        cout << "The closet has business suits in it. There is a set of US Army Dress Greens hanging in the closet as well. There is a box in it that says WP 1995-1998 Slides on it \n";
        cout << "It reeks of mothballs, and the smell almost knocks you out. \n\n";
        if (TV_State == 1) {
            cout << "The TV turns off. \n\n\n\n";
        }
        frustration = frustration + 42;
        if (frustration > 300) {
            cout << "You pause and lose focus..... \n\n\n\n";
            sleep(8);
        }
        sleep(3);
        if (randnum1 == 1){
            cout << "The door slams shut and the lights go out. It is pitch black and silent... \n";
            Room_4_State = 0;
            cout << "You light a flare to see and place it in the center of the room. There is a wierd noise. \n";
            cout << "The room begins to reset!!!! \n";  // Creates a random warp event
            Lobby();
        }
        else if (randnum1 == 2)
        {
            cout << "The door slams shut and the lights go out. It is pitch black and silent... \n";
            Room_4_State = 0;
            cout << "You light a flare to see and place it in the center of the room. There is a wierd noise. \n";
            cout << "The room begins to reset!!!! \n";  // Creates a random warp event
            Room_8();
        }
        else if (randnum1 == 3)
        {
            cout << "The door slams shut!!!!! You startle... \n";
            cout << "There is a wierd noise. \n";
            cout << "There is a flash of light!!!! \n";  // Creates a random warp event
            Room_2();
        }
        else if (randnum1 == 4)
        {
            cout << "The door slams shut and the lights go out. It is pitch black and silent... \n";
            Room_4_State = 0;
            cout << "You light a flare to see and place it in the center of the room. There is a wierd noise. \n";
            cout << "Your flare goes dark. You grab it and run to the pipe chase. It looks unused. You put it in your backpack.\n";  // Creates a random warp event
            PipeChase();
        }
        else if (randnum1 == 5)
        {
            cout << "The door slams shut and the lights go out. It is pitch black and silent... \n";
            cout << "You pull out a flare, but cannot light it. There is a wierd noise. \n";
            cout << "The room begins to reset!!!! \n";  // Creates a random warp event
            Room_3();
        }
        else if (randnum1 == 6)
        {
            cout << "The door slams shut and the lights go out. It is pitch black and silent... \n";
            cout << "You cannot find your flares. There is a wierd noise. \n";
            cout << "The room begins to reset!!!! \n";  // Creates a random warp event
            Room_7();
        }
        else if (randnum1 == 7)
        {
            cout << "You become dizzy from the smell.\n";
            cout << "You sit on a chair in the room. Your vertigo does not stabilize. \n";
            cout << "The room begins to reset!!!! \n";  // Creates a random warp event
            Room_1();
        }
        else if (randnum1 == 8)
        {
            cout << "The TV makes a brilliant white flash with a pop noise and the lights flash... \n";
            cout << "You startle and run into the lobby and see a ladder in the closet. \n";
            Room_4_State = 0;
            cout << "You walk into the closet and descend the ladder. \n";  // Creates a random warp event
            mech_chase();
        }
        else if (randnum1 == 9)
        {
            cout << "The door slams shut and the lights go out. It is pitch black and silent... \n";
            cout << "You light a flare to see and place it in the center of the room. There is a wierd noise. \n";
            cout << "The room begins to reset!!!! \n";  // Creates a random warp event
            Room_6();
        }
        else if (randnum1 == 10)
        {
            cout << "You gag on the smell, then run to an unmarked door. \n";  // Creates a random warp event
            Elevator();
        }
        else if (randnum1 == 11)
        {
            cout << "You gag on the smell, then escape to the hall. \n";  // Creates a random warp event
            Hall_1();
        }
        else if (randnum1 == 12)
        {
            cout << "There is a loud ker-thunk noise and the power goes out. \n";
            cout << "You feel and find the breaker panel. The breaker is tripped. \n";
            cout << "You reset the breaker \n";  // Creates a random warp event
            cout << "You leave \n";  // Creates a random warp event
            Hall_1();
        }
        else if (randnum1 == 13)
        {
            cout << "You gag on the smell, then run to an unmarked door. \n";  // Creates a random warp event
            Elevator();
        }
        else if (randnum1 == 14)
        {
            cout << "A noise is heard that fades in and out. A flesh fly darts around the room and then lands on the closet shelf. You leave... \n";  // Creates a random warp event
            Hall_1();
        }
        else if (randnum1 == 15)
        {
            cout << "You hear flies buzzing and see screw worm flies darting around. They take off and land randomly and move rapidly. The buzz is unusually high pitched. You leave... \n";  // Creates a random warp event
            Hall_1();
        }
        else if (randnum1 == 16)
        {
            cout << "You hear a rumble, like that of a distant freight train. It comes from under the building \n";  // Creates a random warp event
            cout << "You find a ladder in the closet in the lobby, and take it down to a mechanical chase. The noise is much louder. \n";
            cout << "You then walk down the chase, and the noise gets louder. You approach the source, seeing an infinite ladder down, you decide it is wise not to climb it. \n";
            cout << "A deafening mechanical wahwahwah... sound is heard that slows down with each wah lasting a little longer than the last one, then the rumble stops. \n";  // Creates a random warp event
            cout << "You walk around and walk the length of the mechanical chase. \n";
            cout << "After looking at the spiral staircase on the other side of the building, you return back to the location with the infinite ladder. \n";
            cout << "You notice centipedes coming out of the walls. \n";  // Creates a random warp event
            innerspace();
        }
        else if (randnum1 == 17) {
            cout << "A noise is heard that fades in and out. A blue bottle fly darts around the room and then lands on the closet shelf. You leave... \n";  // Creates a random warp event
            Hall_1();
        }
        else if (randnum1 == 18) {
            cout << "A noise is heard that fades in and out. A steel blue cricket hunter darts around the room. It stings you!!!!!! \n";
            cout << "The large wasp barely hurts.... \n";
            health = health - 1;
            cout << "Your health is " << health << endl;
            if (health < 1) {
                cout << "Game Over! \n\n";
                sleep(3);
                Space_Warp();
            }
            Hall_1();
        }
        else {
            cout << "You become dizzy and pass out... \n";  // Creates a random warp event
            sleep(12);
            cout << "Your stamina is reduced by 100... \n";
            if (stamina > 111) {
                stamina = stamina - 100;
            }
            else {
                stamina = 23;
            }
            cout << "Your stamina is " << stamina << endl;
            Hall_1();
        }
    }
    else if(Choose104 == 3){
        Hall_1();

    }
    else{
        cout << "type 1, 2, or 3 \n";
        Room_4();
    }
}
void Room_5(){
    cout << "The room has Daylight LEDs in it. There is kitchen equipment everywhere. The room is greasy and disgusting.\n";
    if (Room_5_State == 1) {
        cout << "You smell a sewer smell with faint rotten eggs. You gag on the smell.\n";
    }
    else {
        cout << "You smell rotten eggs or natural gas but cannot tell which one it is... \n";
    }
    cout << "There are food service windows linking to room 103. The windows have solid oak shutters on them, and the shutters are perfectly closed. There is a gas stove in the room, a beige microwave, and a closet. \n";
    cout << "press 1 to look in the closet, 2 to operate the stove, 3 to inspect the microwave, and any other integer to leave. \n";
    int Cook_Kitchen;
    cin >> Cook_Kitchen;
    if (Cook_Kitchen == 1){
        cout << "The closet is full of spoiled food and flies. You are hit with a sewer smell. You slam the door and leave the room. \n";
        Room_5_State = 1;
        frustration = frustration + 10;
        Hall_1();
    }
    else if (Cook_Kitchen == 2){
        cout << "The room was full of methane and oxygen. The stove explodes.\n";
        cout << "You hear and feel a pop and go deaf as the room fills with fire. You do not feel it or get burned.\n";
        Space_Warp();
    }
    else if (Cook_Kitchen == 3){
        cout << "The microwave does nothing when interacted with.... \n";
        cout << "You leave... \n";
        frustration = frustration + 8;
        Hall_1();
    }
    else {
        Hall_1();
    }
}
void innerspace(){
    cout << "The mechanical chase continues to a small wide area that seems rather far back. A small extension is to your right. There are pipes running into the ground here.\n";
    cout << "The centipedes do not come this far, and a sewer smell hangs in the air. The walls are disgusting... You notice a door in front of you, and a door to your left and a ladder in the extension that heads down a shaft.\n";
    cout << "The shaft goes very far down... You cannot see the bottom.\n";
    cout << "Compressors can be heard from inside the door in front of you.\n";
    cout << "The noise seems like it would be loud, but is not.\n";
    cout << "press 1 to go into the room with compressor noises, 2 to go in the door to your left, and 3 to explore the shaft.\n";
    int spacechoose;
    cin >> spacechoose;
    if (spacechoose == 1){
        cout << "The room has a refrigeration rack inside it. One compressor is toiling away and is very hot. All others are off.\n";
        cout << "A 24 inch propeller fan spins noisily in one corner, exhausting the heat out of the room. Fresh air comes in via a grate over the door.\n";
        cout << "You find nothing helpful here and return back to the last decision point\n";
        innerspace();
    }
    else if (spacechoose == 2){
        cout << "This door leads into the basement. You walk through it. The door shuts and is labeled mech chase on it.\n";
        cout << "The handle turns one sixteenth turn in each direction and stops. The door is locked from the inside. You walk to the elevator door in the basement... \n\n\n";
        Basement();
    }
    else if (spacechoose == 3){
        cout << "The ladder continues only a short distance and your feet hit a grate. You notice that you are in a shuttle cart. The cart speeds down the shaft and slows to a stop at the bottom.\n";
        cout << "You cautoiusly walk down the only hall, which is lit by daylight LEDs. You see a metal boat door and a wooden door, at right angles to each other. The metal door handle turns and unlatches, but something bats it back into place each time it is opened.\n";
        cout << "Press 1 to force the door, 2 to explore the wooden door, 3 to return to the top, 4 if you understand what is behind the door and want to take the risk, 5 if you desire to attempt to stop the system.";
        int giantfans;
        int jj = 0;
        cin >> giantfans;
        if (giantfans == 1) {
            cout << "You shove the door open very hard with both hands, it gets to about 45 degrees revealing a dark space, immediately, a thick, vertical beam comes out of the darkness , the top appearing faster than the bottom, and bats the door closed. It slams with a bang noise.\n";
            cout << "The window shatters on the door... \n";
            cout << "You hear a loud whoosh noise every few seconds, and the columns appear in the field of view before walking away to your left, away from the wooden door. The room pressure drops slightly when each beam appears.\n";
            cout << "You realize that the door cannot safely be opened. You open the wooden door and climb up a few stairs before pedaling a cart down the hall. You reach the end, where a control booth sits.\n";
            cout << "You see a button that says tunnel light, and you hit it. The room floods with light. You see the biggest concrete tunnel you have ever seen. Only a thin glass barrier is between you and the tunnel. A 3000 foot wide three blade fan slowly rotates in the tunnel at a few RPM.\n";
            cout << "You realize that this was what was batting the door shut... \n";
            cout << "You gasp in horror, making an audible gasp noise and fill with white hot dread, then a school bell sounds, then you pedal the cart down the hall, feeling dizzy near the metal door due to low pressure, ";
            cout << "you notice that the columns scan across the opening noticably faster than before, making a popping noise, you then dart to the shaft and use the eletctric cart to climb up, a low vibration becomes more and more pronounced...\n";
            cout << "The popping noise becomes a deafening wop wop wop wop wop like a giant helicopter hovering under you, and everything shakes very hard. Dust pours off of the walls...\n";
            cout << "Everything groans and begins to distort from the rapid pressure fluctuations and extreme sound pressure. \n";
            cout << "The tracks become a parallelogram as the cart nears the top, the fan noise is now a deafening buzzing throbbing roar, and your cart falls as huge rocks chase you down the shaft...\n";
            cout << "The shaft begins to close... Everything resets... \n";
            Space_Warp();
        }
        else if (giantfans == 2) {
            cout << "You decide that the door cannot safely be opened. You open the wooden door and climb up a few stairs before pedaling a cart down the hall. You reach the end, where a control booth sits.\n";
            cout << "You see a button that says tunnel light, and you hit it. The room floods with light. You see the biggest concrete tunnel you have ever seen. Only a thin glass barrier is between you and the tunnel. A 3000 foot wide three blade fan slowly rotates in the tunnel at a few RPM.\n";
            cout << "You realize that this was what was batting the door shut... \n";
            frustration = frustration + 100;
            cout << "You gasp in horror, making an audible gasp noise and fill with white hot dread. You stare at the fan. It spins lazily and seems to do nothing else. You see a dial on the desk, but leave and head up the shaft.";
            innerspace();
        }
        else if (giantfans == 3) {
            cout << "You decide that the door cannot safely be opened. You open the wooden door and look at the dirty stairs and pedal cart...\n";
            cout << "You watch the beam scanning across through the porthole...\n";
            cout << "You look around the hall, walking up and down it... \n";
            frustration = frustration + 100;
            cout << "You give up and use the electric cart to ride uneventfully to the mechanical chase, the motor toils over rough track. \n";
            int represult;
            do {
                represult = jj % 2;
                if (represult == 1) {
                    cout << "The motor speed subtly increases.\n\n";
                }
                else {
                    cout << "The motor speed subtly decreases.\n\n";
                }
                jj = jj + 1;
            }
            while (jj < 10);
            cout << "The motor slows to a stop, you climb the short ladder and are back to safety.";
            innerspace();
        }
        else if (giantfans == 4) {
            cout << "You run to the end of the hall with the cart and make a running dash, you shove the door open and dive through it and roll on the concrete.\n";
            cout << "You roll at an ever increasing rate over the glassy smooth concrete surface. You become dizzy but keep rolling.\n";
            cout << "You keep rolling as something metal brushes over your back. Your leg catches on it...\n";
            cout << "Your leg is batted in an unnatural motion but oddly is not hurt, you feel a rush of wind, you roll down the concrete. Your roll rate slows.\n";
            while (jj < 5) {
                cout << "You continue to slow down... \n";
                jj++;
            }
            cout << "You become disoriented and have severe vertigo once you stop rolling.. You stagger around the tunnel and it takes 20 minutes to be able to stand and walk properly, and then the lights flood the tunnel.\n";
            cout << "You are in one of the biggest concrete tunnels you have ever seen. You see the 3000 foot three blade propeller fan from the back and see the motor clearly.\n";
            cout << "The tunnel splits into four smaller round tunnels in the distance, and a stiff breeze blows in the tunnel. \n";
            int tunnelselect;
            cout << "Select a tunnel! 1 for top left, 2 for top right, 3 for bottom left, 4 for bottom right. \n";
            cin >> tunnelselect;
            if (tunnelselect == 1) {
                cout << "The fan suddenly speeds up and blows you away, you swerve to go through the top left tunnel, the tunnel curves and twists and turns.";
                cout << " You notice a sharp bend in the tunnel, and a fan blows from the bottom, lofting you up the tunnel.\n";
                cout << "You get stuck against a screen halfway up, a giant propeller spins on the other side. A net extends below you. The fans stop and you fall into the net.\n";
                cout << "You then get drawn into a room. You sit on the net and dont know what to do next.......\n";
                cout << "After three hours of exploring, you are lost. \n";
                frustration = frustration + 150;
                cout << "Everything almost resets \n";
                KaiWinn_Warp();
            }
            else if (tunnelselect == 2) {
                cout << "The fan suddenly speeds up and blows you away, you swerve to go through the top right tunnel, the tunnel curves hard right then continues for a mile before curving left... \n";
                cout << "You notice a sharp bend in the tunnel, and a fan blows from the bottom, lofting you up the tunnel.\n";
                cout << "You get stuck against a screen halfway up, a giant propeller spins on the other side. A net extends below you. The fans stop and you fall into the net.\n";
                cout << "You then get drawn into a room. A school bell rings.... You walk off of the net and into a dingy dirty hall with halogen lighting and wooden walls and floors. \n";
                cout << "After three hours of exploring, you are lost. \n";
                cout << "You shriek and fly down the hall..... You randomly run through doors..... You open a door and are on a catwalk where two pipes, one on each side, merge into one vertically above you.";
                cout << " The catwalk has no rails and is on an inverted Y fitting on the area where it splits. There is a 1000 foot wide 3 blade propeller on each side, about 100 feet below where the catwalk is. Both are motionless. \n";
                cout << "You slip and slide down the right shaft! You slide across the fan blade!!! You free fall in the pit!!! All goes dark... \n\n\n";
                Space_Warp();
            }
            else if (tunnelselect == 3) {
                cout << "The fan suddenly speeds up and blows you away, you swerve to go through the bottom left tunnel, the tunnel curves and twists and turns.";
                cout << " You notice a sharp bend in the tunnel, and a fan blows from the bottom, lofting you up the tunnel.\n";
                cout << "You get stuck against a screen near the top, a large rectangular beam spins behind the grate. A net extends below you. The fans stop and you fall into the net.\n";
                cout << "You then get drawn into a room. You sit on the net and dont know what to do next.......\n";
                cout << "After three hours of exploring, you are lost. \n";
                frustration = frustration + 150;
                cout << "Everything almost resets \n";
                KaiWinn_Warp();
            }
            else if (tunnelselect == 4) {
                cout << "The fan suddenly speeds up and blows you away, you swerve to go through the bottom right tunnel, the tunnel curves gradually right then runs straight for a very long time \n";
                cout << "It curves right again and merges into the main shaft... \n";
                cout << "The 3000 foot fan roars loudly ahead of you. You accelerate towards the fan. There is an awful noise as the blade pitch is reversed on the fan and the fan dumps out!!!\n";
                sleep(3);
                cout << "The tunnel fills with turbulence. You flip end over end over end over end and throw up in a blur.... \n";
                sleep(5);
                cout << "You impact the floor with an ooof noise and begin to slide away from the fan. You hit an beryllium copper alloy pickaxe left in the tunnel!!!!! All fades through white\n\n\n";
                frustration = 9999;
                rage = 50;
                health = 100;
                stamina = 0;
                Basement();
            }
            else {
                cout << "You do not decide quickly enough. The motor suddenly speeds up!!!!! \n\n\n\n";
                cout << "You fly into the center of the divider in between the tunnels. You do not feel it!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n\n\n\n\n";
                Space_Warp();
            }
        }
        else if (giantfans == 5) {
            cout << "You decide that the door cannot safely be opened. You open the wooden door and climb up a few stairs before pedaling a cart down the hall. You reach the end, where a control booth sits.\n";
            cout << "You see a button that says tunnel light, and you hit it. The room floods with light. You see the biggest concrete tunnel you have ever seen. Only a thin glass barrier is between you and the tunnel. A 3000 foot wide three blade fan slowly rotates in the tunnel at a few RPM.\n";
            cout << "You realize that this was what was batting the door shut... \n";
            cout << "You gasp in horror, making an audible gasp noise and fill with white hot dread. You stare at the fan. It spins lazily and seems to do nothing else. You stare at the controls, there is a button that says emergency stop, you press it.\n ";
            cout << "A school bell rings. A computer voice barks indistinct speech. There is a loud noise like thunder, and the motor on the fan emits a huge cloud of smoke.\n";
            cout << "The fan instantly stops, trying to defy physics, and the tunnel and control room seems to hop. The hub disconnects from the motor, and you watch in dread as the fan separates from the motor and falls into the floor, making you deaf...\n";
            cout << "A huge cloud of dust fills the tunnel, then a stiff wind evacuates the dust, there are huge lightning bolts, you do not hear them. There is a giant crater in the tunnel. Suddenly... \n";
            cout << "Everything resets itself \n";
            Space_Warp();
        }
        else {
            cout << "You decide that the door cannot safely be opened. You open the wooden door and look at the dirty stairs and pedal cart...\n";
            cout << "You watch the beam scanning across through the porthole...\n";
            cout << "You look around the hall, walking up and down it... \n";
            frustration = frustration + 100;
            cout << "You give up and use the electric cart to ride uneventfully to the mechanical chase, the motor toils over rough track. \n";
            int represult;
            do {
                represult = jj % 2;
                if (represult == 1) {
                    cout << "The motor speed subtly increases.\n\n";
                }
                else {
                    cout << "The motor speed subtly decreases.\n\n";
                }
                jj = jj + 1;
            }
            while (jj < 10);
            cout << "The motor slows to a stop, you climb the short ladder and are back to safety.";
            innerspace();
        }
    }
    else {
        cout << "You return to the mechanical chase area, avoiding centipedes.\n";
        mech_chase();
}
}
void Room_6(){
    cout << "The room has soft white LED filament bulbs. All bulbs work. \n";
    if (Room_6_State == 0) {
        cout << "This room used to be another suite. There is a bed frame in one corner and a table in the other. \n";
    }
    else if (Room_6_State == 1) {
        cout << "This room used to be another suite. There is a disassembled bed frame in a pile in one corner and a table in the other. \n";
    }
    else {
        cout << "This room used to be another suite. There is a dissasembled bed frame in a pile in one corner and the remains of a table in the other. \n";
    }
    cout << "These are the only objects in the room. The walls are bare, but they have damage from adhesive pads where pictures used to be hung. \n";
    cout << "The ceiling has brown stains, and the room smells very musty and dirty. There is a closet in the corner. The door is jammed. \n";
    frustration = frustration + 8;
    if (frustration > 24 && Room_6_State == 0) {
        cout << "You squeal and cannot focus..... \n";
        sleep(4);
        if (Room_6_State == 0) {
            cout << "You disassemble the bed frame to try to find a clue in vain.... \n";
        }
        else {
            cout << "You blankly stare at the bed frame.... You try to move the pieces around... \n";
        }
        frustration = frustration + 20;
        Room_6_State = 1;
        Hall_1();
    }
    else if (frustration > 50 && Room_6_State == 1) {
        cout << "You squeal and cannot focus..... \n";
        sleep(10);
        cout << "You flip the table over on its side and then smash the table out of rage. Your blood boils.\n";
        sleep(10);
        rage = rage + 30;
        frustration = frustration + 50;
        Room_6_State = 2;
        Hall_1();
    }
    else if (Room_6_State == 2 && rage > 25) {
        cout << "You shriek and cannot focus..... \n";
        sleep(20);
        cout << "You smash the closet door!!!!!!!!! A pile of textbooks falls on you!!!!!!!!!!!!!!!!!!!!!! \n\n\n\n\n";
        sleep(14);
        Space_Warp();
    }
    else {
        cout << "You leave the room because it does not seem important. \n";
        Hall_1();
    }
}
void Room_7(){
cout << "The room has exercise equipment in it. It looks like a multi purpose room. The room is lit with Daylight LEDs. There is a smaller room inside the room. \n";
cout << "It is labeled 107B. Suddenly there is the loud sound of equipment starting up coming from room 107B. The lights briefly dim. You cover your ears. \n";
cout << "There is a check in log by the door. It is blank, as though it was placed there but no one used the temporary gym. \n";
cout << "What do you do? Press 1 to look in 107B, 2 to use the exercise machines, or any other integer to leave. \n";
int Choose107;
cin >> Choose107;
if (Choose107 == 1){
    cout << "The room leads to a fan pit. A gigantic propeller spins just below a grate in the floor. The ceiling is open.\n";
    cout << "The fan lifts you out of the building, and you land in a lake outside the building. You swim to the shore. You are surprisingly not hurt. \n";
    if (stamina > 0) {
        cout << "You walk around the building, there is no exit. The propeller turns off. You then go to the lobby.\n";
        stamina = stamina - 30;
        Lobby();
    }
    else {
        cout << "You slowly limp around the building, there is no exit. The propeller turns off. You then go to the lobby.\n";
        sleep(22);
        Lobby();
    }
}
else if (Choose107 == 2){
    if (stamina > 0) {
        cout << "The exercise machines work, and you get a workout.\n";
        sleep(3);
        stamina = stamina - 256;
        // stress release
        frustration = frustration - 100;
        rage = rage - 10;
        cout << "Your stamina is now " << stamina << endl;
        cout << "You leave the room. The equipment turns off.\n";
        Hall_1();
    }
    else {
        cout << "You are too tired to work out.....\n\n\n";
        sleep(8);
        cout << "You slowly exit \n";
        Hall_1();
    }
}
else {
    cout << "You leave the room. The equipment turns off.\n";
    Hall_1();
}
}
void Room_8(){
    cout << "This room also uses soft white filament LED bulbs. It used to be another suite. This room has a dresser with no drawers, a desk with an old, white computer on it, and a bed with a mattress but no sheets. \n";
    cout << "There is a closet, and there are mold stains on the floor. The ceiling is leaking due to a broken water pipe. This room has a microwave. The door is sheared off, and the inside is ruined. \n";
    cout << "There is a map. You can look at it. The name Donna is on the back of the map. \n";
    if (thought == "Donna") {
        if (Room_8_State == 0) {
            cout << "You become Donna Danielle Rogers! \n";
            cout << "You are no longer " << firstName << " " << lastName << "!!! \n";
            oldFirst = firstName;
            oldLast = lastName;
            firstName = "Donna";
            lastName = "Rogers";
            health = 256;
            attack = 10;
            def = 5;
            thought = "Danielle";
            Room_8_State = 1;
            stamina = 9999;
            frustration = -100;
            rage = -35;
        }
    }
    cout << "There is a picture on the desk. It is of an SLS Rocket launching with a large payload faring. The caption reads Curiosity II Rover Launch, October 2015. \n";
    cout << "What do you do? press 1 to look in the closet, press 2 to look at the map, or press any other integer to leave. \n";
    int Choose108;
    cin >> Choose108;
    if (Choose108 == 1){
        cout << "The closet is empty. There are no boxes or personal belongings of any kind. They must have been removed before the building closed. \n";
        cout << "There are spider webs and spiders in the closet. There are dead bugs on the floor of the closet. There is a hole in the wall of the closet. \n";
        cout << "There is air rushing in the hole. You slowly leave, but the ceiling collapses. You are stuck with a broken leg and a broken arm. \n";
        Space_Warp();
    }
    else if (Choose108 == 2){
        cout << "This is a map of the building. There is an elevator to the basement. It is concealed behind an unlabeled door. \n";
        cout << "There is a place where someone wrote next to the map. It is in a different handwriting. It claims that there is an exit in the basement. \n";
        cout << "You go to the Elevator. \n";
        Elevator();
    }
    else {
        cout << "You leave the room after looking around.\n";
        Hall_1();
    }
}
void Elevator(){
 cout << "You are in the elevator. You press B. \n";
 cout << "The elevator slowly lowers with creaking and banging noises. It bangs to a stop.\n";
 frustration = frustration + 8;
 cout << "The lights flash and strobe while the fan stumbles and fluctuates erratically... \n";
 cout << "The door slowly opens to the basement.... you enter the basement. \n";
Basement();
}
void Basement(){
cout << "The Main Basement has a low ceiling and flickering fluorescent bulbs. It smells like rotten eggs, poop, mold, and trash. There are doors B01 to B08. \n";
cout << "Each door can be entered at any time from the Main Basement by pressing 1 through 8, but none of the rooms are interconnected. \n";
cout << "The ceiling is low engouh that you need to crouch slightly. You hit your head on the lights if you do not crouch. \n";
cout << "There is a warning sign on the wall. YOU CANNOT GO BACK TO THE FIRST FLOOR! THE ELEVATOR IS SHOT!\n";
cout << "It is illegible. You whuf uncontrollably! The basement reeks of rotting food, rotten fish, poop, coal, petroleum, and mold. \n";
cout << "What do you do? \n";
string jibberish = "43my943mct849mw3ct894mw3c8t9m43c89tm4w98ctm4398wcmt89w4mct89w43m8tc9m4w389ctm4389wmct9843mct9834w344c434c4c44c3444rc4c4rc";
string gibberish = "437c4q378w4343w7yw7w34w787wtw4w343w4743w34w43983w4y9w4389wy349389w49m8y98m4398349m8ytc498w9c3884m8mv85m48v7584v8547854444";
cout << "The sign reads:" << endl;
cout << jibberish << "\n" << jibberish.length() << gibberish << "\n";
cout << "with foot note:\n";
cout << jibberish[3] << jibberish[8] << gibberish[5] << jibberish[16] << gibberish[2] << gibberish[7] << jibberish[0] << gibberish[5] << endl;
cout << "There is subtext, it reads \n";
cout << &jibberish << &gibberish << endl;
int KaiWinnChoose;
cin >> KaiWinnChoose;
switch (KaiWinnChoose) {
case 1:
    cout << "This room has what looks like black mold. There are cinder block walls and pipes and machines everywhere. There is an ancient central boiler in the room. \n";
    cout << "It smells of petroleum and coal dust. The mold is not mold, but coal dust. \n";
    cout << "There is a map in the room, you read it. It has illegible scrawl on all of the rooms. It shows a tunnel branching off of room 3.... \n";
    cout << "That has to be the exit! \n";
    cout << "you return to the Main Basement \n";
    Basement();
    break;
case 2:
    cout << "The lights are smashed in this room. You linger a little too long and smell more rotten eggs. The gas is ignited by the lights of the basement. \n";
    cout << "The air explodes....... You dont feel it......\n";
    KaiWinn_Warp();
    break;
case 3: {
    cout << "This room has some shelves in it as well as a door on the far side. The sound of dissonant violins can be heard through the door. \n";
    cout << "The lights are flickering fluorescent bulbs. The room smells of general decay and dirt. There is a desk on the far side. \n";
    cout << "There is nothing on or in it... \n";
    cout << "A door is on one of the walls, it has no handle, you ignore it...\n";
    cout << "You think: This is my way out!   You then go through the door. \n\n\n";
    cout << "The hall is cinder block and dimly lit with old incandescent lamps. The noises are now deafening.\n";
    int bas3num = 0;
        while (bas3num < 9) {
            if (bas3num == 0 || bas3num == 2 || bas3num == 4 || bas3num ==6) {
                cout << "The noises get louder \n";
            }
            else if (bas3num == 1 || bas3num == 3 || bas3num ==5 || bas3num == 7){
                cout << "The noises get softer. \n";
            }
            else {
                cout << "The sound abruptly stops. You Whuf! \n";
                cout << "You run down the hall out of desperation. It goes on infinitely.... The walls stretch and everything begins to fade. \n";
                cout << "There is a loud bang and a white flash. You briefly see your car and your gear........ Then everything goes pitch black and silent. \n";
                cout << "There is a reverse cymbal! \n";
            }
            bas3num = bas3num + 1;
        }
    cout << "After another flash: \n";
    Basement();
    break;
    }
case 4: {
    cout << "This room has electrical control equipment in it. The far wall is metal and circular. There is a view port in it. \n";
    cout << "There is a large propeller in the fan pit that can be seen through the port. It has 8 blades and is off. \n";
    cout << "The lights in this room do not flicker. There is a table with a desk fan on it. It is off as well.\n";
    cout << "There is a small kitchenette in the room with a mini fridge, two microwaves (one fake wood and the other cream colored), a toaster oven, cabinets, a sink, a disposal, a trash can, and a single stove eye \n ";
    cout << "There is a closet in this room, and you take a closer look at it. A filthy, oily work jacket of an older style hangs in the closet. \n";
    cout << "There is nothing in the pockets on it, and the name Clara is written on the tag. There is also a centipede on the floor of the building \n";
    cout << "There is a hole in the wall and dirt is coming into the room. Suddenly a large beetle comes out of the hole. \n";
    cout << "There is also another closet on the far side of the room.\n";
    cout << "Press 1 to attack the beetle, or 2 to look at the other closet, or any other integer to leave.\n";
    int bas4num;
    int fight_scene;
    int beetle_health = 34;
    cin >> bas4num;
    if (bas4num == 1){
        while (true) {
            cout << "You can attack the beetle with a wrench, sledge hammer, or by kicking it. \n press 1 to use the wrench, 2 to kick it, 3 to use a sledge hammer. \n";
            cin >> fight_scene;
            if (fight_scene == 1) {
                cout << "You find a large adjustable wrench. You hit the beetle with it. The beetle's shell is very hard. \n";
                if (stamina > 150 ) {
                    beetle_health = beetle_health - (attack - 4);
                }
                else {
                    beetle_health = beetle_health - (attack - 6);
                }
                cout << "The beetle is hurt \n";
            }
            else if (fight_scene == 2) {
                cout << "You kick the beetle, and it flips. You then kick it again and it flips again. \n";
                if (stamina > 150 ) {
                    beetle_health = beetle_health - attack;
                }
                else {
                    beetle_health = beetle_health - (attack - 3);
                }
                cout << "The beetle is hurt \n";
            }
            else {
                cout << "You hit the beetle, and it is killed.\n";
                beetle_health = beetle_health - 34;
                cout << "The beetle dies. \n";
                break;
            }
            if (beetle_health < 1) {
                cout << "The beetle flips and the legs curl in.\n";
                cout << "The beetle dies. \n";
                break;
            }
            sleep(1);
            cout << "The beetle jumps and flies in a lazy circle, and then flies right at your face at high speed. \n\n\n\n";
            cout << "You stumble in severe pain. You take 10 damage. \n";
            health = health - (10 - def);
            cout << "Your health is: " << health << endl;
            if (health > 0) {
               cout << "The beetle calms down and drops from the air \n";
            }
            else {
                cout << "Game Over! \n";
                break;
            }
        }
        if (health > 0) {
            Basement();
        }
        else {
            cout << "Game Over! \n";
        }
    }
    else if (bas4num == 2) {
        cout << "The other closet has oily rags in it. They are a fire hazard. You shut the door and leave the room avoiding the beetle. \n";
        Basement();
    }
    else {
        cout << "You leave the room, avoiding both the beetle and the other closet. \n";
        Basement();
    }
    break;
}
case 5:
    cout << "The room is disgusting!!!!!!! There are black, brown, green, yellow, and white stains. It smells like poop, rotten fish, chemicals, and mold. \n";
    cout << "You gag on the smell. There is rotten food and rotten beverages in the room. There is a coil on the far side. The fans are off. \n";
    cout << "There is standing water on the floor. You realize...... \n";
    cout << "This was their walk in freezer. The lights barely work. You slam the door and return to the basement. \n";
    Basement();
    break;
case 6:
    cout << "This room has dirt on the floor. You can see into room 104. There is a colony of beetles in this room. They spasm and fly around the lights. \n";
    cout << "The room smells like dirt. It has daylight LEDs. \n";
    cout << "The beetles seem to avoid you. There is no furniture in the room because it has been gutted. The beetles have a pile of rotten food from the freezer. \n";
    cout << "There is a ceiling fan in the room. It is running on low speed. The beetles avoid it. \n";
    cout << "There is a hole in the outside wall and you can see that it leads to a tunnel that the beetles crawl through. \n";
    cout << "You leave seeing that it is of no use. \n";
    Basement();
    break;
case 7:
    cout << "This room has metal walls, a metal floor, and a metal ceiling. There are 2 coils with fans in it. It was their walk in cooler. \n";
    cout << "The room reeks of rotten fish, rotten meat, trash, and mold. There is trash on the floor, and rotten meat on a shelving unit on the wall. The room is full of flies.\n";
    cout << "The coils are covered in ice, yet the cooler is warm. You hear refirgerant hissing in the right coil. The fans are dead. There is nothing of value in this room.\n";
    cout << "you leave.... \n";
    Basement();
    break;
case 8: {
    cout << "This is an empty, gutted room. The Studs and ceiling beams show. There no lights, and the only light is from a small, disgusting window on the far side \n";
    cout << "You hear a noise, and you wait.\n";
    int basrand;
    srand(time(NULL));  // The random sequence is different each time
    basrand = rand() %40 +1; // generates a random number
    if (basrand == 1){
        cout << "The noise stops, you whuf and then leave. \n";
        MyRiserFan.fanspeed = 1;
        Basement();
    }
    else if (basrand == 2){
        cout << "The noise turns into a shriek. The lights go out in the hall. You get thrown in the room. \n";
        cout << "You brace for impact...... \n";
        KaiWinn_Warp();
    }
    else if (basrand == 3){
        cout << "The noise stops, you think that you imagined things. \n";
        cout << "you leave. \n";
        MyRiserFan.fanspeed = 14;
        Basement();
    }
    else if (basrand == 4){
        cout << "The noise turns out to be the fan in 107B. You leave to see it spin. It runs very fast. \n";
        cout << "You look at the room again, and the desk fan now runs as well. \n";
        cout << "The fan turns off, and you leave the room.\n";
        MyRiserFan.fanspeed = 38;
        Basement();
    }
    else if (basrand == 5){
        cout << "The noise stays quiet and indeterminate. You enter the basement hall and put your ear to the floor. \n";
        cout << "Suddenly you are thrown back in time. You see people walking around and talking. They walk through you. \n";
        cout << "You see a woman in a suit walk up to another woman in a Victorian Era dress. They talk to each other and reveal that it is March 15, 2016. \n";
        cout << "Suddenly there are regular explosions and someone yells that there are concussion charges blowing up. \n";
        cout << "Everyone stops and goes into the tornado position. The sounds stop after 15 minutes. Then an evacuation alarm goes off. \n";
        cout << "Everyone goes into room B03 and down the tunnel in there. You stop a man with dark skin and hair in a suit and tie and ask where you are. \n";
        cout << "He does not know where the conference center is located. He claims to have ridden public transit to get to it. That is all he knows.\n";
        if (firstName == "Donna" || firstName == "Diana") {
            cout << "He comments that he is heading home to Chicago to see his family. He asks \" Hey, Danielle! Why are you not leaving? \" and then walks out.\n";
        }
        else if (thought == "Danielle") {
            cout << "He comments that he is heading home to Chicago to see his family. He asks \" Dr. Danielle Rogers! Why are you not leaving? \" and then walks out.\n";
        }
        else {
            cout << "He comments that he is heading home to Chicago to see his family. He asks \" Hey, " << firstName << "! Why are you not leaving? \" and then walks out.\n";
        }
        cout << "You panic, and ask a woman with short, dark hair, an atheletic build, and that is wearing a wedding dress and ask where you are. \n";
        cout << "She answers the Ben Graves Conference Center. You ask where is that? She responds that she does not know. \n";
        cout << "You then ask another woman with long, blonde hair that wears a pants suit where the conference center is. She shows sheets of calculations and formulae. \n";
        cout << "Then she says in a stoic voice, We are in a state of flux between universes but not precisely in any universe. \n It will invert in one hour, and at that time time will reach a singularity there. \n";
        cout << "This is not the Western Pacific Universe! \n\n\n\n You are suddenly in the basement. \n";
        Basement();
    }
    else if (basrand == 6){
        cout << "The noise stops, you whuf and then leave. \n";
        MyRiserFan.fanspeed = 1;
        Basement();
    }
    else if (basrand == 7){
        cout << "The noise stops, you think that you imagined things. \n";
        cout << "you leave. \n";
        MyRiserFan.fanspeed = 1;
        Basement();
    }
    else if (basrand == 8){
        cout << "There is a time singularity. The room fills with blinding blue light. It Explodes, dealing considerable damage. \n";
        health = health - (35 + def - attack);
        cout << "Your health is: " << health << endl;
        if (health > 0) {
            cout << "You limp into the basement \n";
            Basement();
        }
        else {
            cout << "Game Over! \n";
            Space_Warp();
        }
    }
    else if (basrand == 9){
        cout << "The noise stops, you whuf and then leave. \n";
        MyRiserFan.fanspeed = 1;
        Basement();
    }
    else if (basrand == 10){
        cout << "The noise fades out, you stare at the far wall before leaving. \n";
        Basement();
    }
    else if (basrand == 11){
        cout << "The noise becomes loud and then abruptly stops. There is a loud impulsive noise from overhead \n";
        cout << "You leave the room afraid \n" ;
        Basement();
    }
    else if (basrand == 12){
        cout << "The noise stops, you whuf and then leave. \n";
        Basement();
    }
    else if (basrand == 13){
        cout << "The noise stops becomes a low throbbing sound. There are a few bright blue flashes. you leave confused. \n";
        Basement();
    }
    else if (basrand == 14){
        cout << "The noise becomes a hiss. You are gently lifted upwards. \n";
        Room_6();
    }
    else if (basrand == 15){
        cout << "The noise continues, there is a pop sound, and it goes black. You begin to drift sideways.\n";
        Lobby();
    }
    else if (basrand == 16){
        cout << "The noise becomes that of a string orchestra tuning up. You leave.\n";
        Basement();
    }
    else if (basrand == 17){
        cout << "The noise stops. You lift through the ceiling and into the hall on the ground floor. \n";
        Hall_1();
    }
    else if (basrand == 18){
        cout << "The noise fades in and out, a large fly is seen darting around the room and buzzing loudly. You leave. \n";
        Basement();
    }
    else if (basrand == 19){
        cout << "The noise abruptly stops. You become dizzy and fall over. The room does cartwheels... \n";
        Room_1();
    }
    else if (basrand == 20){
        cout << "The noise abruptly stops. You become dizzy and stagger into the basement. You wait for the vertigo to stop. \n";
        Basement();
    }
    else if (basrand == 21){
        cout << "The noise abruptly stops. A beam falls from the ceiling, hits you, and then resets. You take 15 damage... \n";
        health = health - (15 - def);
        cout << "You stagger into the basement... Your health is: " << health << endl;
        if (health > 0) {
            Basement();
        }
        else {
            cout << "Game Over! \n";
            Space_Warp();
        }
    }
    else if (basrand == 22){
        cout << "The noise abruptly stops. You become dizzy and fall over. The room does cartwheels... \n";
        Room_5();
    }
    else if (basrand == 23){
        cout << "The noise abruptly stops. You become dizzy and fall over. The room does cartwheels... \n";
        Room_7();
    }
    else if (basrand == 24){
        cout << "The noise becomes a rumble sound. It then becomes a loud grinding noise. You hide in the room for a long time. The grinding noise fades back to a rumble and then to silence. \n";
        Basement();
    }
    else if (basrand == 25){
        cout << "The noise abruptly stops. You become filled with dread and leave while slamming the door! \n";
        Basement();
    }
    else if (basrand == 26){
        cout << "The noise fades in and out, a large, brown beetle is seen darting around the room and buzzing loudly. You leave. \n";
        Basement();
    }
    else if (basrand == 27){
        cout << "The noise fades in and out, several large flies are seen darting around the room and buzzing loudly. You leave. \n";
        Basement();
    }
    else if (basrand == 28){
        cout << "The noise fades in and out, a large bee is seen darting around the room and buzzing loudly. You leave. \n";
        Basement();
    }
    else if (basrand == 29){
        cout << "The noise fades in and out, a large bee fly is seen darting around the room and buzzing loudly. You leave. \n";
        Basement();
    }
    else if (basrand == 30){
        cout << "The noise fades in and out, a horse fly is seen darting around the room and buzzing loudly. You leave. \n";
        Basement();
    }
    else if (basrand == 31){
        cout << "The noise is a hum and a fan, the hum stops and a soft fan continues, then the hum starts again, you recognize it as a microwave defrosting. \n";
        cout << "You follow the noise around the room and out of the room... \n";
        cout << "You walk to room B04. The fake wood microwave is defrosting on its own. There is a gross glass of water in it. You shrug and enter the basement after the microwave stops defrosting. \n";
        Basement();
    }
    else if (basrand == 32){
        cout << "The noise becomes a rumble sound. It then becomes a loud grinding noise.\n";
        MyRiserFan.PowerOn();
        mech_chase();
    }
    else if (basrand == 33){
        cout << "The noise becomes a rumble sound. It then becomes a loud grinding noise. You hide in the room for a long time. The grinding noise fades back to a rumble and then to silence. \n";
        Basement();
    }
    else if (basrand == 34){
        cout << "The noise sounds like a giant curtain ripping. You press your face against the window. A rocket can be seen launching in the distance... You head to the basement. \n";
        Basement();
    }
    else if (basrand == 35){
        cout << "The noise fades in and out, a large bee is seen darting around the room and buzzing loudly. You leave. \n";
        Basement();
    }
    else if (basrand == 36){
        cout << "The noise fades in and out, a large hornet is seen darting around the room and buzzing loudly. The hornet becomes angry and chases you into the hall... \n\n\n";
        health = health - (5 - def);
        cout << "It stings you!!!!! It then disappears with a pop noise. You take 5 damage. Your health is: " << health << endl;
        if (health > 0) {
            Basement();
        }
        else {
            cout << "Game Over! \n";
            Space_Warp();
        }
    }
    else if (basrand == 37){
        cout << "The noise stays quiet and indeterminate. You enter the basement hall and put your ear to the floor. \n";
        cout << "Suddenly you are thrown back in time. You see people walking around and talking. They walk through you. \n";
        cout << "You see a woman in a suit walk up to another woman in a Victorian Era dress. They talk to each other and reveal that it is March 15, 2016. \n";
        cout << "Suddenly there are regular explosions and someone yells that there are concussion charges blowing up. \n";
        cout << "Everyone stops and goes into the tornado position. The sounds stop after 15 minutes. Then an evacuation alarm goes off. \n";
        cout << "Everyone goes into room B03 and down the tunnel in there. You stop a man with dark skin and hair in a suit and tie and ask where you are. \n";
        cout << "He does not know where the conference center is located. He claims to have ridden public transit to get to it. That is all he knows.\n";
        if (firstName == "Donna" || firstName == "Diana") {
            cout << "He comments that he is heading home to Chicago to see his family. He asks \" Hey, Danielle! Why are you not leaving? \" and then walks out.\n";
        }
        else if (thought == "Danielle") {
            cout << "He comments that he is heading home to Chicago to see his family. He asks \" Dr. Danielle Rogers! Why are you not leaving? \" and then walks out.\n";
        }
        else {
            cout << "He comments that he is heading home to Chicago to see his family. He asks \" Hey, " << firstName << "! Why are you not leaving? \" and then walks out.\n";
        }
        cout << "You panic, and ask a woman with short, dark hair, an atheletic build, and that is wearing a wedding dress and ask where you are. \n";
        cout << "She answers the Ben Graves Conference Center. You ask where is that? She responds that she does not know. \n";
        cout << "You then ask another woman with long, blonde hair that wears a pants suit where the conference center is. She shows sheets of calculations and formulae. \n";
        cout << "Then she says in a stoic voice, We are in a state of flux between universes but not precisely in any universe. \n It will invert in one hour, and at that time time will reach a singularity there. \n";
        cout << "This is not the Western Pacific Universe! \n\n\n\n You notice a door on the side of B03, it is fully open and a spiral staircase can be seen through it. You take the stairs... \n";
        mech_chase();
    }
    else if (basrand == 38){
        cout << "The noise becomes an oboe. You worry and leave. \n";
        Basement();
    }
    else{
        cout << "The noise turns into a suction sound! \n";
        Space_Warp();
    }
    break;
    }
default:
    cout << "Type an integer 1 through 8!!! \n";
    Basement();
}
}
int main() {
cout << "--------------------------------------------------------------- \n";
cout << "Maze Game Version 3.9.0 With Western Pacific Universe\n";
cout << "By FanFan61618\n";
cout << "--------------------------------------------------------------- \n";
cout << "Type your first name ONLY: ";
cin >> firstName;
cout << "Input your last name: ";
cin >> lastName;
cout << "Enter a single word to remember \n";
cin >> thought;
cout << "You are: " << firstName << " " << lastName << " and your memory is " << thought << endl;
cout << "You are out riding your bicycle in the woods after going backpacking, and suddenly you have a flat tire. \n Your cellphone has no signal. You blow your whistle to signal distress but nothing happens... \n";
cout << "You try to hike out of the woods\n";
cout << "The trail abruptly ends!!! \n";
cout << "You try to go another way but everything looks different. \n";
cout << "You hear fans running in the distance, so you go to the noise. \n";
cout << "You have a few flares, some food, camping gear, a flashlight, flint and steel, and hatchet \n";
cout << "You get to an old, beat up building with power, but it is deserted. \n The Air Conditioners are running, and there is a single daylight LED hanging over the porch \n";
cout << "It is late afternoon, so you go into the building. You leave your bicycle in the lobby because it is no longer useful.\n";
Lobby();
    return 0;
}
void Space_Warp(){
    cout << "There is a blinding flash of light and a reversed cymbal crash! \n";
    cout << "Everything has been reset! \n";
    if (firstName == "Donna" && thought == "Danielle") {
        health = 256;
        attack = 10;
        def = 5;
        stamina = 9999;
        frustration = -100;
        rage = -35;
    }
    else {
        // restore nominal health and stamina, better than after backpacking.
        health = 200;
        stamina = 1024;
        rage = 0;
        // you become irritated by reset
        frustration = 50;
    }
    // Restore state variables
    Closet_State = 0;
    Lobby_Fan_State = 0;
    Room_3_State = 0;
    Room_4_State = 0;
    Room_5_State = 0;
    Room_6_State = 0;
    TV_State = 0;
    // Return to the lobby.
    MyRiserFan.fanspeed = 0;
    MyRiserFan.fanpower = false;
    MyRiserFan.estop = false;
    MyRunnerFan.fanspeed = 0;
    MyRunnerFan.fanpower = false;
    MyRunnerFan.estop = false;
    Lobby();
}
void KaiWinn_Warp(){
cout << "There is a blinding flash of light and a reversed cymbal crash! \n";
cout << "Everything has almost been reset! \n";
cout << "You do not have your bicycle, and you are standing somewhere. Your vision is blurry and fuzzy. \n\n\n\n\n\n Your vision clears up partially, enough to walk around safely. \n";
cout << "You see the old, beat up building with power, but it is deserted. \n The Air Conditioners are running, and there is a single daylight LED hanging over the porch \n";
cout << "You feel irritated and frustrated. You no longer know what to think!\n You Enter the building again...... \n";
cout << "You walk through the lobby, noting the fact that your bicycle is still there. \n The light in the pipe chase has exploded. \n You walk into the hall. The fire door at the far end is almost falling apart.\n";
cout << "You notice that the door on room 104 is out of place. It is ajar when it should not be!\n";
cout << "Your vision is fuzzy and your hearing is distorted. You cannot read the signs on the walls.\n";
cout << "You remember the room numbers and perfectly recall them. They are 101 to 110, then 301\n";
cout << "Type 1 to head to the basement, enter a room number to try to enter it, entering invalid input causes a fight. \n";
int althall1;
cin >> althall1;
switch (althall1) {
case 1:
    cout << "Your vision and hearing become normal as you ride the elevator to the basement. \n";
    Basement();
    break;
case 101:
    cout << "You are in a square room. The calendar is illegible and blurry. All lights somehow work and the closet is open. \n";
    cout << "There is a music disk on the only desk in the room, but your eyes cannot focus on it and your head hurts from trying to focus.\n";
    cout << "There is a computer on the desk. It shows a bald tty interface with a terminal prompt. You cannot read the prompt. \n";
    cout << "The filter in this room is plugged, and the room smells like dust and old books. \n";
    cout << "You walk out of the room and cannot think clearly, heading to the basement elevator. \n";
    cout << "Your vision and hearing become normal as you ride the elevator to the basement. \n";
    Basement();
    break;
case 102:
    cout << "This room is in very poor condition. There are multi colored stains on the walls and dirt on the floor. Only one light works. \n";
    cout << "There is a what looks like a closet, but the door does not open............. There is no furniture or items in the room. The window has been boarded with plywood.\n";
    cout << "A very large hole in the floor reveals the boiler room in the basement. Suddenly, a hornet shoots up from the basement at an exceedingly fast speed and hits you in the head. \n";
    cout << "You stagger into the hall from being stunned and dizzy, but you are not stung... \n";
    cout << "You decide that it is safer in the basement, you walk carefully to the elevator.\n";
    cout << "Your vision and hearing become normal as you ride the elevator to the basement. \n";
    Basement();
    break;
case 103:
    cout << "The room is oily pitch black and dead silent. Suddenly the power goes out with a deafening peal of thunder and a painfully bright flash of lightning!!!! \n\n\n";
    cout << "You are dazzled by the flash of light. Your head feels like a semi truck drove over it.\n";
    cout << "Everything resets...";
    Space_Warp();
    break;
case 104:
    cout << "The lights are on. Nothing seems different at first glance. \n The door slams shut. There is a directionless, deafening roar. The lights go out \n";
    cout << "The dogs break through the door, and stampede down the hall. Suddenly there is a suction sound.... \n";
    if (oldFirst != oldLast) {
        cout << "You are no longer Donna Danielle Rogers \n";
    }
    cout << "You are at the camp ground where you started, your phone works! \n";
    cout << "You pack your gear into your car and head home. The End. \n";
    break;
case 105:
    cout << "The room has Daylight LEDs in it that barely produce light. There is kitchen equipment everywhere. The room is greasy and disgusting, and it smells of rotting eggs. \n";
    cout << "There are food service windows linking to room 103. Oily black can be seen through them. \n";
    cout << "A broken beige microwave pulses erratically and noisily in one corner. The light flickers while the fan speed fluctuates unpredictably and the magnetron tries to heat an empty cavity. \n ";
    cout << "There is a deafening, directionless roar. The hall fills with flashes of blue light, like a cop car light. \n";
    cout << "You run into the hall to see the fire doors open and a blinding blue light being eclipsed by black squares. You freak out and run to the basement elevator! \n";
    cout << "Your vision and hearing become normal as you ride the elevator to the basement. A loud mechanical throbbing hum can be heard, then there is a series of blue flashes.\n";
    Basement();
    break;
case 106:
    cout << "The room has soft white LED filament bulbs. All bulbs work. This room used to be another suite. There is a bed frame in one corner and a table in the other. \n";
    cout << "These are the only objects in the room. Your eyes blur so that you cannot resolve any other details. \n";
    cout << "The ceiling is beige but could have a pattern of some sort on it, your eyes cannot focus, and the closet does not open. You find the room useless. Your head throbs and hurts.\n";
    cout << "You leave the room because it does not seem important, heading to the basement, but blue light flashes from behind the fire door... \n";
    cout << "Your vision and hearing become normal as you ride the elevator to the basement. A loud mechanical throbbing hum can be heard, then there is a series of blue flashes.\n";
    Basement();
    break;
case 107:
    cout << "The handle spins in circles while doing nothing. You wonder of you can get the handle to reconnect... \n";
    cout << "You spin and spin and spin the handle, spinning it faster and pushing it in and out. You decide it is useless, and head to the basement. \n";
    cout << "Your vision and hearing become normal as you ride the elevator to the basement. There is an explosion noise, and the elevator rocks. \n";
    Basement();
    break;
case 108:
    cout << "The handle moves one eighth turn in each direction before stopping. The door is locked... You head to the basement. \n";
    cout << "Your vision and hearing become normal as you ride the elevator to the basement. A loud mechanical throbbing hum can be heard, you listen and wonder what it is.\n";
    Basement();
    break;
case 109:
    cout << "This was an old suite. It is like a time capsule. It looks unused since 1999, and there is a May 1999 NASA Calendar on the wall. \n";
    cout << "Your vision unblurs and you hear normal, the floor makes a lifting motion \n";
    cout << "There is briefly a few blue flashes like a cop car in the hall, then a whoosh noise like a hydraulic valve slowly opening under pressure... \n";
    cout << "The closet is open and there are very dusty tuxedos hanging in the closet. Only one bulb works. There are model sports cars on the dresser \n";
    cout << "The floor is covered in baseball cards. Some teams are very different. There is a full set of Constantinople Wildcats cards, as well as a \n";
    cout << "full set of San Juan Eagles cards. \n";
    cout << "You leave the room, it is not a way out. \n";
    Hall_1();
    break;
case 110:
    cout << "This room was another suite. The closet door is on the ground in front of the closet. The closet is rotting on the inside and has peeling paint. \n";
    cout << "There is a few books on the wall. The name in one is Nora Helmer. The room is disgusting despite containing no other personal belongings except a desk and a picture. \n";
    cout << "You try to make sense of the room, trying and trying, then realize that the solution is the elevator! \n";
    cout << "You realize that this is your way out! \n";
    cout << "The map shows the location of the elevator. You recall that you used it before. You head to it. \n";
    cout << "The elevator rockets into the sky, pulling 5 times the acceleration of gravity! \n";
    cout << "It reaches space, and you run out of oxygen and die... Game Over!\n";
    Space_Warp();
    break;
case 301:
    cout << "This is a large, almost empty room. A violin and bow lay in one corner, and there are piles of desks and chairs in the other corner. \n";
    cout << "The room is covered in brown and yellow stains on the floor, walls, and ceiling. The floor looks like someone threw up on it. Your vision and hearing clear up. \n";
    cout << "The fixtures are from the 1950s and have harsh 6700K fluorescent tubes in them. \n";
    cout << "There is a door on the wall with the fire door, it is open. A blinding blue light flashes inside it. \n";
    cout << "You look in the room to see the time singularity in the center with black cubes flying around it. One of the cubes hits you and knocks you into the hall before you went to the basement. \n";
    Hall_1();
    break;
default: {
    cout << "The dogs break through the fire door, they rush at you and push you backwards. One of the dogs engages you in turn based combat... \n\n\n";
    sleep(5);
    int battle_1;
    int dog_health = 56;
    int turns_used = 0;
    while (turns_used < 6) {
        cout << "Press 1 to Hit the dog with a sledge hammer, 2 to kick the dog, 3 to use a flare, 4 to use your hatchet. You have a maximum of 6 turns \n";
        cin >> battle_1;
        if (battle_1 == 1) {
            cout << "You use a sledge hammer. The dog flashes red.\n";
            if (stamina > 150 ) {
                dog_health = dog_health - 34;
            }
            else {
                dog_health = dog_health - 22;
            }
            cout << "The dog flashes red. \n";
        }
        else if (battle_1 == 2) {
            cout << "You kick the dog. It flashes red.\n";
            if (stamina > 150 ) {
                dog_health = dog_health - attack;
            }
            else {
                dog_health = dog_health - (attack - 3);
            }
            cout << "The dog does not flash red. \n";
        }
        else if (battle_1 == 3) {
            cout << "You shoot a flare at the dog. It flashes red.\n";
            dog_health = dog_health - 40;
            cout << "The dog flashes red. \n";
        }
        else {
            cout << "You swing your hatchet through the dog. The hatchet passes through the dog without resistance... \n The dog does not appear to have any damage or wounds and is clean. The dog freezes. \n";
            cout << "The dog becomes holographic and fades out of existence. There is a pop noise. \n";
            dog_health = dog_health - 56;
            cout << "The dog does not exist. \n";
            break;
        }
        if (dog_health < 1) {
            cout << "The dog fades out of existence with a pop.\n";
            cout << "The dog no longer exists. \n";
            break;
        }
        sleep(1);
        turns_used = turns_used + 1;
        cout << "The dog growls and snarls and paws at the ground. It runs at you and clamps its jaw on your leg. It releases and leaves no marks or visible damage. \n\n\n\n";
        cout << "You grimace in excruciating pain. You take 25 damage. The dog ignores your defenses.\n";
        health = health - 25;
        cout << "Your health is: " << health << endl;
        if (health > 0) {
            cout << "The dog calms down. \n";
        }
        else {
            cout << "There is a pop noise and everything resets. \n";
            Space_Warp();
            break;
        }
    }
    if (oldFirst != oldLast) {
        cout << "You are no longer Donna Danielle Rogers \n";
    }
    cout << "You are at the camp ground where you started, your phone works! \n";
    cout << "You pack your gear into your car and head home. The End. \n";
    break;
}
}
}
