#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void myFunction();
void narrowhall();
void fourier();
void fourierrear();
void fouriereast();
void hallspace();
void hall2space();
void powerplant();
void hallloop();
void fourierwest();
// global variable, indeterminate state
int wheelchair_elev = 0;
// global light state for second floor
int looplite = 8;
int halllite = 8;

// references
// random numbers: https://stackoverflow.com/questions/1190870/i-need-to-generate-random-numbers-in-c
// sleep time: https://stackoverflow.com/questions/3930363/implement-time-delay-in-c

void building_reset() {
  // reset environment variables
  printf("The elevator raises and the second floor lights go out... \n\n\n");
  wheelchair_elev = 2;
  // second floor loop light control
  looplite = 0;
  // hall light control
  halllite = 0;
  // return to the gym
  myFunction();
}

int main() {
  printf("--------------------------------------------------------------------- \n");
  printf("C Based Maze Game 1.8.0 \n");
  printf("By FanFan61618 \n");
  printf("--------------------------------------------------------------------- \n");
  printf("You are out riding your bicycle in the woods after going backpacking, and suddenly your front wheel comes off. You wreck...\n");
  printf("Your cellphone has no signal. You blow your whistle to signal distress but nothing happens... \n\n");
  printf("You begin to walk to where you believe the trailhead is, leaving only your beat up bicycle on the side of the trail. \n");
  printf("A huge horse fly dives at you and you begin to run! The horse fly startles and does not chase you... \n");
  printf("The trail abruptly ends!!! \n\n");
  printf("You backtrack only to find a new concrete bridge and an overflowing river. You then backtrack more and find a vacant bathhouse, you backtrack further and find a hydropower station with a huge spillway... \n");
  printf("You walk to the powerhouse and beat on the door... \n");
  printf("The door swivels and falls inwards, revealing the powerhouse interior. You stare down a row of generators. A time singularity hangs over the third generator from the door in the room. There is a flash of light! \n");
  building_reset();
  return 0;
}

void hall2space() {
  if (halllite == 1) {
    printf("This is a hall with lots of doors, you try some of the doors. 7 are unlocked... \n");
    printf("The hall is warmly lit with incandescent can lights, all of them work. A clock is on the wall and stuck at 00:34, just like the others. \n");
    printf("There are no windows, and the hall has mold stains in places. Old posters line the walls, giving a dated feel of the late 1980s. \n");
    printf("A fire door is slightly ajar at the end of the hall that faces the gym. There is also a broken water fountain that turns the compressor on and then immediately stops it again. \n\n");
    printf("The pulsation is aggrivating to you. \n");
    printf("Input 1-7 to pick doors 1-7, 8 for the fire door, any invalid integer to return to the first floor and turn off the second floor lights. \n");
  }
  else {
    printf("There are no lights! The hall is oily black.... \n");
    printf("You grope for the light switch..... \n");
    printf("There is a pop noise as the IR detector detects you, and the room floods with warm, soft white incancescent light \n");
    halllite = 1;
    printf("This is a hall with lots of doors, you try some of the doors. 7 are unlocked... \n");
    printf("The hall is warmly lit with incandescent can lights, all of them work. A clock is on the wall and stuck at 00:34, just like the others. \n");
    printf("There are no windows, and the hall has mold stains in places. Old posters line the walls, giving a dated feel of the late 1980s. \n");
    printf("A fire door is slightly ajar at the end of the hall that faces the gym. There is also a broken water fountain that turns the compressor on and then immediately stops it again. \n\n");
    printf("The pulsation is aggrivating to you. \n");
    printf("Input 1-7 to pick doors 1-7, 8 for the fire door, any invalid integer to return to the first floor and turn off the second floor lights. \n");
  }
  int choose7;
  scanf("%d", &choose7);
  switch (choose7) {
    case 1:
      printf("This is a lab area\n");
      printf("The floor is very dirty. One sink drips slowly, and there is a spoiled sandwich on the table. \n\n");
      printf("The lights barely work, and a single LED struggles to provide light. You gag on the smell and leave... \n");
      hall2space();
      break;
    case 2:
      printf("This is a classroom.\n");
      printf("The room has desks and a chalk board. The wall calendar says May 2003. There is an old beige computer on the teacher desk. \n\n");
      printf("The lights are on and are very bright. You find a pile of floppy disks on one table, but the computer only beeps when the power button is pressed. \n");
      printf("A picture of a green bottle fly is on the wall.\n There is a motion detection paper towel dispenser. It revs but is empty and produces no towels... \n you leave\n");
      hall2space();
      break;
    case 3:
      printf("This is another classroom.\n");
      printf("It is ruined, and the ceiling is open to the moonlight. There is severe mold damage, and an air conditioner sits ruined on the floor. \n\n");
      printf("You hear dead silence, and there are no real sounds of civilization. \n");
      printf("You return to the hall as you find nothing of interest here...\n");
      hall2space();
      break;
    case 4:
      printf("This is an office. The bookcase is overturned and the deks is smashed.\n");
      printf("The walls are cinder block. The lights produce a fleetingly brief flash of light and have to be flashed repeatedly to see anything. \n\n");
      printf("There is a chair that is overturned, and the cushions have had all of the foam ripped out of them. You leave... \n\n");
      hall2space();
      break;
    case 5:
      printf("This is a gutted room.\n");
      printf("The floor is a slab, and the walls are steel studs. The ceiling is bald and has only beams. \n\n");
      printf("There are no lights. The room fades to black so that you cannot resolve the back wall clearly. There is nothing in the room. \n");
      printf("You return to the hall as you find nothing of interest here...\n");
      hall2space();
      break;
    case 6:
      printf("This is another classroom.\n");
      printf("The desks are arranged in groups of five. The teacher desk has essays on it. The essays are in an odd foreign language. \n\n");
      printf("There is a map of 19th century Europe on one wall and a map of 19th century Africa on another wall and one of 19th century Asia on the back wall. \n");
      printf("There is a rat in the room, and there is severe water damage on one wall. You return to the hall as you find nothing of interest here...\n");
      hall2space();
      break;
    case 7:
      printf("This is another classroom.\n");
      printf("The ceiling sags and is severely damaged. \n\n");
      printf("There is a 12 hour analog clock, it is frozen at 12:34 AM. There is very little in this room. Orange tape prevents entry past the door. \n");
      printf("You do not consider this room as entry is impossible.\n");
      hall2space();
      break;
    case 8:
      printf("This is the hall around the gym. There is a pop noise, and the oily darkness becomes a warm incandescent glow. The hall is in good condition.\n");
      looplite = 1;
      hallloop();
      break;
    default:
      printf("You carefully head back to the downstairs hall, turning off the light as you leave. \n");
      halllite = 0;
      hallspace();
  }
}

