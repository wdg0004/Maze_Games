#include <iostream> // for cin and cout
#include <string> // used to process strings
#include <stdlib.h> // required for random numbers
#include <time.h> // required for random numbers
#include <stdio.h> // required for random numbers
#include <windows.h> // required for Sleep
using namespace std;  // This is a comment.
/*
Abandoned Building v 1.5.0
Main Character: Queen Anne
Primary Setting: Abandoned building in WP Universe, unknown city, North America
Secondary Setting: Redstone Civic Center, Redstone Arsenal, World of Memoirs
*/
void Hall_1(); // Predefine a function if it is called before its actual definition.
void PipeChase();
void Room_A();
void Room_B();
void stairwell();
void DS_Warp();
void DS_Hall();
void starthere(){
cout << "The room has four doors, one on each side. This room is cold. \n"; // This is the start location.
cout << "There is a picture on the wall. It is of a KTNC train in Cookeville, TN. \n";
cout << "What do you do????? Type 1 to go north, 2 to go south, 3 to go east, 4 to go west\n";
    int choose;
    cin >> choose;
    switch (choose) {
case 1:
    Hall_1();
    break; // This ensures that the switch is left properly.
case 2:
    cout << "The door is locked from the inside.\n";
    starthere(); // A wall.
    break;
case 3:
    cout << "This room is gutted. There is a hole in the ceiling. It is full of snow. \n";
    cout << "You shiver at the bitter cold, then slam the door! \n";
    starthere(); // A dead end room.
    break;
case 4:
    PipeChase();
    break;
default:
    cout << "Type 1, 2, 3, or 4 \n";
    starthere();
    }
}
void Hall_1(){
cout << "This is another square room. There are also doors on 4 sides. \n";
cout << "The room has water damage and reeks of mold. It is freezing in the building. There is trash on the floor.\n";
cout << "Type 1, 2, or 3 for doors 1, 2, or 3 OR type 4 to return to the starting room. \n";
int Hchoose;  // the variables must be predefined
cin >> Hchoose; // reads in an int
if (Hchoose == 1){
    Room_A();
}
else if (Hchoose == 2) {
    stairwell();
}
 else if (Hchoose == 3){ // This is a transition area
    cout << "This hall is extremely cold. There are brown stains on the ceiling. A tornado siren has crashed through the ceiling part way down the hall. \n";
 cout << "Only one door is accessible. You shiver as your dress does not protect you from this type of cold. You walk through the door.\n";
Room_B();
 }
 else if (Hchoose == 4){
    starthere();
 }
 else {
    cout << "Type 1, 2, or 3. \n";
    Hall_1();
 }
}
void stairwell(){
cout << "This is a stairwell. The number 2 is by the door and the stairs go down only. They are a block of ice.\n";
cout << "There is a hatchet in your backpack. You hit the ice with it. There is more ice under the ice. \n";
cout << "There is storage closet nearby. Press 1 to look in the closet, 2 to try the stairs, or 3 to leave. \n";
int stair_choose;
cin >> stair_choose;
if (stair_choose == 1){
    cout << "There is a propane torch in the closet. It works. \n";
    cout << "You melt the ice off of the stairs. It flows down and out a floor drain. \n";
    cout << "You walk down the stairs safely. \n";
    cout << "the door says 1, and you open it. You get hit with a blast of warm air. \n";
    cout << "There is a foul smell. You almost gag. There is trash on the floor.";
    DS_Hall();
}
else if (stair_choose == 2){
    cout << "Your feet slip and you fall backwards and slide down the stairs. You yell OOF! Your right leg and left arms are broken. \n";
    cout << "You are in extreme pain. \n";
    Sleep(5000); // creates a 5 second pause - this is the 5000 number seen in Sleep()
    cout << "Suddenly there is a blinding flash of light and a reversed cymbal crash! \n";
    cout << "Everything has been reset! \n";
    starthere();
}
else if (stair_choose == 3){
cout << "You decide that the stairs are too much of a risk. \n";
cout << "You leave. \n";
Hall_1();
}
else {
cout << "Type 1, 2, or 3!!!!!!!! \n";
stairwell();
}
}
void Room_B(){
cout << "This room uses gas heat. It is hot due to a malfunctioning thermostat. The thermostat reads 80 degrees F. \n";
cout << "You look around some, there are two leads. press 1 or 2 to pick the lead to follow. \n";
int Anne_Choose;
cin >> Anne_Choose;
switch(Anne_Choose){
case 1: {
cout << "There is a note on the table. You read it. It says:\n";
cout << "Hey Anne! \n";
cout << "The exit is somewhere on the first floor. There is rotting food near it. I think it was some sort of freezer or cooler at some time. \n";
cout << "The stairs are behind Door 2. \n";
cout << "There is no name on it. You whuf! \n";
cout << "You head to the stairs \n";
stairwell();
}
case 2: {
    cout << "There is a closet. Inside the closet there is a remote. You stare at the remote. \n";
    Sleep(5000);
    cout << "It is the remote that Isabella took from you during her older brother's coronation. It is smashed from where she stomped on it. \n";
    cout << "You press the remaining buttons randomly. You are suddenly in a disgusting walk in freezer. It is broken and there is no light. \n";
    cout << "You light a flare to see. \n";
    cout << "The red glow lights up the walls and ceiling. The walls are an off silver, and there is spoiled food everywhere. One wall has a pitch black area. \n";
    cout << "Suddenly you 'fall' Through the black area. You are in the Redstone Civic Center. It is past midnight. There is no one there. \n";
    cout << "You leave the civic center and head to your car. Your keys and wallet are suddenly in your backpack. Your get in your car and drive home. \n";
    cout << "The remote is gone, and your life returns to normal. The End!";
    break;
}
default: {
    cout << "Type 1 or 2!!!!!!!! \n";
    Room_B();
}
}
}
void Room_A(){
cout << "This room has dayight LEDs. There are a few desks and chairs. The heat pump tries to run. \n";
cout << "It makes an awful noise but provides no heat. \n";
cout << "You look around in the room, but there is nothing there. You walk out the only door. \n";
Hall_1();
}
void PipeChase(){
cout << "There are pipes in this room. They go across the ceiling and down and across the walls. \n";
cout << "This room is warm because there is steam in some of the pipes. \n";
cout << "There is a door at the far end of the room. Press 1 to enter it, or 2 to leave.";
int pchoose; // user / Anne's choice
int randnum1; // random integer from 1 to 10
srand(time(NULL));  // The random sequence is different each time
randnum1 = rand() %10 +1; // generates a random number
cin >> pchoose; // user input engages random number
if (pchoose == 1){
    cout << "The room is pitch black and silent. There is a boom noise. \n";
    if (randnum1 == 1){
        Hall_1();
    }
    else if (randnum1 == 2) {
        starthere();
    }
    else if (randnum1 == 3) {
        cout << "You feel dizzy. You whuf then leave and slam the door. You head back to the starting room \n";
        starthere();
    }
    else if (randnum1 == 4) {
        Room_A();
    }
    else if (randnum1 == 5) {
        stairwell();
    }
    else if (randnum1 == 6) {
        Room_B();
    }
    else if (randnum1 == 7) {
        cout << "You feel nauseated. You leave while whuffing. \n";
        PipeChase();
    }
    else if (randnum1 == 8) {
        cout << "There is a time singularity. It explodes! Suddenly everything resets. \n";
        starthere();
    }
    else if (randnum1 == 9) {
        DS_Hall();
    }
    else if (randnum1 == 10) {
        cout << "There is another boom noise. It is excessively loud. Your ears ring. You run back to where you started. \n";
        starthere();
    }
    else {
        Hall_1();
    }
}
else {
    cout << "You warm up and then leave. \n"; // The user can avoid random behavior even at this stage
    starthere();
}
}
void DS_Hall(){
cout << "The hall has heavy water damage and a mold smell with mold stains. There is trash on the floor in places. There are doors on the walls \n";
cout << "Most are jammed. You try all the doors and only 5 work. The exit door is also jammed, but the street can be seen. There are cars on the street. \n";
cout << "The street has been plowed, and there is snow on the sidewalks. \n";
cout << "You hit the door with your hatchet, but the glass does not crack! You whuf! Type 1 through 5 to go to rooms 1 through 5. \n";
cout << "Type 6 to return to the second floor. \n";
int DSChoose;
cin >> DSChoose;
switch(DSChoose){
case 1:
    cout << "This room is disgusting. It looks like an old kitchen. The walk in cooler in on the back wall! \n";
    cout << "The door is jammed. You try to kick it down, nothing happens. You try to break the glass, nothing happens. \n";
    cout << "You try a crowbar and the door robotically remains in place.  You shrug your shoulders and leave \n";
    DS_Hall();
    break;
case 2:
    cout << "This is an empty room. The heat works, but there is standing water on the floor. The room is full of dead mosquitoes. \n";
    cout << "You leave this room.\n";
    DS_Hall();
    break;
case 3: {
cout << "There is a computer terminal in the room. \n";
cout << "It says to input a number: \n";
int X; // used for math in Room 3, integer X
cin >> X;
cout << "It says to input another number: \n";
int Y; // Also used for math in room 3. integer Y
cin >> Y;
int sum;
sum = X + Y; // add x and y
cout << "It says the sum is:" << sum << "\n"; // print the sum
int comp_diff;
comp_diff = X - Y; // subtract Y from X
cout << "It says the difference is:" << comp_diff << "\n";
cout << "There is nothing else that the terminal can do. You look around the room. All of the furniture is empty. \n";
cout << "You Leave";
DS_Hall();
break;
}
case 4:{
cout << "This room has water damage on the walls and floor. The far window is boarded up. There is a propeller exhaust fan on the wall with the boarded window. \n";
cout << "There is ice in places on the floor. The room is freezing! \n";
cout << "There is a closet door on the far side of the room. Press 1 to look at the door or any other positive integer to leave. \n";
int RoomC;
cin >> RoomC;
if (RoomC == 1) {
    cout << "The inside of the closet is disgusting with multi colored mold. The closet looks unstable. There is nothing inside the closet. \n";
    cout << "You begin to slowly back away from the closet. You shut the door. \n";
    cout << "It rotates and falls on you. You don't feel it. Suddenly there is a reversed cymbal crash!";
    DS_Warp();
}
else {
    cout << "You leave the room.\n";
DS_Hall();
}
break;
}
case 5:
    cout << "This room has a wooden paneled interior. There are bare daylight LEDs hanging from the ceiling. The room has boxes of junk in it. \n";
    cout << "The room reeks of trash and is hot. There is a beat up space heater on high heat hanging from the ceiling. \n";
    cout << "You look around the room. All walls have piles of junk in front of them. The room makes an L shape. \n";
    cout << "there is trash at the far end. It is covered in green bottle flies. They spasm and fly randomly. The noise is deafening. \n";
    cout << "You leave the room. \n";
    DS_Hall();
    break;
case 6:
    cout << "You return to the second floor. \n";
    Hall_1();
    break;
default:
    cout << "Type 1 - 5!!!!!! \n\n\n\n\n\n";
    DS_Hall();
    break;
}
}
void DS_Warp(){
cout << "Everything is reset! \n\n\n\n\n\n\n\n\n\n";
Sleep(6000);
starthere();
}
int main(){
cout << "--------------------------------------------------------------- \n";
cout << "Abandoned Building Version 1.5.0 With Western Pacific Universe\n";
cout << "By FanFan61618\n";
cout << "--------------------------------------------------------------- \n";
cout << "You are Queen Anne, and you are wearing an ankle length Bavarian Renaissance Era Dress with heels and a crown. You have long, straight brown hair that is worn braided.\n";
cout << "The dress is mostly white with a red lace up corset worn over the dress with black lace. \n";
cout << "You are standing in a room in the Redstone Civic Center. Suddenly, a princess in an ornate Spanish ballgown walks into the hall from the door on the right \n";
cout << "She is holding a blue remote......... \n\n\n\n You Identify her as Isabella. You walk towards her.";
cout << "She sees you and shouts something unintelligable.. Her hair looks messy, as though she has been pulling on it. \n Her tiara is missing from her head. \n Your snap and bark at her to give you the remote. \n";
cout << "She makes an exhasperated noise, drops the remote, and stomps on it. \n She then picks it up and jumps onto the bench in front of you \n";
cout << "She slams it into your hand, then pulls the remote back. Your hand is hurt. You scream at her, then she throws a punch. \n you Don't feel it..... \n\n\n\n\n";
cout << "everything goes black........ \n";
cout << "You wake up. You are wearing the same outfit, but you are healed and feel fine. \n Your purse has became a backpack. There is basic survival gear inside. \n";
cout << "Your crown in on the floor across the room from you, you put it back on.\n";
starthere();
return 0;
}
