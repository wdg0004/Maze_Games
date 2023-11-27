#include <iostream> // for cin and cout
#include <string> // used to process strings
#include <stdlib.h> // required for random numbers
#include <time.h> // required for random numbers
#include <stdio.h> // required for random numbers
#include <windows.h> // required for Sleep
using namespace std;  // This is a comment.
/*
Array Building v 1.7.0
Maze game that passes an array!
*/
class player_1 { // class of player information, cannot be directly constructed, see below
private: // health information is private under federal and state laws
    int health; // ability rating
public:
    void setHealth(int H) {
        health = H;
    }
    int GetHealth() {
    return health;
    }
    string F_Name;
    string L_Name;
    int hunger; // hunger
    int frustration; //player frustration

};
// let's derive a class off of the main class. Note that this prevents the main class from having an object built ONLY in it as well as from having a constructor
class torch_light: public player_1 { // the child class. torch_light object1 is actually an object with both torch_light and player_1 attributes.
public:
    int nag = 0;
    int Item_inv_0 = 0;
    torch_light(string a, string b, int d, int eee){ // The constructor. It has to be of class torch_light to construct a player_1 + torch_light object.
    F_Name = a; // this is in player_1, yet it is called in torch_light, cool!
    L_Name = b;
    hunger = d;
    frustration = eee;
    }

};
void Area_1 (int torch_A, int B, string C){ // diverging route
 cout << "You turn left. \n";
 cout << "You walk about 1/4 of a block. Nothing.... \n";
 Sleep(1500);
 cout << "You walk another 1/4 of a block. Nothing... \n";
 Sleep(1500);
 cout << "You walk another 1/4 of a block. Nothing... \n";
 Sleep(1500);
 torch_A = torch_A + 6;
 cout << "You walk another 1/4 of a block. Nothing... \n";
 Sleep(1500);
 cout << "You walk another 1/4 of a block. Nothing... \n";
 Sleep(1500);
 cout << "You walk another 1/4 of a block. Nothing... \n";
 Sleep(1500);
 cout << "You walk another 1/4 of a block. Nothing... \n";
 Sleep(1500);
 torch_A = torch_A + 7;
 cout << "You walk another 1/4 of a block. Nothing... \n";
 Sleep(1500);
 cout << "You begin to get frustrated..... \n";
 Sleep(2500);
 cout << "Keep Going? 0 is no, 1 is yes \n";
 int naag; // control for the diverging route.
 int asdf;
 asdf = torch_A;
 cin >> naag;
 if (naag == 0){ // the second chance
    cout << "You turn around. \n";
    Sleep(8000);
    cout << "Your flare burns out. You light another one. \n";
    cout << "You have " << B << " flares. \n";
    cout << " From the start, going the opposite direction... \n";
    cout << "You walk about 1/4 of a block. Nothing.... \n";
    Sleep(1500);
    cout << "You walk another 1/4 of a block. Nothing... \n";
    Sleep(1500);
    cout << "This street is actually a driveway. It connects to the main road. \n";
    cout << "You turn right.\n";
    cout << "You walk up to a blue sedan. It flashes and signals at you to get in it. You try the door. It is unlocked.\n";
    cout << "The car is self driving. It says: Hello, " <<  C << ". Where do you want to go? \n";
    cout << "You respond with \"VBC Concert Hall, Huntsville, AL\". It takes you there.";
    cout << "Everything resets and you enjoy the concert. The End! \n";
 }
 else if (naag == 1) { // loss
cout << "You keep going that direction in an infinite loop.................................. \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

 }
 else { // old school decision point that recalls function recursively
    cout << "Type 0 or 1!!! \n";
    Area_1(asdf, B, C);
 }
}
int main () {
cout << "----------------------------------------------------------------------------- \n";
    cout << "Class Building 1.5.0 \n";
    cout << "This is a linear game. You cannot return to previous areas.\n";
    cout << "-------------------------------------------------------------------------------\n";
string firstName; // create a user using their first name. Ex: Maria
string lastname; // the user's last name. Ex: Fernandez
cout << "Type your first name ONLY: ";
cin >> firstName;
cout << "Input your last name: ";
cin >> lastname;
torch_light Playerobj1(firstName, lastname, 0, 0); // this creates the torch_light object for the player
Playerobj1.setHealth(256); // Health information is private, so a special form is used. This is called a setter.
cout << "You are: " << Playerobj1.F_Name << " " << Playerobj1.L_Name << endl;
cout << "You are at the VBC Mark C Smith Concert Hall. You are using the bathroom during intermission. The power goes out. \n";
cout << "There is the dull thud of an antimatter concussion charge exploding. Your head hurts. Suddenly there is a reversed cymbal crash! \n";
cout << "There is a blinding flash of light! \n"; // setup
Sleep(2000);
cout << "You are inside a cooling tower! The fan is spinning and there is water in it. \n";
cout << "You have a backpack with you! You take inventory \n";
Sleep(2000);
int ItemInv[7] = {5,3,8,4,6,1,1}; // from the array building
cout << "You have " << ItemInv[0] << " flares. \n";
cout << "You have " << ItemInv[1] << " water bottles. \n";
cout << "You have " << ItemInv[2] << " AA batteries. \n";
cout << "You have " << ItemInv[3] << " bags of trail mix. \n";
cout << "You have " << ItemInv[4] << " meat bars. \n";
cout << "You have " << ItemInv[5] << " hatchet. \n";
cout << "You have " << ItemInv[6] << " flashlight. \n";
Playerobj1.Item_inv_0 = ItemInv[0];
cout << "There is a door in front of you \n";
cout << "What do you do? Press 1 to hit the door, 2 to use the hatchet \n"; // first decision point
int i = 0; // loop control variable
int daytime = 1; // time of day in game
int choose_A;
while (i < 5) {
    cin >> choose_A;
    if (choose_A == 1) { // leads to frustration
        cout << "The door does not open! \n";
        cout << "Try again! \n";
        Playerobj1.frustration = Playerobj1.frustration + 1;
        if (Playerobj1.frustration > 45){
            cout << "You get frustrated and cannot focus. \n";
            Sleep(10000);
            daytime = daytime + 10;
        }
    }
    else if (choose_A == 2) {
        cout << "The door opens! \n"; // solution
        i = 10;
        daytime = daytime + 5;
    }
    else {
        cout << "Type 1 or 2 !!!!!!!!!! \n"; // results in frustration
        Playerobj1.frustration = Playerobj1.frustration + 1;
    }
}
Playerobj1.hunger = Playerobj1.hunger + 5; // the player's hunger increases in specific intervals
cout << "You are on a rooftop. There are air conditioners on the roof. You are in a big city in the desert.\n";
cout << "It is early spring and it is neither warm nor cold. The sun is low in the sky. \n"; // bridge
cout << "You look for a roof hatch.\n";
int randnum1; // random integer from 1 to 10
srand(time(NULL));  // The random sequence is different each time
randnum1 = rand() %10 +1; // generates a random number
int slptime;
slptime = randnum1 * 1000; // determines the outcome of the light scene.
Sleep(slptime);
daytime = daytime + randnum1;
cout << "You find the hatch. It goes to a dark stairwell. The door slams! \n";
cout << "What do you do? Press 1 to light a flare, 2 to use a flashlight, \n";

int light_1; // light scene
// int nag = 0; // torch status - in class definition
int torch = 0; // torch timer
i = 0; // reset control
Playerobj1.hunger = Playerobj1.hunger + 5;
while (i < 5) {
    cin >> light_1;
    if (light_1 == 1) {
    cout << "You are holding a flare, the stairwell is lit with an orange light \n";
    Playerobj1.Item_inv_0 = Playerobj1.Item_inv_0 - 1;
    cout << "You have " << Playerobj1.Item_inv_0 << " flares. \n";
    Playerobj1.nag = 1; // torch is in use
    torch = daytime; // begin timing
    i = 10;
}
else if (light_1 == 2) {
    cout << "You dig in your bag to find the flashlight. \n";
    Sleep(3500);
    if (randnum1 < 5) {
        cout << "You find the flashlight! it works. The stairwell is light with a harsh blue light. \n";
        i = 10; // torch is not used, nag is zero and timer does not time.
    }
    else if (randnum1 > 5) {
        cout << "You accidentally knock the flashlight down the stairs. It shatters. \n";
        ItemInv[6] = 0;
        Playerobj1.frustration = Playerobj1.frustration + 35; // extremely frustrating
        cout << "That was your only flashlight! \n";
        cout << "You light a flare to see. \n";
        torch = daytime;
        Playerobj1.Item_inv_0 = Playerobj1.Item_inv_0 - 1;
        if (Playerobj1.frustration > 45){
            cout << "You get frustrated and cannot focus. \n"; // will not always be benign
            Sleep(10000);
            daytime = daytime + 10; // time is lost
        }
        i = 10;
        cout << "You have " << Playerobj1.Item_inv_0 << " flares. \n";
        Playerobj1.nag = 1;
    }
    else {
        cout << "The flashlight malfunctions and produces a flash of light. \n"; // frustrating
        cout << "Try Again! \n";
        Playerobj1.frustration = Playerobj1.frustration + 5;
        if (Playerobj1.frustration > 45){
            cout << "You hurl the flashlight and scream!!!!\n\n\n\n\n"; // ruins flashlight
            ItemInv[6] = 0;
            Sleep(3500);
            cout << "That was your only flashlight! \n";
            cout << "You light a flare to see. \n";
            torch = daytime;
            Playerobj1.Item_inv_0 = Playerobj1.Item_inv_0 - 1;
            Sleep(10000);
            daytime = daytime + 10;
            cout << "You have " << Playerobj1.Item_inv_0 << " flares. \n";
            Playerobj1.nag = 1;
            i = 10;
        }
    }
}
else {
    cout << "Type 1 or 2 !!!!!!!!!!!! \n";
    Playerobj1.frustration = Playerobj1.frustration + 1;
}
}
cout << "You walk down the stairs. There is a door at the bottom of the stairs. You open it. \n";
cout << "The building is disgusting with brown stains and exploded light bulbs. There is water on the floor. You look down the halls. \n"; // enter into building
cout << "Nothing..... \n";
Playerobj1.hunger = Playerobj1.hunger + 5;
daytime = daytime + 5;
cout << "press 1, 2, or 3 for halls 1, 2, or 3! \n";
i = 0;
int Choose_X;
while (i < 5){
    cin >> Choose_X;
    if (Choose_X == 1){
    cout << "There are collapsed beams in this hall. You walk back to the junction. \n";
    daytime = daytime + 5;
    }
    else if (Choose_X == 2){
    cout << "This hall has doors on both sides. You try each door.... \n"; // eats time, food, and flares
    daytime = daytime + 40;
    Sleep(10000);
    Playerobj1.hunger = Playerobj1.hunger + 20;
    cout << "The time was compressed. All doors were locked. The doors are steel and cannot be opened. \n";
    if (Playerobj1.hunger > 50) {
        if (ItemInv[4] > 0){
            cout << "You eat a meat bar.\n";
            ItemInv[4] = ItemInv[4] - 1;
            cout << "You have " << ItemInv[4] << " meat bars. \n"; // hunger is checked
            Playerobj1.hunger = 0;
        }
        else {
            cout << "You eat a bag of trail mix.\n";
            ItemInv[3] = ItemInv[3] - 1;
            cout << "You have " << ItemInv[3] << " bags of trail mix. \n"; // hunger is checked
            Playerobj1.hunger = 0;
        }
    }
    if (Playerobj1.nag == 1 && (torch + 60) < daytime){
        cout << "Your flare goes out! \n";
        cout << "You light another flare! \n";
        Playerobj1.Item_inv_0 = Playerobj1.Item_inv_0 - 1;
        cout << "You have " << Playerobj1.Item_inv_0 << " flares. \n";
        torch = daytime;
    }
    }
    else if (Choose_X == 3){
    cout << "This leads to the stairwell.\n"; // solution
    i = 234;
    daytime = daytime + 10;
    Playerobj1.hunger = Playerobj1.hunger + 5;
    }
    else {
        cout << "Type 1, 2, or 3!!! \n";
        Playerobj1.frustration = Playerobj1.frustration + 1;
        if (Playerobj1.frustration > 45){
            cout << "You get frustrated and cannot focus. \n";
            Sleep(10000);
            daytime = daytime + 10;
        }
    }

}
cout << "There are no lights in the stairs. They have exploded. There is shattered glass on the floor. \n";
if (Playerobj1.hunger > 50) {
       if (ItemInv[4] > 0){
            cout << "You eat a meat bar.\n";
            ItemInv[4] = ItemInv[4] - 1;
            cout << "You have " << ItemInv[4] << " meat bars. \n"; // hunger is checked
            Playerobj1.hunger = 0;
        }
        else {
            cout << "You eat a bag of trail mix.\n";
            ItemInv[3] = ItemInv[3] - 1;
            cout << "You have " << ItemInv[3] << " bags of trail mix. \n"; // hunger is checked
            Playerobj1.hunger = 0;
        }
}
if (daytime > 60){
    cout << "It is now dark outside. \n"; // time solution is determined
}
cout << "You walk down several flights of stairs. The lowest level is B, above it is 1. You exit the stairs at 1. \n";
cout << "There are less stains and everything is in decent condition. \n";
cout << "The lights still do not work. They are not shattered. Why do they not work? \n"; // first floor begins
Sleep (3500);
daytime = daytime + 5;
Playerobj1.hunger = Playerobj1.hunger + 5; // bridge
int used_torch = 0;
cout << "You find the light switch. The lights fill the hall with a yellow white glow. \n";
if (Playerobj1.nag == 1){
    cout << "Your flare burns out.\n"; // flashlight solution is confirmed
    Playerobj1.nag = 0;
    torch = daytime;
    used_torch = 1;
}
cout << "There are doors along the hall. Starting at the stairwell, \n"; // these doors have institutional handles with an auto lock mechanism, like NCTHS and some UAH doors
cout << "The first door is locked. \n";
cout << "The second door is locked. \n";
Sleep(1500);
daytime = daytime + 3;
Playerobj1.hunger = Playerobj1.hunger + 1;
cout << "The third door is locked. \n";
cout << "The fourth door is locked. \n";
Sleep(1500);
daytime = daytime + 3;
Playerobj1.hunger = Playerobj1.hunger + 1;
cout << "The fifth door is locked. \n";
cout << "The sixth door is locked. \n";
Sleep(1500);
daytime = daytime + 3;
Playerobj1.hunger = Playerobj1.hunger + 1;
cout << "The seventh door is locked. \n";
cout << "The eighth door is locked. \n";
Sleep(1500);
daytime = daytime + 3;
Playerobj1.hunger = Playerobj1.hunger + 1;
cout << "The ninth door is locked. \n";
cout << "The tenth door is locked. \n";
Sleep(1500);
daytime = daytime + 3;
Playerobj1.hunger = Playerobj1.hunger + 1;
cout << "There is a split in the hall, which way do you go? Press 0, 1, or 2 \n"; // this is the same from Array Building except 2 does not end the game
i = 0;
int choose_E;
while (i < 5) {
    cin >> choose_E; // burns time and hunger
    if (choose_E == 0){
        cout << "This is a dead end hall. \n";
cout << "The first door is locked. \n";
cout << "The second door is locked. \n";
Sleep(1500);
Playerobj1.hunger = Playerobj1.hunger + 1;
cout << "The third door is locked. \n";
cout << "The fourth door is locked. \n";
Sleep(1500);
Playerobj1.hunger = Playerobj1.hunger + 1;
cout << "The fifth door is locked. \n";
cout << "The sixth door is locked. \n";
Sleep(1500);
cout << "You walk back to the split \n";
daytime = daytime + 5;

    }
    else if (choose_E == 1) {
    cout << "This is the exit. \n"; // solution, see if statement following loop.
    i = 20;
    }
    else if (choose_E == 2) {
       cout << "This route leads to a cafeteria. It reeks of poop, fish, rotten eggs, rotten meat, and freon. You have enough sense not to stay. \n";
        cout << "You walk back to the split. \n"; // no explosion here, explode is removed from code.
    }
    else{
        cout << "Type 0, 1, or 2!!!!!! \n\n\n";
        Playerobj1.frustration = Playerobj1.frustration + 4;
        if (Playerobj1.frustration > 45){
            cout << "You get frustrated and cannot focus. \n"; // first level of frustration
            Sleep(10000);
            if (Playerobj1.frustration > 65) { // second level of frustration
                cout << "You make a rash decision. \n";
                cout << "You run down option 2. The cafeteria smells like poop, fish, rotten eggs, rotten meat, and freon. The lights are off. \n";
                cout << "You accidentally drop your hatched. It sparks..... \n";
                cout << "Everything goes black.\n"; // an explosion
                i = 10;
                Playerobj1.setHealth(10); // ends the game by refilling the health setter form to 10.
                daytime = 12345; // this is about 2 days of time
                Sleep(15000);
                cout << "Two days pass. \n";
                  cout << "you have very low health.\n";
        ItemInv[0] = 0;
        ItemInv[1] = 1;
        ItemInv[2] = 0;
        ItemInv[3] = 1;
        ItemInv[4] = 1;
        ItemInv[5] = 1;
        ItemInv[6] = 0;
        cout << "You have " << ItemInv[0] << " flares. \n";
        cout << "You have " << ItemInv[1] << " water bottles. \n";
        cout << "You have " << ItemInv[2] << " AA batteries. \n";
        cout << "You have " << ItemInv[3] << " bags of trail mix. \n";
        cout << "You have " << ItemInv[4] << " meat bars. \n";
        cout << "You have " << ItemInv[5] << " hatchet. \n";
        cout << "You have " << ItemInv[6] << " flashlight. \n";
        cout << "You walk to the exit of the cafeteria. Everything is shattered or burned. \n";
        cout << "You walk with a limp and you go down option 1. It is the exit.... \n\n\n";
            }
            daytime = daytime + 10;
        }
    }
}
if (Playerobj1.GetHealth() > 100 && daytime < 900){ // This is the solution. Note that a special getter function must be used to retrieve private health data.
    if (Playerobj1.hunger > 50) {
       if (ItemInv[4] > 0){
            cout << "You eat a meat bar.\n";
            ItemInv[4] = ItemInv[4] - 1;
            cout << "You have " << ItemInv[4] << " meat bars. \n"; // hunger is checked
            Playerobj1.hunger = 0;
        }
        else {
            cout << "You eat a bag of trail mix.\n";
            ItemInv[3] = ItemInv[3] - 1;
            cout << "You have " << ItemInv[3] << " bags of trail mix. \n"; // hunger is checked
            Playerobj1.hunger = 0;
        }
    }
    if (daytime > 60){
    cout << "It is now dark outside. \n";
    cout << "You need a light to see as there is no streetlights. \n";
    if (used_torch == 0){
        cout << "You use your flashlight. You can see. \n";
        cout << "You are in a fenced in area. You cannot climb the fence. You look for an exit. \n";
    cout << "You look directly across from the door, nothing! \n";
    Sleep(1500);
    cout << "You look at the wall to the right of the door. There is a gate. You hit it with your hatchet. It opens. \n";
    cout << "You are standing on a street. It is empty. You Worry. \n";
    cout << "It is silent except for the noises of cooling towers and a distant train horn. \n";
    cout << "You see a blue sedan nearby. It drives itself! It sees your flashlight and comes to you! \n";
    cout << "You get in the sedan. It is very basic on the inside. It robotically starts driving \n";
    cout << "You are back at the concert hall. Everything is normal. The End! \n";
    }
    else { // alt solution 2
        cout << "You light a flare to see \n";
        Playerobj1.Item_inv_0 = Playerobj1.Item_inv_0 - 1;
        cout << "You have " << Playerobj1.Item_inv_0 << " flares. \n";
        Playerobj1.nag = 1;
        torch = 0;
        cout << "You are in a fenced in area. You cannot climb the fence. You look for an exit. \n";
    cout << "You look directly across from the door, nothing! \n";
    Sleep(1500);
    daytime = daytime + 5;
    cout << "You look at the wall to the right of the door. There is a gate. You hit it with your hatchet. It opens. \n";
    cout << "Your vision is limited by the weak light of the flare. \n"; // the flare is too dim to see distance.
    cout << "Type 1 to head one way and 2 to head the other way. \n";
    int j = 0;
    int walk;
    while (j == 0) {
        cin >> walk;
        if (walk == 1) {
            cout << "You walk about 1/4 of a block. Nothing.... \n";
            Sleep(1500);
            cout << "You walk another 1/4 of a block. Nothing... \n"; // this is the solution.
            Sleep(1500);
            cout << "This street is actually a driveway. It connects to the main road. \n";
            torch = torch + 5;
            cout << "You turn right.\n";
            cout << "You walk up to a blue sedan. It flashes and signals at you to get in it. You try the door. It is unlocked.\n";
            cout << "The car is self driving. It says: Hello, " <<  Playerobj1.F_Name << ". Where do you want to go? \n";
            cout << "You respond with \"VBC Concert Hall, Huntsville, AL\". It takes you there.";
            cout << "Everything resets and you enjoy the concert. The End! \n";
            j = 1;

        }
        else if (walk == 2) { // this diverges away from the solution, but there is a second chance.
            cout << "You walk about 1/4 of a block. Nothing.... \n";
            Sleep(1500);
            cout << "You walk another 1/4 of a block. Nothing... \n";
            Sleep(1500);
            j = 1;
            cout << "This street is actually a driveway. It connects to the main road. \n";
            torch = torch + 6;
            Area_1(torch, Playerobj1.Item_inv_0, Playerobj1.F_Name);
        }
        else {
            cout << "Input 1 or 2!!!! \n\n\n\n\n\n";
        }
    }
    }
    }
    else { // alt solution 1
    cout << "There is still light outside. \n";
    cout << "You are in a fenced in area. You cannot climb the fence. You look for an exit. \n";
cout << "You look directly across from the door, nothing! \n";
Sleep(1500);
cout << "You look at the wall to the right of the door. There is a gate. You hit it with your hatchet. It opens. \n";
cout << "You are standing on a street. It is empty. You Worry. \n";
cout << "It is silent except for the noises of cooling towers and a distant train horn. \n";
cout << "You see a blue sedan in the distance. You run to it. It drives itself! \n";
cout << "You get in the sedan. It is very basic on the inside. It robotically starts driving \n";
cout << "You are back at the concert hall. Everything is normal. The End! \n";
    }

}
else { // loss
cout << "You are in a fenced in area. You cannot climb the fence. You look for an exit. \n";
cout << "You look directly across from the door, nothing! \n";
Sleep(1500);
cout << "You look at the wall to the right of the door. There is a gate. You hit it with your hatchet. It opens. \n";
cout << "You are standing on a street. It is empty. You Worry. \n";
cout << "It is silent except for the noises of cooling towers and a distant train horn. \n";
cout << "It is warm and there are no clouds in the sky. \n";
cout << "There is a blue sedan a few blocks down the street, you run to it. \n";
    cout << "You run but quickly become discoordinated and fall.\n";
    cout << "You cannot get up fast enough. The sedan disappears. \n";
    cout << "You walk back to the building. You are dehydrated but have no water. You eat your only trail mix bag \n";
    ItemInv[3] = 0;
    cout << "You go inside the building. You look inside the men's bathroom. \n";
    cout << "the sink produces brown water. \n";
    Sleep(12000);
    cout << "The water is disgusting. Your head hurts. You pass out. \n";
    cout << "Game Over \n";

}
 return 0;
}