void hallloop() {
  if (looplite == 1) {
    printf("You walk around the hall and make a complete circle. The other stairs can be seen. All clocks say 00:34 and do not count time. \n");
    printf("There is also a unisex restroom and a few wooden doors, all unlabeled... \n");
    printf("Enter 1 to use the stairwell, 2 to enter the restroom, 3-6 for the doors, 7 to head back to the hall. \n");
    int loopchoice;
    scanf("%d", &loopchoice);
    switch (loopchoice) {
    case 1:
      printf("You try to open the door... It sticks and then begins to move... \n\n");
      printf("The door pivots inward and falls down the stairs with a loud crash. You chase it down the stairs, then there is a bang noise. \n");
      printf("You are thrown from the time singularity in the powerhouse, and are now in the powerhouse. There are eight generators being driven by eight turbines.\n");
      printf("The noise is deafening. The time signularity pops and winks out of existence.\n");
      printf("There are two doors, and an exit. The exit is jammed, and there are black bears outside the door. You decide it is not safe to leave.\n");
      printf("One door is steel, and you turn the handle to have it come off in your hand. The other door is wood, and it opens easily....\n");
      printf("The door leads to a dimly lit staircase with wooden paneled walls.\n");
      printf("The door at the bottom reveals a cubicle farm. \n");
      powerplant();
      break;
    case 2:
      printf("The lights come on on motion detector. The hand towel dispenser and soap dispenser try to run. The blowout toilet makes a loud roar as it flushes. \n");
      printf("The faucet supports only cold water, and the water has sediment in it... \n");
      printf("The fan is dead, and the light flickers. You decide that there is nothing important here.\n");
      hallloop();
      break;
    case 3: {
      if (wheelchair_elev == 1) {
        printf("This is a wheelchair elevator. It is fully lowered. You did not expect it and stepped into the void... \n");
        printf("You fall, hearing a brief, rapidly increasing, air rushing sound, and then hit the solid steel elevator plate with the most severe pain you ever felt. You shriek briefly! Your vision goes black... \n\n\n\n");
        printf("Everything resets! \n");
        building_reset();
      }
      else {
        printf("This is a wheelchair elevator. It is fully raised. You walk onto the platform. \n");
        printf("You look at the controller, noting that it states 1 and 2 on it. What do you want to do?\n");
        printf("Input 1 to return to the first floor or 2 to stay on the second floor. \n");
        int upperstand;
        scanf("%d", &upperstand);
        if (upperstand == 1) {
          printf("The elevator groans as it lowers... \n\n");
          wheelchair_elev = 1;
          fourierrear();
        }
        else {
          printf("You leave the elevator shaft. \n\n");
          hallloop();
        }
      }
      break;
    }
    case 4:
      printf("This is the controller room for the wheelchair elevator. The cables are present, and the equipment is in okay condition. \n");
      printf("You stare into the cable chase and become dizzy from the drop off... \n");
      printf("The cables hang in the chase, but the shaft is too dark to see the elevator state, and the controls are solid state.\n");
      hallloop();
      break;
    case 5: {
      printf("This is a room with a small closet. The ceiling is sagging, and there are ruined desks and unstable chairs in the room. \n");
      printf("A dull gray piece of metal stis next to a pool of water, perched on a rotting desk.\n");
      printf("Press 1 to enter the closet, 2 to put the metal bar in water, any other number to leave \n");
      int room5choose;
      scanf("%d", &room5choose);
      if (room5choose == 1) {
        printf("You look in the closet. It is gutted, and a rat squeals and darts between your feet. \n");
        printf("You dart and run into the hall. You then see the rat and try to chase it. \n");
        printf("There is suddenly the loudest noise you have ever heard. Your hearing is destroyed and you feel your pulse in your head. The building begins to collapse... \n");
        printf("You shoot down the hall and see the building collapsing behind you.");
        printf("You are thrown from the time singularity in the powerhouse, and are now in the powerhouse. There are eight generators being driven by eight turbines. You hear again.\n");
        printf("The noise is deafening. The time signularity pops and winks out of existence.\n");
        printf("There are two doors, and an exit. The exit is jammed, and there are black bears outside the door. You decide it is not safe to leave.\n");
        printf("One door is steel, and you turn the handle to have it come off in your hand. The other door is wood, and it opens easily....\n");
        printf("The door leads to a dimly lit staircase with wooden paneled walls.\n");
        printf("The door at the bottom reveals a cubicle farm. \n");
        powerplant();
      }
      else if (room5choose == 2) {
        printf("The metal begins to burn your hand. You throw it in the water.\n");
        printf("Time slows waaaaayyyy dooooowwwwnnnn as you realize your error........... \n\n\n\n\n\n\n\n\n\n\n");
        printf("You run to the door but are too late. What feels like semi truck at 70 mph hits you from the back, you instantly lose your hearing. You see the building caught in a state of collapse as if in a freeze frame.... The frame begins to fade... \n\n\n\n");
        printf("Your vision goes solid red.... Everything completely resets....\n");
        main();
      }
      else {
        printf("You carefully leave...\n");
        hallloop();
      }
      break;
    }
    case 6:
      printf("The lights come on on motion detector. The hand towel dispenser and soap dispenser try to run. The blowout toilet makes a loud roar as it flushes. \n");
      printf("The faucet supports only cold water, and the water has sediment in it... \n");
      printf("The fan is dead, and the light flickers. You decide that there is nothing important here.\n");
      hallloop();
      break;
    case 7:
      printf("You leave the hall loop and pull the fire door to its original position. The lights turn off with a click noise. \n");
      looplite = 0;
      hall2space();
      break;
    default:
      printf("Input a number 1-7!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n\n\n\n\n");
      hallloop();
    }
  }
  else {
    printf("You grope through the hall very slowly.\n");
    // actions become indeterminate here
    srand(time(NULL));
    // make a random integer between 1 and 10
    int random_number = 0;
    printf("You feel a door and try it. \n");
    printf("The lights come on on motion detector. The hand towel dispenser and soap dispenser try to run. The blowout toilet makes a loud roar as it flushes. \n");
    printf("The faucet supports only cold water, and the water has sediment in it... \n");
    printf("The fan is dead, and the light flickers. You decide that there is nothing important here.\n");
    printf("As you shut the door, the hall plunges into oily black... You begin to try random doors. \n");
    int sel_rand = 0;
    while (sel_rand == 0) {
      random_number = rand() % 10 + 1;
      sleep( 7 );
      if (random_number == 1) {
        printf("You find the door to the hall, and open it, and the lights in the loop turn on.");
        // looplite = 1;
        printf("You escape into the hall and shut the fire door, and the lights in the loop turn off.");
        sel_rand = 123;
        break;
      }
      else if (random_number == 2) {
        printf("The lights come on on motion detector. The hand towel dispenser and soap dispenser try to run. The blowout toilet makes a loud roar as it flushes. \n");
        printf("The faucet supports only cold water, and the water has sediment in it... \n");
        printf("The fan is dead, and the light flickers. You decide that there is nothing important here.\n");
      }
      else if (random_number == 3) {
        printf("You try to open the door... It sticks and then begins to move... \n\n");
        printf("The door pivots inward and falls down the stairs with a loud crash. You chase it down the stairs, then there is a bang noise. \n");
        printf("You are thrown from the time singularity in the powerhouse, and are now in the powerhouse. There are eight generators being driven by eight turbines.\n");
        printf("The noise is deafening. The time signularity pops and winks out of existence.\n");
        printf("There are two doors, and an exit. The exit is jammed, and there are black bears outside the door. You decide it is not safe to leave.\n");
        printf("One door is steel, and you turn the handle to have it come off in your hand. The other door is wood, and it opens easily....\n");
        printf("The door leads to a dimly lit staircase with wooden paneled walls.\n");
        printf("The door at the bottom reveals a cubicle farm. \n");
        sel_rand = 9;
        // looplite = 1;
        break;
      }
      else if (random_number == 4) {
        printf("This is the controller room for the wheelchair elevator. The cables are present, and the equipment is in okay condition. \n");
        printf("You stare into the cable chase and become dizzy from the drop off... \n");
        printf("The cables hang in the chase, but the shaft is too dark to see the elevator state, and the controls are solid state.\n");
      }
      else if (random_number == 5) {
        printf("This is a room with a small closet. The ceiling is sagging, and there are ruined desks and unstable chairs in the room. \n");
        printf("A dull gray piece of metal stis next to a pool of water, perched on a rotting desk.\n");
        printf("You look in the closet. It is gutted, and a rat squeals and darts between your feet. \n");
        printf("You dart and run into the hall. You then see the rat and try to chase it. \n");
        printf("There is suddenly the loudest noise you have ever heard. Your hearing is destroyed and you feel your pulse in your head. The building begins to collapse... \n");
        printf("You shoot down the hall and see the building collapsing behind you.");
        printf("You are thrown from the time singularity in the powerhouse, and are now in the powerhouse. There are eight generators being driven by eight turbines. You hear again.\n");
        printf("The noise is deafening. The time signularity pops and winks out of existence.\n");
        printf("There are two doors, and an exit. The exit is jammed, and there are black bears outside the door. You decide it is not safe to leave.\n");
        printf("One door is steel, and you turn the handle to have it come off in your hand. The other door is wood, and it opens easily....\n");
        printf("The door leads to a dimly lit staircase with wooden paneled walls.\n");
        printf("The door at the bottom reveals a cubicle farm. \n");
        sel_rand = 9;
        // looplite = 1;
        break;
      }
      else if (random_number == 6) {
        printf("This is a room with a small closet. The ceiling is sagging, and there are ruined desks and unstable chairs in the room. \n");
        printf("A dull gray piece of metal stis next to a pool of water, perched on a rotting desk.\n");
        printf("You carefully leave...\n");
      }
      else if (random_number == 7) {
        printf("This is a room with a small closet. The ceiling is sagging, and there are ruined desks and unstable chairs in the room. \n");
        printf("A dull gray piece of metal stis next to a pool of water, perched on a rotting desk.\n");
        printf("You are careless and accidentally knock the metal off of the desk. You gasp and bolt out of the room. \n");
        printf("Time slows waaaaayyyy dooooowwwwnnnn as you realize your error........... \n\n\n\n\n\n\n\n\n\n\n");
        printf("You become discoordinated and run into a water fountain and stumble. There is a flash of fire and your hearing is gone. You see the building caught in a state of collapse as if in a freeze frame.... The frame begins to fade... \n\n\n\n");
        printf("Your vision goes solid red.... Everything completely resets....\n");
        sel_rand = 10;
        // looplite = 1;
        break;
      }
      else if (random_number == 8) {
        printf("This is the controller room for the wheelchair elevator. The cables are present, and the equipment is in okay condition. \n");
        printf("You stare into the cable chase and become dizzy from the drop off... \n");
        printf("The cables hang in the chase, but the shaft is too dark to see the elevator state, and the controls are solid state.\n");
      }
      else if (random_number == 9) {
        printf("The lights come on on motion detector. The hand towel dispenser and soap dispenser try to run. The blowout toilet makes a loud roar as it flushes. \n");
        printf("The faucet supports only cold water, and the water has sediment in it... \n");
        printf("The fan is dead, and the light flickers. You decide that there is nothing important here.\n");
      }
      else {
        printf("The lights come on on motion detector. The hand towel dispenser and soap dispenser try to run. The blowout toilet makes a loud roar as it flushes. \n");
        printf("The faucet supports only cold water, and the water has sediment in it... \n");
        printf("The fan is dead, and the light flickers. You decide that there is nothing important here.\n");
      }
    }
    if (sel_rand == 9) {
      powerplant();
    }
    else if (sel_rand == 10) {
      building_reset();
    }
    else {
      hall2space();
    }
  }
}

