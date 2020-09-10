#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                          // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: dog
//  action 1: bark
dog.bark();
//  action 2: run
dog.run();
//  action 3: sit
dog.sit();
//  2)
//  Noun: leg
//  action 1: bend
leg.bend();
//  action 2: kick
leg.kick();
//  action 3: stretch
leg.stretch();
//  3) 
//  Noun: cat
//  action 1: purr
cat.purr();
//  action 2: climb
cat.climb();
//  action 3: run
cat.run();
//  4) 
//  Noun: dumpster truck
//  action 1: drive forward
dumpsterTruck.driveForward();
//  action 2: crush trash
dumpsterTruck.crushTrash();
//  action 3: open crusher
dumpsterTruck.openCrusher();
//  5) 
//  Noun: human
//  action 1: talk
human.talk();
//  action 2: walk
human.walk();
//  action 3: punch
human.punch();
//  6)
//  Noun: radar
//  action 1: interrogate
radar.interrogate();
//  action 2: track
radar.track();
//  action 3: report
radar.report();
//  7)
//  Noun: plane
//  action 1: roll
plane.roll();
//  action 2: pitch
plane.pitch();
//  action 3: yaw
plane.yaw();
//  8)
//  Noun: video game
//  action 1: display graphics
videoGame.displayGraphics();
//  action 2: load game
videoGame.loadGame();
//  action 3: save game
videoGame.saveGame();
//  9)
//  Noun: camera
//  action 1: take picture
camera.takePicture();
//  action 2: record video
camera.recordVideo();
//  action 3: change mode
camera.changeMode();
//  10)
//  Noun: ableton
//  action 1: create track
ableton.createTrack();
//  action 2: process sample
ableton.processSample();
//  action 3: change buffer size
ableton.changeBufferSize();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
