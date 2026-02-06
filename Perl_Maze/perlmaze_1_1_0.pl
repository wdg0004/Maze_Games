#!/usr/bin/perl
use 5.040;
print "Enter your first name. \n";
chomp (my $fname = <STDIN>);

print "Enter your last name. \n";
chomp (my $lname = <STDIN>);

print "Enter an integer somewhere in the range of 5 to 25.\n";
chomp(my $seed = <STDIN>);

print "--------------------------------------------------\n";
print "Perl Maze Game\n";
print "Version 1.1.0\n";
print "--------------------------------------------------\n\n\n";

print "You are $fname $lname and you are riding your bicycle in the woods near the Cascades after going backpacking.\n";
print "The chain comes off your bicycle, then your right pedal falls off... \n\n\n\n\n You wreck!\n\n\n";
print "You look behind you to see the trail become a gravel road... \n\n\n";
print "You hear a siren noise...\n\n\n";
print "You run about a mile down the gravel road, then see an abandoned mineshaft... \n\n\n";
print "You see an enormous stratovolcano in the distance.... It explodes... \n\n\n\n";
print "There is a blinding flash of light and a reversed cymbal crash!\n\n\n\n  All goes dark.... \n";
print "You are in a small room with daylight LEDs and a ruined desk. There is a beige computer and a filing cabinet in the room.\n";
print "A rotten door stands in front of you, and the room has discolored walls and carpet and black mold on the ceiling\n";
print "There is what appears to be a closet to your right...\n";
my @inventoryqueue = qw(flashlight hatchet whistle flare compass filter saw cellphone key boomerang trumpet hammer);
my $loopsustain = "yes";
my $door1state = "shut";
my $door2state = "shut";
my $door3state = "shut";
while ($loopsustain eq "yes")  {
    print "Input 1 to use the door and 2 to try the closet. \n";
    chomp (my $choose1 = <STDIN>);
    if ("$choose1" eq "1") {
        if ($door1state eq "shut") {
            my $itemuse = pop @inventoryqueue;
            print "You strike the door hard with a $itemuse \n";
            print "The door comes off of its hinges!!!!!! \n\n\n\n\n\n\n\n";
            print "It falls into you. You see a gutted closet. \n\n\n";
            $door1state = "open";
        } else {
            print "This is a gutted closet.\n";
        }
    } elsif ("$choose1" eq "2") {
        $loopsustain = "no";
        print "The door opens to reveal a larger office space.\n";
    } else {
        print "Input 1 or 2\n";
    }
}
print "The office space has a rotten conference table and is completely empty other than the table.\n";
print "There are doors on three sides of the room. You can only pick the doors that do not return to the previous area.\n";
$loopsustain = "yes";
$door1state = "shut";
while ($loopsustain eq "yes")  {
    print "Input 1 to use the door on your right, 2 to use the center door, and 3 to use a door on your left: \n";
    chomp (my $choose1 = <STDIN>);
    if ("$choose1" eq "1") {
        if ($door1state eq "shut") {
            print "The door opens to a walk in closet with a frosted light fixture that tries to light... \n";
            if ($door2state eq "shut") {
                print "The light stabilizes and does not go out... \n";
            } else {
                print "The fixture blows with a bang noise.....\n";
                $door1state = "open";
            }
        } else {
            print "This is a dark closet.\n";
            print "You see a portal in the closet that you could not see with the light on.\n";
            print "Input 1 to enter the portal and anything else to leave.";
            chomp (my $choose2 = <STDIN>);
            if ($choose2 eq "1") {
                $loopsustain = "no";
            }
            $door1state = "shut";
        }
    } elsif ("$choose1" eq "2") {
        print "The door opens to reveal a gutted reach in closet...\n";
        $door2state = "open";
    } elsif ("$choose1" eq "3") {
        print "The door knob turns one eighth turn and then stops.\n";
        print "The door is locked...\n";
    } else {
        print "Input 1, 2, or 3\n";
    }
}
print "You enter a concrete room with a single daylight LED hanging from the ceiling\n";
print "A pair of steel doors can be seen, one in front of you and one to your right\n";
print "There is a keypad on the left wall. \n";
my $num = int(rand($seed));
$loopsustain = "yes";
$door1state = "shut";
$door2state = "shut";
while ($loopsustain eq "yes")  {
    say "Input 1 to use the door in front of you, 2 to use the door to your right, or 3 to try the keypad.";
    chomp (my $choose1 = <STDIN>);
    if ("$choose1" eq "1") {
        if ($door1state eq "shut") {
            print "The door opens to a walk in closet with a frosted light fixture that tries to light... \n";
            if ($door2state eq "shut") {
                print "The light stabilizes and does not go out... \n";
            } else {
                print "The fixture blows with a bang noise.....\n";
                $door1state = "open";
            }
        } else {
            if ($door3state eq "shut") {
                print "The door opens to a descending series of stairs with a force field stopping you from entering... \n";
            } else {
                print "The door opens to a descending series of stairs. You begin to walk down them.\n";
                $loopsustain = "no";
            }
        }
    } elsif ("$choose1" eq "2") {
        print "The door swings rapdily open...";
        $door2state = "open";
        if ($door1state eq "open") {
            say "There is a gutted room. \n\n You see a bright flash of light!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!";
            $door2state = "shut";
        } else {
            say "There is a gutted room.";
        }
    } elsif ("$choose1" eq "3") {
        my $index = 0;
        while (1) {
            say "Please enter a number at the pad: ";
            chomp (my $guess = <STDIN>);
            $index++;
            $guess == $num ? last : print "Wrong Number!\n";
        }
        say "Correct.";
        if ($index < 10) {
            $door3state = "open";
            say "OK";
        } else {
            $door2state = "shut";
            $door1state = "shut";
            say "ERROR";
        }
    } else {
        print "Input 1, 2, or 3\n";
    }
}
print "The stairs are in a large room with cement walls. The ceiling has industrial lights and a flat surface and is very high.\n ";
print "You walk down five flights of stairs... The stairs continue to infinity!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n\n\n\n\n\n\n\n \n";
print "You feel like you are going to fall, and you fill with terror!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! \n\n\n\n\n\n\n";
print "You turn right and see a door and enter the door and slam it behind you. \n";
print "You are in a small room with wooden doors on all sides... You cannot return back to the stairwell... \n";
print "The floor is dirty brown wood, and the walls are light gray. The ceiling is a popcorn ceiling with a dim amber light. There is a rather small brown HVAC vent on the ceiling.\n";
print "The room is silent..... \n\n\n";