void powerplant() {
  printf("You walk around inside the room. There is a restroom and three doors. There is a map on a table near the stairs you came down. You cannot return back up the stairs. \n");
  printf("There is a clock on the wall that says 14:44, and does not count time. You look at a map, and it states that the far door is the way out.\n");
  printf("All doors are equidistant from the stairs and from each other, you do not understand which one the note refers to.\n");
  printf("It suddenly becomes pitch black outside and regular flashes of light begin, followed by reguler explosions a few seconds later...\n\n\n\n");
  printf("Press 1, 2, or 3 to enter each door, 4 to search for another option, 5 to enter the restroom, 6 to try to flee up the stairs, you only have three tries.");
  int tries = 0;
  int finalchoose;
  while (tries < 3) {
    scanf("%d", &finalchoose);
    if (finalchoose == 1) {
      printf("This is the solution.\n");
      break;
    }
    else if (finalchoose == 2) {
      printf("You walk onto a covered porch. Lightning dances all over the sky, the bolts shooting and crawling over the surface of the clouds. There is also frequent cloud ground lightning. It is continuous... \n\n\n");
      printf("You fill with white hot dread as your stomach sinks and rush back inside.... \n" );
      printf("That used one try, please try a different door next time.\n");
      tries = tries + 1;
    }
    else if (finalchoose == 3) {
      printf("You walk into a small office, the window flashes regularly with lightning as the explosions continue. The desk is locked... \n");
      printf("All cabinets are locked. You smash one of the cabinets... \n\n\n There is a suction noise.... \n\n\n The room resets itself... \n\n\n You are in the cube farm. \n");
      printf("A warning voice says, \"sorry, wrong option\", That used one try, please try a different door next time.\n\n ");
      tries = tries + 1;
    }
    else if (finalchoose == 4) {
      printf("You try each cubicle in the room. There are 256 cubicles! \n\n\n\n");
      printf("That was 256 tries... You then try to open the door to the outside. \n");
      printf("A warning voice says, \"sorry, wrong option\"\n\n\n\n\n ");
      tries = 255;
      break;
    }
    else if (finalchoose == 5) {
      printf("The restroom is gutted. It reeks of raw sewage... You gag on the smell... \n\n Your eyes water and your throat begins to hurt... \n\n\n You become dizzy... \n\n");
      sleep(4);
      printf("You stagger into the hall... \n\n\n The door shuts slowly as not to let the smell into the cubicle farm.");
      tries = tries + 1;
      printf("You have lost a try doing this option \n\n Please try again \n\n");
    }
    else if (finalchoose == 6) {
      printf("You race up the stairs. You pull the door open! You look over a cliff!!!!! \n\n\n");
      printf("Water is pouring into an oily black void... \n\n\n You become dizzy and then fall into the void.. \n\n");
      sleep(4);
      printf("The room resets... \n\n\n");
      sleep(4);
      tries = 0;
      printf("You reappear at the cubicle farm. You have three tries \n");
    }
    else {
      printf("Error, wrong option given. You make no action, which is no tries and is nothing. Please pick a valid action!");
    }
  }
  if (tries > 2) {
    printf("You lose the ability to control yourself, everything freezes and nothing moves. The whindows go solid black... \n");
    printf("Suddenly everything blurs and the explosions stop. Soft, sad music plays, and large letters appear. They say \"YOU LOSE\" \n");
    printf("The game is over. Please try again.\n");
    printf("Do you want to retry? [1 is yes, 0 is no]");
    int failure;
    scanf("%d", &failure);
    if (failure == 1) {
      printf("Resetting... \n\n\n\n\n The music stops and there is a pop noise! Your vision unblurs.\n You regain control of yourself. \n");
      building_reset();
    }
    else {
      printf("Game Over \n\n\n");
    }
  }
  else {
    printf("You are at your car. Your bicycle is fixed. You pack and head home. \n");
    printf("YOU WIN!!!!!!! \n\n\n");
  }
}

