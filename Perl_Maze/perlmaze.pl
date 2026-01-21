#!/usr/bin/perl

print "Enter your first name. \n";
chomp (my $fname = <STDIN>);

print "Enter your last name. \n";
chomp (my $lname = <STDIN>);

print "--------------------------------------------------\n";
print "Perl Maze Game\n";
print "Version 1.0.0\n";
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
@inventoryqueue = qw(flashlight hatchet whistle flare compass filter saw cellphone key boomerang trumpet hammer);
my $loopsustain = "yes";
my $door1state = "shut";
my $door2state = "shut";
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
