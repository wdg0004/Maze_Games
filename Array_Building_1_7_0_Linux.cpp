#include <iostream> // for cin and cout
#include <string> // used to process strings
#include <stdlib.h> // required for random numbers
#include <time.h> // required for random numbers
#include <stdio.h> // required for random numbers
#include <unistd.h> // Unix Standard
using namespace std;  // This is a comment.
/*
Array Building v 1.7.0
Maze game that passes an array!
*/
// Citation: https://stackoverflow.com/questions/158585/how-do-you-add-a-timed-delay-to-a-c-program
void whuf(int a, int b);
void nag(){
cout << "You walk into the building. You realize that the car was your only way out. \n";
cout << "You go back outside but the car is gone! You realize that you have to live in the desert. \n";
cout << "You walk back into the building. You hope that there is another exit. \n";
int randnum2;
srand(time(NULL));  // The random sequence is different each time
randnum2 = rand() %10 +1; // generates a random number
cout << "You start trying random doors \n";
cout << "The number " << randnum2 << " door opens. \n";
cout << "There is a computer in the room. You walk to it. It has a command line. \n";
int guess_1;
guess_1 = 145;
while (guess_1 != randnum2) {
        cout << "Guess an integer between 1 and 10. \n";
    cin >> guess_1;
    if (guess_1 == randnum2){
            cout << "You are suddenly at the concert hall during intermission. Everything is normal. You feel fine. \n";
    cout << "You head home after the concert. The End. \n";
    }
    else {
        cout << "Error! \n";
    }
}
}
void whoops(int c, int d){
cout << "The car goes back to the desert and then disappears! \n";
cout << "You are trapped! \n";
int waittime;
waittime = (3 + c + d);
sleep(waittime);
cout << "You look around. You find the building that you were lost at. \n";
cout << "You go inside the building and then exit again. \n";
cout << "The car is back. What do you do? press 1 to go to the car, press 2 to stay. \n";
int choosew;
cin >> choosew;
if (choosew == 1) {
    cout << "The car starts do drive. You are then teleported back to the civic center restroom. \n";
    whuf(c, d);
}
else {
    nag();
}
}
void whuf(int a, int b){
cout << "There is a weird noise. You walk into the lobby. It is empty. \n";
cout << "The power goes out \n";
if (a > 0) {
    cout << "You light a flare to see. \n";
    a = a - 1;
    cout << "You have " << a << " flares \n";
}
else {
    if (b == 1){
            cout << "You use your flashlight to see. \n";
    }
    else {
        cout << "You grope in the dark for the exit. It takes you 15 minutes to find the exit. \n";
    }
}
cout << "You walk outside. The street is empty. The buildings have no lights on. There are no streetlights. It is midnight.\n";
cout << "You throw your hatchet, it curves like a boomerang! \n";
cout << "You see the car. Do you get in it? 1 is yes, 0 is no.";
int carr;
cin >> carr;
if (carr == 0){
    cout << "\n There is a tornado. You get thrown into the pond at big spring park.\n";
    cout << " You swim to the shore. Everything is normal. You get in your car and drive home. \n";
    cout << "The end!";
}
else {
whoops(a, b);
}
}