void myFunction() {
  // code to be executed
  printf("You are in a dimly lit gymnasium, only can lights light the walls around the perimeter. You cannot see the ceiling, and your eyes do not expose images in the dark as well as they ought. \n");
  printf("You notice a set of doors in the northwest corner, and a unisex restroom in the middle of the east wall, a metal door on the west wall, and a single door on the south wall...\n");
  printf("Enter 1 to go northwest, 2 to enter the restroom, 3 to enter the metal door, and 4 to use the single door on the south wall. \n");
  int firstareachoose;
  scanf("%d", &firstareachoose);
  if (firstareachoose == 1) {
    fourier();
  } else if (firstareachoose == 2) {
    printf("The restroom is gutted, and the fixtures are missing. It is an empty room...\n\n");
    printf("You gag on the smell and leave...\n");
    myFunction();
  } else if (firstareachoose == 3) {
    printf("This door opens to a narrow hall. \n\n");
    narrowhall();
  } else if (firstareachoose == 4) {
    printf("This is a storage locker.\n");
    printf("There are filthy rags all over the floor... \n");
    printf("A computer module is connected to some cables and hangs from the ceiling. \n It flashes an error light five times and then pauses before repeating. \n");
    printf("There are boxes of junk on the shelves. \n");
    printf("You do not see any importance in this area and leave. \n");
    myFunction();
  } else {
    printf("Error, Please input 1, 2, 3, or 4! \n\n\n");
    myFunction();
  }
}

