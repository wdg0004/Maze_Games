#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
using namespace std;  // This is a comment.
/*
Maze Game Version 2.10.0
*/
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
void Elevator();
void Basement();
void KaiWinn_Warp();
void mech_chase();
void innerspace();
void Lobby() {
    cout << "The lobby has black mold and brown stains. It is mostly gutted except for a desk and 4 chairs in the south east corner near you. \n";
    cout << "A large ceiling fan hangs from the ceiling, It does not run. The room is lit with daylight LED filament bulbs. Only 2 work. \n";
    cout << "The room reeks of mold and mildew. There are a set of double fire doors to your north. \n";
    cout << "There are false wood doors to your east and west. There are windows to the south. They are disgusting and some panes are missing. \n";
    cout << "What do you do????? Type 1 to go north, 2 to go south, 3 to go east, 4 to go west\n";
    int choose;
    cin >> choose;
    switch (choose) {
case 1:
    Hall_1();
    break;
case 2:
    cout << "The doors are locked.\n";
    Lobby();
    break;
case 3:
    Closet_1();
    break;
case 4:
    PipeChase();
    break;
default:
    cout << "Type 1, 2, 3, or 4 \n";
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
    cout << "You ease down the ladder, noticing that the safety cage continues almost to the floor, leaving barely enough room to exit.\n";
    mech_chase();
}
else {
    cout << "Type 1 or 2 \n";
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
    int pipe_choose;
    cin >> pipe_choose;
    if (pipe_choose == 1) {
        cout << "You ease up the ladder and carefully climb back into the closet, then walk into the lobby, closing each door as you return.\n" ;
        Lobby();
    }
    else if (pipe_choose == 2) {
        cout << "The door opens easily and swings inward rapidly, banging against the interior wall.\n";
        cout << "The room is flooded with harsh, high power LED spotlights. A bell rings. The room is a massive concrete shaft. A huge three blade propeller spins slowly below a grate. \n";
        cout << "The shaft drops to what seems like infinity. Above you, the shaft splits into many square ducts that run off on all sides except the ones the building is on.\n";
        cout << "A stiff, cold breeze flows through the room. You shiver and slam the door shut, walking back into the mechanical pipe chase. \n";
        mech_chase();
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
        cout << "You run down the hall out of desperation. It goes on infinitely.... The walls stretch and everything begins to fade. \n";
        cout << "There is a loud bang and a white flash. You briefly see your car and your gear........ Then everything goes pitch black and silent. \n";
        cout << "There is a reverse cymbal! \n";
        cout << "After a very bright blue flash: \n";
        Basement();
    }
    else {
        cout << "Type 1, 2, 3, or 4 \n";
        Closet_1();
    }
}
void PipeChase(){
    cout << "You are looking into a pipe chase. There are pipes coming out of the floor and going into the ceiling and interior walls.\n ";
    cout << "The floor is concrete, and there is a single bulb overhead. It is unknown what it is. \n";
    cout << "What do you do? press 1 to leave or 2 to turn on the bulb. \n";
    int bulbexplode;
    cin >> bulbexplode;
if (bulbexplode == 1) {
    Lobby();
}
else if (bulbexplode == 2) {
    cout << "The lightbulb explodes. You run into the lobby and realize that you were not hurt. There is shattered glass everywhere. \n";
    cout << "You head north into the hall. \n";
    Hall_1();
}
else {
    cout << "Type 1 or 2\n";
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
    Hall_1();
}
else {
    cout << "Type 1 or 2\n";
    Room_1();
}
}
void Room_2(){
cout << "This room is in very poor condition. There are multi colored stains on the walls and dirt on the floor. Only one light works. \n";
cout << "There is a what looks like a closet, but the door does not open............. There is no furniture or items in the room. The window has been smashed.\n";
cout << "There is shattered glass on the floor near the window. \n";
cout << "The room smells of mold, dirt, and rotten wood. \n";
cout << "You decide that this room is not important and return to the hall. \n";
Hall_1();
}
void Room_3(){
cout << "The lights are off. There is a push button near the door. Press 1 to push the button or 2 to leave the room. \n";
int pushbutton;
int Door103;
cin >> pushbutton;
if (pushbutton == 1) {
    cout << "The lights turn on. They are LED tubes on the ceiling. You notice a sensor on the door, and you leave the door open to avoid turning the lights off \n";
    cout << "There are tables and chairs in this room. There are no brown stains. \n";
    cout << "There is a door on the far wall near a dirty window. Press 1 to open the door or any integer other than 1 to leave.\n";
    cin >> Door103;
    if (Door103 == 1){
        cout << "The door seems stuck. You kick it and it opens. It goes to room 102. You walk through the door, and then shut it. It will not open again.\n";
        cout << "The door on room 103 closes on its own. The lights in room 103 go out. \n";
        Room_2();
    }
    else {
        cout << "You leave the room. The lights turn off as the door closes. \n";
        Hall_1();
    }
}
else if (pushbutton == 2) {
    Hall_1();
}
else {
    cout << "Type 1 or 2\n";
    Room_3();
}
}
void Room_4(){
cout << "This room has door activated lights. They are old incandescent bulbs. You leave the door open. The TV in the room turns on. \n";
cout << "It starts to play a tape of scenes from the KTNC, North Lebanon and Pikeville RR, and the Hocking Valley RR. There is a calendar on the wall. It is on March 2016.\n";
cout << "This is a North Lebanon and Pikeville Railroad Calendar (A KTNC Affiliate). This used to be a lodge that was used by railroad executives. \n";
cout << "You are in the Western Pacific Universe!!!\n";
cout << "The room smells strongly of mothballs and cleaner. \n";
cout << "There is a closet in this room. It is on the same side of the hall as room 101 and across from room 102 and 103. There is a package on the desk. It is on its side.\n";
cout << "It is addressed to Maria Johanna, 145 Trestle Street, Russellville, AL.... The zip code is illegible. The box is moderately light, and you lift it and reposition it easily. \n";
cout << "Press 1 to open the box, 2 to look in the closet, or 3 to leave \n";
int Choose104;
int randnum1;
srand(time(NULL));  // The random sequence is different each time
randnum1 = rand() %10 +1; // generates a random number
cin >> Choose104;
if (Choose104 == 1){
    cout << "There are DVDs in the box. It is video of every KTNC owned railroad! East, west, and Appalachian region footage from 1991 to 2016 is included. \n";
    cout << "You repack the disks. \n";
    cout << "You leave the room as to not go through someones personal belongings. The lights in the room go out\n";
    Hall_1();
}
else if (Choose104 == 2){
    cout << "The closet has business suits in it. There is a set of US Army Dress Greens hanging in the closet as well. There is a box in it that says WP 1995-1998 Slides on it \n";
    cout << "It reeks of mothballs, and the smell almost knocks you out. \n";
    cout << "The door slams shut and the lights go out. The TV turns off. It is pitch black and silent... \n";
    cout << "You light a flare to see and place it in the center of the room. There is a wierd noise. \n";
    cout << "The room begins to reset!!!! \n";  // Creates a random warp event
    if (randnum1 == 1){
        Lobby();
    }
    else if (randnum1 == 2)
    {
        Room_8();
    }
    else if (randnum1 == 3)
    {
        Room_2();
    }
    else if (randnum1 == 4)
    {
        PipeChase();
    }
    else if (randnum1 == 5)
    {
        Room_3();
    }
    else if (randnum1 == 6)
    {
        Room_7();
    }
    else if (randnum1 == 7)
    {
        Room_1();
    }
    else if (randnum1 == 8)
    {
        Space_Warp();
    }
    else if (randnum1 == 9)
    {
        Room_6();
    }
    else if (randnum1 == 10)
    {
        Elevator();
    }
    else {
        Space_Warp();
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
cout << "The room has Daylight LEDs in it. There is kitchen equipment everywhere. The room is greasy and disgusting, and it smells of rotting eggs. \n";
cout << "There are food service windows linking to room 103. There is a gas stove in the room. There is also a closet. \n";
cout << "press 1 to look in the closet, 2 to operate the stove, and any other integer to leave. \n";
int Cook_Kitchen;
cin >> Cook_Kitchen;
if (Cook_Kitchen == 1){
    cout << "The closet is full of spoiled food and flies. You slam the door and leave the room. \n";
    Hall_1();
}
else if (Cook_Kitchen == 2){
    cout << "The room was full of methane and oxygen. The stove explodes.\n";
    cout << "You don't feel it.\n";
    Space_Warp();
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
        cout << "The ladder continues only a short distance and your feet hit a grate. You notice that you are in a shuttle cart. THe cart speeds down the shaft and slows to a stop at the bottom.\n";
        cout << "You cautoiusly walk down the only hall, which is lit by daylight LEDs. You see a metal boat door and a wooden door, at right angles to each other. The metal door handle turns and unlatches, but something bats it back into place each time it is opened.\n";
        cout << "You push the door open, it gets to about 45 degrees revealing a dark space, immediately, a thick, vertical beam comes out of the darkness , the top appearing faster than the bottom, and bats the door closed. It slams with a bang noise.\n";
        cout << "The window shatters on the door... \n";
        cout << "You hear a loud whoosh noise every few seconds, and the columns appear in the field of view before walking away to your left, away from the wooden door.\n";
        cout << "You realize that the door cannot safely be opened. You open the wooden door and climb up a few stairs before pedaling a cart down the hall. You reach the end, where a control booth sits.\n";
        cout << "You see a button that says tunnel light, and you hit it. The room floods with light. You see the biggest concrete tunnel you have ever seen. Only a thin glass barrier is between you and the tunnel. A 3000 foot wide three blade fan slowly rotates in the tunnel at a few RPM.\n";
        cout << "You gasp in horror, making an audible gasp noise and fill with white hot dread, then a school bell sounds, then you pedal the cart down the hall, feeling dizzy near the metal door due to low pressure, and then use the eletctric cart to climb up, a low vibration becomes more and more pronounced...\n";
        cout << "The vibration becomes a deafening wop wop wop wop wop...\n";
        cout << "THe tracks become a parallelogram as the cart nears the top, the fan noise is now a deafening buzzing throbbing roar, and your cart falls as huge rocks chase you down the shaft...\n";
        cout << "The shaft begins to close... Everything resets... \n";
        Space_Warp();
    }
    else {
        cout << "You return to the mechanical chase area, avoiding centipedes.\n";
        mech_chase();
}
}
void Room_6(){
cout << "The room has soft white LED filament bulbs. All bulbs work. This room used to be another suite. There is a bed frame in one corner and a table in the other. \n";
cout << "These are the only objects in the room. The walls are bare, but they have damage from adhesive pads where pictures used to be hung. \n";
cout << "The ceiling has brown stains, and the room smells very musty and dirty. There is a closet in the corner. The door is jammed. \n";
cout << "You leave the room because it does not seem important. \n";
Hall_1();
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
    cout << "You walk around the building, there is no exit. The propeller turns off. You then go to the lobby.\n";
    Lobby();
}
else if (Choose107 == 2){
    cout << "The exercise machines work, and you get a workout.\n";
    cout << "You leave the room. The equipment turns off.\n";
    Hall_1();
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
 cout << "The elevator slowly lowers with creaking and banging noises. It bangs to a stop. You begin to whuf!!! \n";
 cout << "Suddenly the lights go out...... \n";
 cout << "The lights come back on! The door is open to the basement. you enter the basement. \n";
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
    cout << "The air explodes.......\n";
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
    cin >> bas4num;
    if (bas4num == 1){
        cout << "You find a large adjustable wrench. You hit the beetle with it. The beetle's shell is too hard. \n";
        cout << "The beetle spasms, and then flies into a large locker, and the locker falls on you. \n You yell OOOF! \n Your legs are broken!!!!! \n\n\n\n";
        cout << "The centipede bites your hand, and your hand feels like it is on fire! There is a giant red chevron on your hand. \n";
        cout << "Your vision blurs, and then........... \n";
        Space_Warp();
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
        Basement();
    }
    else if (basrand == 4){
        cout << "The noise turns out to be the fan in 107B. You leave to see it spin. It runs very fast. \n";
        cout << "You look at the room again, and the desk fan now runs as well. \n";
        cout << "The fan turns off, and you leave the room.\n";
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
        cout << "He comments that he is heading home to Chicago to see his family. He asks you why you are not evacuating.\n";
        cout << "You panic, and ask a woman with short, dark hair, an atheletic build, and that is wearing a wedding dress and ask where you are. \n";
        cout << "She answers the Ben Graves Conference Center. You ask where is that? She responds that she does not know. \n";
        cout << "You then ask another woman with long, blonde hair that wears a pants suit where the conference center is. She shows sheets of calculations and formulae. \n";
        cout << "Then she says in a stoic voice, We are in a state of flux between universes but not precisely in any universe. \n It will invert in one hour, and at that time time will reach a singularity there. \n";
        cout << "This is not the Western Pacific Universe! \n\n\n\n You are suddenly in the basement. \n";
        Basement();
    }
    else if (basrand == 6){
        cout << "The noise stops, you whuf and then leave. \n";
        Basement();
    }
    else if (basrand == 7){
        cout << "The noise stops, you think that you imagined things. \n";
        cout << "you leave. \n";
        Basement();
    }
    else if (basrand == 8){
        cout << "There is a time singularity. The room fills with blinding blue light. It Explodes. Suddenly it is pitch black and silent............. \n";
        Space_Warp();
    }
    else if (basrand == 9){
        cout << "The noise stops, you whuf and then leave. \n";
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
        cout << "The noise abruptly stops. A beam falls from the ceiling, you do not feel it \n";
        Space_Warp();
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
        cout << "The noise becomes a rumble sound. It then becomes a loud grinding noise. You hide in the room for a long time. The grinding noise fades back to a rumble and then to silence. \n";
        Basement();
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
        cout << "It stings you, you double over. Suddenly everything resets! \n";
        Space_Warp();
    }
    else if (basrand == 37){
        cout << "The noise stays quiet and indeterminate. You enter the basement hall and put your ear to the floor. \n";
        cout << "Suddenly you are thrown back in time. You see people walking around and talking. They walk through you. \n";
        cout << "You see a woman in a suit walk up to another woman in a Victorian Era dress. They talk to each other and reveal that it is March 15, 2016. \n";
        cout << "Suddenly there are regular explosions and someone yells that there are concussion charges blowing up. \n";
        cout << "Everyone stops and goes into the tornado position. The sounds stop after 15 minutes. Then an evacuation alarm goes off. \n";
        cout << "Everyone goes into room B03 and down the tunnel in there. You stop a man with dark skin and hair in a suit and tie and ask where you are. \n";
        cout << "He does not know where the conference center is located. He claims to have ridden public transit to get to it. That is all he knows.\n";
        cout << "He comments that he is heading home to Chicago to see his family. He asks you why you are not evacuating.\n";
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
cout << "Maze Game Version 2.10.0 With Western Pacific Universe\n";
cout << "By FanFan61618\n";
cout << "--------------------------------------------------------------- \n";
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
main();
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
cout << "Type 1 to head to the basement, enter a room number to try to enter it, entering invalid input resets the game. \n";
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
    cout << "Your head feels like a semi truck drove over it.\n";
    cout << "Everything resets...";
    Space_Warp();
    break;
case 104:
    cout << "The lights are on. Nothing seems different at first glance. \n The door slams shut. There is a directionless, deafening roar. The lights go out \n";
    cout << "The dogs break through the door, and stampede down the hall. Suddenly there is a suction sound.... \n";
    cout << "You are at the camp ground where you started, your phone works! \n";
    cout << "You pack your gear into your car and head home. The End. \n";
    break;
case 105:
    cout << "The room has Daylight LEDs in it that barely produce light. There is kitchen equipment everywhere. The room is greasy and disgusting, and it smells of rotting eggs. \n";
    cout << "There are food service windows linking to room 103. Oily black can be seen through them. \n";
    cout << "A broken microwave pulses erratically and noisily in one corner. The light flickers while the fan speed fluctuates unpredictably and the magnetron tries to heat an empty cavity. \n ";
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
    cout << "Press 1 to return to the start \n";
    int finalchoose;
    cin >> finalchoose;
    if (finalchoose == 1) {
        Space_Warp();
    }
    else {
        break;
    }
    break;
case 301:
    cout << "This is a large, almost empty room. A violin and bow lay in one corner, and there are piles of desks and chairs in the other corner. \n";
    cout << "The room is covered in brown and yellow stains on the floor, walls, and ceiling. The floor looks like someone threw up on it. Your vision and hearing clear up. \n";
    cout << "The fixtures are from the 1950s and have harsh 6700K fluorescent tubes in them. \n";
    cout << "There is a door on the wall with the fire door, it is open. A blinding blue light flashes inside it. \n";
    cout << "You look in the room to see the time singularity in the center with black cubes flying around it. One of the cubes hits you and knocks you into the hall before you went to the basement. \n";
    Hall_1();
    break;
default:
    cout << "The dogs break through the fire door, they rush at you and push you backwards. You do not feel it... ";
    cout << "The time singularity can be seen and it explodes, resetting everything! \n";
    Space_Warp();
}
}