int main() {
    cout << "----------------------------------------------------------------------------- \n";
    cout << "Array Building 1.7.0 \n";
    cout << "This is a linear game. You cannot return to previous areas.\n";
    cout << "-------------------------------------------------------------------------------\n";
    string firstName;
    cout << "Type your first name ONLY: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName << "\n";
cout << "You are at the VBC Mark C Smith Concert Hall. You are using the bathroom during intermission. The power goes out. \n";
cout << "There is the dull thud of an antimatter concussion charge exploding. Your head hurts. Suddenly there is a reversed cymbal crash! \n";
cout << "There is a blinding flash of light! \n";
sleep(2);
int hunger;
hunger = 0;
int health;
health = 256;
cout << "You are inside a cooling tower! The fan is spinning and there is water in it. \n";
cout << "You have a backpack with you! You take inventory \n";
sleep(2);
int ItemInv[7] = {5,3,8,4,6,1,1};
cout << "You have " << ItemInv[0] << " flares. \n";
cout << "You have " << ItemInv[1] << " water bottles. \n";
cout << "You have " << ItemInv[2] << " AA batteries. \n";
cout << "You have " << ItemInv[3] << " bags of trail mix. \n";
cout << "You have " << ItemInv[4] << " meat bars. \n";
cout << "You have " << ItemInv[5] << " hatchet. \n";
cout << "You have " << ItemInv[6] << " flashlight. \n";
cout << "There is a door in front of you \n";
cout << "What do you do? Press 1 to hit the door, 2 to use the hatchet \n";
int i = 0;
int choose_A;
// basic while loop - does not need to end with loop as an Arduino while loop does
while (i < 5) {
    cin >> choose_A;
    if (choose_A == 1) {
        cout << "The door does not open! \n";
        cout << "Try again! \n";
    }
    else if (choose_A == 2) {
        cout << "The door opens! \n";
        i = 10;
    }
    else {
        cout << "Type 1 or 2 !!!!!!!!!! \n";
    }
}
hunger = 10;
cout << "You are on a rooftop. There are air conditioners on the roof. You are in a big city in the desert. It is too hot! \n";
cout << "You look for a roof hatch or door. \n";
int randnum1; // random integer from 1 to 10
srand(time(NULL));  // The random sequence is different each time
randnum1 = rand() %10 +1; // generates a random number
int slptime;
slptime = randnum1;
sleep(slptime);
cout << "You find the hatch. It goes to a dark stairwell. The door slams! \n";
cout << "What do you do? Press 1 to light a flare, 2 to use a flashlight, \n";
hunger = 15;
int light_1;
int nag = 0;
i = 0;
while (i < 5) {
    cin >> light_1;
    if (light_1 == 1) {
    cout << "You are holding a flare, the stairwell is lit with an orange light \n";
    ItemInv[0] = ItemInv[0] - 1;
    cout << "You have " << ItemInv[0] << " flares. \n";
    nag = 1;
    i = 10;
}
else if (light_1 == 2) {
    cout << "You dig in your bag to find the flashlight. \n";
    sleep(4);
    if (randnum1 < 5) {
        cout << "You find the flashlight! it works. The stairwell is light with a harsh blue light. \n";
        i = 10;
    }
    else if (randnum1 > 5) {
        cout << "You accidentally knock the flashlight down the stairs. It shatters. \n";
        ItemInv[6] = 0;
        cout << "That was your only flashlight! \n";
        cout << "You light a flare to see. \n";
        ItemInv[0] = ItemInv[0] - 1;
        i = 10;
        cout << "You have " << ItemInv[0] << " flares. \n";
        nag = 1;
    }
    else {
        cout << "The flashlight malfunctions and produces a flash of light. \n";
        cout << "Try Again! \n";
    }
}
else {
    cout << "Type 1 or 2 !!!!!!!!!!!! \n";
}
}
cout << "You walk down the stairs. There is a door at the bottom of the stairs. You open it. \n";
cout << "The building is disgusting with brown stains and exploded light bulbs. There is water on the floor. You look down the halls. \n";
cout << "You are at a tee in the halls, It is silent. Suddenly there is a light in one of the halls. It is fire!!! \n\n\n\n\n\n\n\n\n\n";
cout << "You run into a room. There is a deafening roar. \n";
if (nag == 1) {
    cout << "Your flare burns out. It is pitch black. \n";
    nag = 0;
    cout << "you feel for the light switch. \n";
    sleep(2);
    cout << "The lights turn on. They are daylight LEDs. \n";
}
cout << "The noise stops. \n";
hunger = 30;
cout << "The door is sealed from the outside. \n";
cout << "There are 3 doors in the room. Press 1 2 or 3 for each door. \n";
i = 0;
int explode;
explode = 0;
int choose_B;
while (i < 5) {
    cin >> choose_B;
    if(choose_B == 1) {
        cout << "This is the door that was ruined by the fire. It does not open. \n";
        cout << "Try again! \n";
    }
    else if (choose_B == 2) {
        cout << "This is a storage closet. \n";
        if (explode == 0) {
            cout << "There is a lightbulb in the closet. You try to turn it on. it explodes. \n";
            cout << "You leave the closet. \n";
            explode = 1;
        }
        else {
            cout << "There is shattered glass in the closet. you leave. \n";
        }
    }
    else if (choose_B == 3) {
        cout << "This leads into a dark room. \n";
        cout << "The lights detect motion and come on. \n";
        cout << "It has daylight LEDs \n";
        i = 10;
        if (light_1 == 2 && randnum1 < 5){
            cout << "You turn your flashlight off. \n";
        }
    }
    else {
        cout << "Type 1 2 or 3!!!!!!!!!!!! /n/n";
    }
}
cout << "This room is gutted. There is trash on the floor and the ceiling has mold on it. \n";
cout << "There are pipe ends coming out of the floor. This used to be a lab. \n";
cout << "The door locks behind you. You cannot go back! \n";
cout << "There are two doors. Press 1 or 2 for each door. \n";
hunger = 35;
int choose_C;
i = 0;
while (i < 5) {
    cin >> choose_C;
    hunger = hunger + 1;
    if (choose_C == 1) {
        cout << "This door is ruined by the fire that was in the hall. It does not open. \n";
    }
    else if (choose_C == 2) {
        cout << "This leads to a dark room. You walk into it. \n";
        i = 40;
        cout << "The door slams. it is pitch black and silent. You light a flare. \n";
        ItemInv[0] = ItemInv[0] - 1;
        cout << "You have " << ItemInv[0] << " flares. \n";
        nag = 1;
    }
    else {
        cout << "Type 1 or 2 !!!!!!!!!!!!!! \n\n\n";
    }
}
cout << "This room has tables and chairs in it. There are no light bulbs. The room is open to the hall.";
cout << "Everything has burn marks on it. \n";
cout << "There are no other doors in this room. You walk into the hall. \n";
cout << "The hall is burned and smells of smoke and rotten eggs. You walk down the hall and see an exploded stove. \n";
cout << "You turn the gas off.\n";
cout << "There is a door near the stove. You go in it. \n";
cout << "There are 3 doors behind it. Press 1, 2, or 3 for doors 1, 2, or 3 \n";
hunger = hunger + 5;
i = 0;
explode = 0;
int choose_D;
while (i < 5) {
    cin >> choose_D;
    hunger = hunger + 1;
    if (explode == 0) {
        cout << "Your flare goes out! You feel for the light";
        sleep(2);
        cout << "The hall light explodes! You light another flare.\n";
        ItemInv[0] = ItemInv[0] - 1;
        cout << "You have " << ItemInv[0] << " flares. \n";
        explode = 1;
    }
    else {
        cout << "There is shattered glass on the floor of the hall. \n";
    }
    if (choose_D == 1) {
        cout << "This is a gutted closet. \n";
    }
    else if (choose_D == 2) {
        cout << "This opens to a surprise stairwell. You go down it \n";
        i = 24;
    }
    else if (choose_D == 3) {
        cout << "This is a unisex bathroom. The toilet is smashed and brown water comes out of the sink. \n";
        cout << "The light and fan do not work. \n";
    }
}
if (hunger > 50) {
    cout << "You eat a meat bar.\n";
    ItemInv[4] = ItemInv[4] - 1;
    cout << "You have " << ItemInv[4] << " meat bars. \n";
    hunger = 0;
}
cout << "You walk down several flights of stairs. The lowest level is B, above it is 1. You exit the stairs at 1. \n";
cout << "The hall has working light fixtures. There are less stains and everything is in decent condition. \n";
hunger = hunger + 5;
cout << "The first door is locked. \n";
cout << "The second door is locked. \n";
sleep(2);
hunger = hunger + 1;
cout << "The third door is locked. \n";
cout << "The fourth door is locked. \n";
sleep(2);
hunger = hunger + 1;
cout << "The fifth door is locked. \n";
cout << "The sixth door is locked. \n";
sleep(2);
hunger = hunger + 1;
cout << "The seventh door is locked. \n";
cout << "The eigth door is locked. \n";
cout << "There is a split in the hall, which way do you go? Press 0, 1, or 2 \n";
i = 0;
explode = 0;
int choose_E;
while (i < 5) {
    cin >> choose_E;
    hunger = hunger + 1;
if (choose_E == 0) {
cout << "This is a dead end hall. \n";
cout << "The first door is locked. \n";
cout << "The second door is locked. \n";
sleep(2);
hunger = hunger + 1;
cout << "The third door is locked. \n";
cout << "The fourth door is locked. \n";
sleep(2);
hunger = hunger + 1;
cout << "The fifth door is locked. \n";
cout << "The sixth door is locked. \n";
sleep(2);
cout << "You walk back to the split \n";
}
else if (choose_E == 1){
cout << "This leads to an exit door. There are doors on the sides of the hall, but you do not try them. \n";
cout << "The exit door opens. There is a dumpster near the door. It is too hot! \n";
cout << "You are dehydrated! You drink a water bottle! \n";
ItemInv[1] = ItemInv[1] - 1;
i = 10;
cout << "You have " << ItemInv[1] << " Water Bottles. \n";
cout << "you are no longer dehydrated. \n";
}
else if (choose_E == 2){
cout << "This leads to the cafeteria. The lights are off. \n";
cout << "You turn the lights on....... \n";
sleep(3);
if (explode == 0) {
    cout << "The air explodes. Your ears ring. You pass out. \n";
    sleep(12);
    health = 128;
    cout << "you have half health.\n";
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
explode = 10;
}
else {
    cout << "There is fire damage in the cafeteria. The fire alarm is going off. The smoke exhaust fan is running loudly.\n";
    cout << "you leave. \n";
}
}
else {
    cout << "input 0, 1, or 2!!!!!!! \n\n\n\n\n\n\n\n";
}
}
if (hunger > 50) {
    cout << "You eat a meat bar.\n";
    ItemInv[4] = ItemInv[4] - 1;
    cout << "You have " << ItemInv[4] << " meat bars. \n";
    hunger = 0;
}
cout << "You are in a fenced in area. You cannot climb the fence. You look for an exit. \n";
cout << "You look directly across from the door, nothing! \n";
sleep(2);
cout << "You look at the wall to the right of the door. There is a gate. You hit it with your hatchet. It opens. \n";
cout << "You are standing on a street. It is empty. You Worry. \n";
cout << "It is silent except for the noises of cooling towers and a distant train horn. \n";
cout << "It is very hot and there are no clouds in the sky. \n";
cout << "There is a blue sedan a few blocks down the street, you run to it. \n";
if (health == 128) {
    cout << "You run but quickly become discoordinated and fall.\n";
    cout << "You cannot get up fast enough. The sedan disappears. \n";
    cout << "You walk back to the building. You are dehydrated but have no water. You eat your only trail mix bag \n";
    ItemInv[3] = 0;
    cout << "You go inside the building. You look inside the men's bathroom. \n";
    cout << "the sink produces brown water. \n";
    sleep(12);
    cout << "The water is disgusting. Your head hurts. You pass out. \n";
    cout << "Game Over \n";
}
else {
    cout << "You make it to the sedan!!! \n";
    cout << "It asks you for your name and destination. \n";
    cout << "You say that you are " << firstName << ", and you state your destination as the Mark C Smith Concert Hall at the VBC \n";
    cout << " in Huntsville, Alabama. \n";
    cout << "It is self driving. You get in it. It starts driving. \n";
    cout << "There is a blinding flash of light and a loud reversed cymbal. \n";
    cout << "You are back in the restroom at the concert hall. Something is not right........... \n";
    whuf(ItemInv[0], ItemInv[6]);
}
return 0;
}