void fouriereast() {
  printf("This is a small lobby like area. It is pi/2 radians around the gym from the first lobby like area. \n");
  printf("The unlit light fixture hangs over a pattern in the floor tiles. \n It is dark outside. The clock is frozen at 00:34 and does not count time.");
  printf("There are no windows, and a single hall leads away from the loop to the east. You see doors down it. There is a mechanical chase behind you.\n");
  printf("Input 1 to proceed to the hall, 2 to go right, 3 to go left, and 4 to try the mechanical chase. \n");
  int choose5;
  scanf("%d", &choose5);
  if (choose5 == 1) {
    printf("you proceed down the hall...");
    hallspace();
  } else if (choose5 == 2) {
    fourierrear();
  } else if (choose5 == 3) {
    fourier();
  } else if (choose5 == 4) {
    printf("The door opens easily.\n");
    printf("The mechanical chase has a concrete slab floor and pipes inside it. \n");
    printf("There is an air handler in the room. \n");
    printf("There are spiders in the room. You do not linger. The room goes nowhere... \n\n\n");
    printf("You close the door. \n");
    fouriereast();
  } else {
    printf("Error, Please input 1, 2, 3, or 4! \n\n\n");
    fouriereast();
  }
}

void hallspace() {
  printf("This is a hall with lots of doors, you try some of the doors. 7 are unlocked... \n");
  printf("The hall is dimly lit with emergency lights. There is a faint smell of water damage and mold.");
  printf("There are no windows, and the hall is very dark in places. \n");
  printf("Input 1-7 to pick doors 1-7, any invalid integer to exit to the loop. \n");
  int choose6;
  scanf("%d", &choose6);
  switch (choose6) {
    case 1:
      printf("This is a gutted room.\n");
      printf("The floor is dusty and there are places where desks were. There are phone line ports low on the walls... \n\n");
      printf("The lights barely work, and one bulb provides faint light. You can see mowed grass and overgrown bushes outside. \n");
      printf("You return to the hall...\n");
      hallspace();
      break;
    case 2:
      printf("This is a classroom.\n");
      printf("The room has desks and a chalk board. The wall calendar says May 2003. There is an old beige computer on the teacher desk. \n\n");
      printf("The lights are on and are very bright. You look around and find nothing of value here. A complete score of Vaughan Williams Symphony 5 is on the teacher desk.\n");
      printf("A picture of a soldier fly is on the wall. You return to the hall...\n");
      hallspace();
      break;
    case 3:
      printf("This is another classroom.\n");
      printf("The floor is damaged with brown stains and light mold. The lights do not really work, and while all tubes light, there is very little light. \n\n");
      printf("There is a calculus textbook on the teacher desk, and the chalkboard is filled with integrals. There is a picture of a hover fly in the wall. \n");
      printf("You return to the hall as you find nothing of interest here...\n");
      hallspace();
      break;
    case 4:
      printf("This is a stairwell to the second floor.\n");
      printf("The walls are cinder block. The lights are very dim. You walk upstairs and open the door. \n\n");
      printf("There is a click noise, and the hall floods with warm incandescent light. You gently shut the stairwell door. \n\n");
      // set the light state
      halllite = 1;
      hall2space();
      break;
    case 5:
      printf("This is a gutted room.\n");
      printf("The floor is a slab, and the walls are steel studs. The ceiling is bald and has only beams. \n\n");
      printf("There are no lights. The room fades to black so that you cannot resolve the back wall clearly. There is nothing in the room. \n");
      printf("You return to the hall as you find nothing of interest here...\n");
      hallspace();
      break;
    case 6:
      printf("This is another classroom.\n");
      printf("The floor is damaged with brown stains and light mold. The lights do not really work, and while all tubes light, there is very little light. \n\n");
      printf("There is a map of 19th century Europe on one wall and a map of 19th century Africa on another wall and one of 19th century Asia on the back wall. There is a map of Brazil on the teacher desk. \n");
      printf("The chalk board has history facts on it from the late 19th century. A picture of a horse fly is on the wall. You return to the hall as you find nothing of interest here...\n");
      hallspace();
      break;
    case 7:
      printf("This is another classroom.\n");
      printf("The floor is damaged with brown stains and light mold. The lights do not really work, and while all tubes light, there is very little light. \n\n");
      printf("There is a physics with calculus textbook on the teacher desk, and the chalkboard has solved projectile motion problems on it. There is a picture of a bee fly in the wall. \n");
      printf("You return to the hall as you find nothing of interest here...\n");
      hallspace();
      break;
    default:
      printf("You exit to the hall loop \n");
      fouriereast();
  }
}

void fourier() {
  printf("This is a small lobby like area.\n");
  printf("The unlit light fixture hangs over a pattern in the floor tiles. \n It is dark outside. The clock is frozen at 00:34 and does not count time. There is a full moon outside.");
  printf("There are huge windows to your north. The windows show a brightly lit courtyard with LED lights and freshly mowed grass. There are clippings on the sidewalks. \n");
  printf("Input 1 to return to the gym, 2 to go right, 3 to go left, and 4 to try to exit with the exit door. \n");
  int choose3;
  scanf("%d", &choose3);
  if (choose3 == 1) {
    printf("you return to the gym");
    myFunction();
  } else if (choose3 == 2) {
    fouriereast();
  } else if (choose3 == 3) {
    fourierwest();
  } else if (choose3 == 4) {
    printf("The door opens easily.\n");
    printf("It is hot and disgusting outside. There are no clouds. \n");
    printf("A german shepherd dog rushes at you and bites you. You do not feel it. \n");
    printf("A security alarm goes off. Suddenly there is a blinding flash of light and a pop noise.\n");
    printf("Everything resets and you appear in the gym after another pop noise. \n");
    building_reset();
  } else {
    printf("Error, Please input 1, 2, 3, or 4! \n\n\n");
    fourier();
  }
}

void fourierrear() {
  printf("This is a another small lobby like area, directly pi radians across the gym from the first lobby like area.\n");
  printf("The unlit light fixture hangs over a pattern in the floor tiles. \n It is dark outside. The clock is frozen at 00:34 and does not count time. There is a full moon outside.");
  printf("There are huge windows to your south. The windows show a vacant parking lot without working lights. The dead lights cast shadows over the parking lot.\n");
  printf("A janitor closet is open, and a service sink hisses and gurgles noisily inside the room. It flushes continuously and wastes water as it flushes. \n");
  printf("You turn to face outside. There is a solid glass door, but it is locked from the outside. You turn to face the gym. There are three doors, two to your right and one to your left... \n");
  printf("You can also go right or left... \n");
  printf("Input 1 to go to the door on your immediate right, 2 to go right, 3 to go left, and 4 to go to the door on your left, 5 if you really want to smash the glass door, 6 to use the far right door. \n");
  printf("You have a hesitation about smashing glass... \n");
  int choose4;
  scanf("%d", &choose4);
  if (choose4 == 1) {
    printf("This is a small room. There is a desk without drawers and a book case in the room. \n");
    printf("The books are in many different languages, and very little english is seen. \n");
    printf("A fire alarm hangs from the ceiling by a single wire. The computer is broken, and asks for bootable media when tried. \n");
    printf("You decide to go back into the main hall. \n");
    fourierrear();
  }
  else if (choose4 == 2) {
    // return back to other side
    fourierwest();
  }
  else if (choose4 == 3) {
    fouriereast();
  }
  else if (choose4 == 4) {
    printf("This is a stairwell. It is moderately lit with fluorescent lights. A fire alarm hangs from the wall by a single wire. You climb to the second floor. \n");
    printf("The door handle turns one quarter turn both ways, and the bolt seems to throw, but the door is jammed. \n");
    printf("You look through the door and see oily blackness, the fluorescent lights in the stairwell not lighting up the second floor...\n");
    printf("You decide to go back downstairs... \n");
    fourierrear();
  }
  else if (choose4 == 5) {
    printf("You wind up and punch the door. It shatters into a quadrillion tiny shards of glass. It was safety glass! \n");
    printf("A security system goes off and a school bell rings while one alarm makes a cop car sound and another makes a whooping noise and a british female voice repeats intruder alert! \n");
    printf("Suddenly the parking lot fills with bright light. You fill with dread... A great dane rushes toward the building... \n");
    printf("Suddenly a time singularity appears and explodes. Everything resets. There is a pop noise... \n");
    printf("You float back into the gym... There is a pop noise... \n");
    building_reset();
  }
  else if (choose4 == 6) {
    if (wheelchair_elev == 1) {
      printf("This is a wheelchair elevator. The steel plate is in the lowered position.\n");
      printf("You stand on it and notice that the control stand has two buttons, 1 and 2. \n");
      printf("What floor do you want to go to?\n");
      int lowerstand;
      scanf("%d", &lowerstand);
      if (lowerstand == 1) {
        printf("The door automatically closes. \n");
        fourierrear();
      }
      else if (lowerstand == 2){
        printf("You close the door. The elevator groans to life and takes you to the second floor. \n\n");
        wheelchair_elev = 2;
        hallloop();
      }
      else {
        printf("Please input a valid button press next time! \n\n");
        fourierrear();  
      }
    }
    else {
      printf("This is a wheelchair elevator. The steel plate is in the raised position.\n");
      printf("You walk on the concrete floor and then leave ... \n");
      printf("The door automatically closes. \n");
      fourierrear();
    }
  }
  else {
    printf("Error, Please input 1, 2, 3, 4, 5, or 6! \n\n\n");
    fourierrear();
  }
}

void fourierwest() {
  printf("This is a another small lobby like area, 3pi/2 radians across the gym from the first lobby like area.\n");
  printf("The unlit light fixture hangs over a pattern in the floor tiles. \n It is dark outside. The clock is frozen at 00:34 and does not count time. There is a full moon outside.");
  printf("There is a set of doors to the west. The sign over the doors says theater on it. A nightlight casts a warm, amber glow in the room. It is very quiet....\n");
  printf("An unmarked door is visible on the inner wall... \n");
  printf("There is an exit sign over the theater doors. There may be an exit behind the doors. \n");
  printf("You can also go right or left... \n");
  printf("Input 1 to go to the unmarked door, 2 to go right, 3 to go left, and 4 to into the theater, 5 if you really want to try to exit via the theater. \n");
  printf("You have a hesitation about smashing glass... \n");
  int choose5;
  scanf("%d", &choose5);
  if (choose5 == 1) {
    printf("This is a tiny room. It is 3 meters by 2 meters and has a ceiling that is 2 meters high. It is very tiny. \n");
    printf("The single daylight LED is embedded in the ceiling. It flashes... \n\n\n");
    printf("It is gutted and the walls are steel. You leave... \n");
    printf("You decide to go back into the main hall. \n");
    fourierwest();
  }
  else if (choose5 == 2) {
    // return back to other side
    fourier();
  }
  else if (choose5 == 3) {
    fourierrear();
  }
  else if (choose5 == 4) {
    printf("This is an empty theater. It is very dimly lit.\n");
    sleep(3);
    printf("You lose interest and leave... \n");
    fourierwest();
  }
  else if (choose5 == 5) {
    printf("You enter the theater and see the exit door... You kick it, and it falls over....\n");
    printf("A school bell rings! You dart across the parking lot!!!!!!!!!!! You run at 40 miles per hour!!!!! \n");
    sleep(5);
    printf("Suddenly the parking lot fills with bright light. You fill with dread... A great dane rushes toward you... You stay ahead of the great dane... \n");
    sleep(5);
    printf("Suddenly a time singularity appears near the building, you curve to approach it. It is too late!!!!!!!!!! The time singularity explodes, and the building resets without you!!!!! \n");
    printf("The ground folds and you see the great dane try to bite you.... \n");
    sleep(3);
    printf("Game over\n\n\n");
    sleep(3);
    printf("Please try again! \n\n");
  }
  else {
    printf("Enter 1-5!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n\n\n");
    fourierwest();
  }
}

void narrowhall() {
  printf("You are in a narrow hall with a low ceiling. The floor tiles are very old. The wallpaper is peeling off of the walls.\n");
  printf("There are two doors in the hall, one at the midpoint and one at the far end, on the left wall. \n");
  printf("The light is dying and is flashing and fluctuating in brightness \n press 1 to use the midpoint door and 2 to use the far door, anything else to leave. \n");
  int choose2;
  scanf("%d", &choose2);
  if (choose2 == 1) {
    printf("This is a small room. There are a few desks and chairs in the room.\n");
    printf("It looks like it was an office at one time. There is nothing of value in this room.\n");
    printf("You walk into the room, and notice that all walls are bare and there is no storage container of any type.\n");
    printf("You decide to go back into the narrow hall \n");
    narrowhall();
  }
  else if (choose2 == 2) {
    printf("This is a small room. There are a few desks and chairs in the room.\n");
    printf("It looks like it was an office at one time. There is a mini fridge and a microwave in the room. A smoke detector hangs by a wire on the far wall. \n");
    printf("You walk into the room, and then the smoke alarm buzzes. You startle...\n");
    printf("You decide to go back into the narrow hall \n");
    narrowhall();
  }
  else {
    printf("You return to the gym.\n");
    myFunction();
  }
}
