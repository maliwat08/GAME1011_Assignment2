#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <fstream>
#include "EndDialogue.h"
#include "PlayerCreation.h"

using namespace std;
int choice;

void divider()
{
    system("pause");
    system("cls");
}

int main() {

    string name;


    EndDialogue ed;
    playerCreation player;

    stack<int> monsterCounter;
    queue<string> GoodStoryQueue;

    string line;
    //for text dialogue
    ifstream myfile("GoodStory.txt");
    if (myfile.is_open()) {
        while (getline(myfile, line)) {
            GoodStoryQueue.push(line);
        }
        myfile.close();
    }

    else cout << "Unable to open file";

    //start
    cout << "Welcome to the game!\n";
    player.enterName(name);
    cin >> name;
    divider();
    player.genderChoice(choice);
    cin >> choice;
    cout << "You are a " << player.gender << " traveler!\n";
    divider();

    cout << "YOU ARE " << name << " AND THE FAITH OF HUMANITY IS WITHIN YOUR HANDS. THE WORLD NEEDS YOU, " << name << "!!!" << endl;
    divider();

    cout << "WHERE AM I? AM I DEAD? YOU WOKE UP IN AN OLD ROOM, LIGHTS WERE SHUT DOWN AND YOU HEAR THE FLOOR BOARDS CREAKING. YOU STOOD UP AND DECIDED TO GO OUTSIDE. AS YOU GO OUTSIDE... \n";
    divider();

    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();

    
    //What will you do?
    cout << GoodStoryQueue.front();
    cout << "\n1. Help Joe \t 2. Leave Joe (Enter only the number of the choice)\n";
    cout << "Your answer here: ";
    cin >> choice;
    divider();

    if (choice == 1)
    {
        GoodStoryQueue.pop();
    }

    else if (choice == 2)
    {

        cout << "\nJOE GOT ANGRY AT YOU!\n";
        divider();

        cout << "JOE DECIDED TO STAB YOU IN THE BACK BECAUSE YOU DIDN'T HELP HIM.\n";
        ed.youAreDead();
    }

    //HE THANKED YOU AND IS NOW YOUR TRAVEL BUDDY, JOE HAS A MAP AND TOLD YOU THAT THERE ARE TWO WAYS TO GO TO THE CONA'S LOUNGE AT THE NORTH
    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();
    divider();

    //WHERE WILL YOU FIRST HEAD WITH JOE ?
    cout << GoodStoryQueue.front();
    cout << "\n1. Go North  2. Go South (Enter only the number of the choice)\n";
    cout << "Your answer here: ";
    cin >> choice;
    divider();
    if (choice == 1)
    {
        GoodStoryQueue.pop();
    }

    else if (choice == 2)
    {
        cout << "YOU DECIDED TO GO TO THE SOUTH, WHILE WALKING, YOU BOTH SLIPPED AT THE EDGE OF THE CLIFF.\n";
        ed.youAreDead();
    }


    //YOU AND JOE ENCOUNTERED A MONSTER
    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();
    divider();

    //THE MONSTER SEEMS FIERCE
    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();
    divider();

    //THE MONSTER ASKED YOU A QUESTION: WHAT IS 5+5?
    cout << GoodStoryQueue.front() << endl;
    cout << "1. 25 \t 2. 10 \t 3. ATTACK IT\n";
    cout << "Your answer here: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "The Monster is pissed, and it decided to attack you.";
        ed.youAreDead();
        divider();
        GoodStoryQueue.pop();
    }


    else if (choice == 2)
    {
        GoodStoryQueue.pop();
        monsterCounter.push(1);
        divider();
    }


    else if (choice == 3)
    {
        cout << "YOU DECIDED TO KILL IT.\n";
        GoodStoryQueue.pop();
        divider();
    }

    //YOU DECIDED TO GO FURTHER NORTH
    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();
    divider();

    //YOU SAW A CASTLE, YOU DECIDED TO GO THERE
    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();
    divider();

    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();
    cout << "THERE ARE MONSTERS GUARDING THE GATE\n";
    //WHAT WILL YOU DO?
    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();
    cout << "1. BEFRIEND IT \t 2. KILL IT\n";
    cout << "Your answer here: ";
    cin >> choice;
    divider();

    if (choice == 2)
    {
        cout << "YOU KILLED THE GUARDS. THE OTHER MONSTERS INSIDE THE CASTLE ARE ALARMED. THEY DECIDED TO ATTACK YOU\n";
        divider();
        cout << "WHAT WILL YOU DO?\n ";
        cout << "1. RUN AWAY \t 2. ATTACK THEM\n";
        cout << "Your answer here: ";
        cin >> choice;
        divider();

        if (choice == 1)
        {
            cout << "OUT OF PANIC, YOU RAN AS FAST AS YOU CAN, NOT KNOWINGLY THERES A TRAP NEARBY, YOU ACCIDENTALLY STEPPED ON IT.";
            ed.youAreDead();
            divider();
        }

        if (choice == 2)
        {
            cout << "YOU DECIDED TO ATTACK THEM.\n";
            GoodStoryQueue.pop();
            GoodStoryQueue.pop();
            GoodStoryQueue.pop();
            divider();
        }

    }


    else if (choice == 1)
    {
        //THE MONSTER SHOWED 3 CUPS, 2 OF THE CUPS IS FILLED WITH POISON, BUT THE OTHER 1 IS FILLED WITH POTION OF STRENGTH
        cout << GoodStoryQueue.front() << endl;
        GoodStoryQueue.pop();
        divider();

        //CHOOSE WHICH CHALICE YOU WILL DRINK
        cout << GoodStoryQueue.front() << endl;
        GoodStoryQueue.pop();
        cout << "1. YELLOW CHALICE \t 2. BLUE CHALICE \t 3. RED CHALICE\n";
        cout << "Your answer here: ";
        cin >> choice;
        divider();

        if (choice == 1)
        {
            cout << "THE YELLOW CHALICE IS FILLED WITH A YELLOWISH COLORED WATER" << endl;
            cout << "YOU DECIDED TO DRINK THE CHALICE, AND YOU REALIZED IT IS POISONED." << endl;
            ed.youAreDead();
        }

        else if (choice == 2)
        {
            cout << "THE BLUE CHALICE IS FILLED WITH A SEA BLUE COLORED WATER" << endl;
            cout << "YOU DECIDED TO DRINK THE CHALICE, AND YOU REALIZED IT IS POISONED." << endl;
            ed.youAreDead();
        }

        else if (choice == 3)
        {
            //THE RED CHALICE IS FILLED WITH STRAWBERRY WINE, YOU DECIDED TO SLEEP AFTER DRINKING IT. THE MONSTERS ARE AMAZED FOR YOUR BRAVERY SO THEY DECIDED TO JOIN YOU ALSO
            cout << GoodStoryQueue.front() << endl;
            GoodStoryQueue.pop();
            monsterCounter.push(2);
            monsterCounter.push(3);
            divider();
        }
    }

    //YOU WENT FURTHER INSIDE THE CASTLE
    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();
    divider();

    //THERE ARE TWO ROOMS AHEAD OF YOU
    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();
    divider();

    cout << "Which door will you choose to enter?";
    cout << "\n1. Violet Door \t 2. Green Door\n";
    cout << "Your answer here: ";
    cin >> choice;
    divider();

    if (choice == 1)
    {
        cout << "\nIT SEEMS STRANGE BUT THE DOOR IS UNLOCKED ALL BY ITSELF, SO YOU DECIDED TO CONTINUE.";
        divider();

        GoodStoryQueue.pop();
        GoodStoryQueue.pop();
        GoodStoryQueue.pop();
    }

    else if (choice == 2)

    {
        //THERE IS A LOCK KEY LABELED : ENTER PASSCODE HERE, THERE IS ALSO A CLUE BELOW RED: #FF0000 BLUE: #0000FF YELLOW: #FFFF00 THERE IS ALSO A PIECE FROM A SHEET OF PAPER, WHERE: GREEN: #008...
        cout << GoodStoryQueue.front() << endl;
        GoodStoryQueue.pop();

        //ENTER 6 DIGIT PASSCODE: 
        cout << GoodStoryQueue.front() << endl;
        GoodStoryQueue.pop();
        cout << "Your Answer Here: ";

        string choiceLetter;
        cin >> choiceLetter;
        while (choiceLetter != "008000")
        {
            system("cls");
            cout << "Hint: RED: #FF0000 BLUE: #0000FF YELLOW: #FFFF00 THERE IS ALSO A PIECE FROM A SHEET OF PAPER, WHERE: GREEN: #008...\n";
            cin >> choiceLetter;
        }

        //THERE IS A SMALL MONSTER HIDING HERE, IT DECIDED TO GO WITH YOU.
        cout << GoodStoryQueue.front() << endl;
        monsterCounter.push(4);
        GoodStoryQueue.pop();
        divider();
    }

    //THERE IS A LAST BIG DOOR AHEAD OF YOU, YOU DECIDED TO ENTER IT. YOU SAW KAREN RESTRAINED INSIDE. THE LARGE CONA ASKED HIM IF HE IS WORTHY ENOUGH.
    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();
    divider();

    //HOW MANY MONSTERS HAVE YOU BROUGHT WITH YOU?
    cout << GoodStoryQueue.front() << endl;
    GoodStoryQueue.pop();
    divider();

    cout << "You brought: " << monsterCounter.size() << " monsters with you!!\n";

    if (monsterCounter.size() > 2)
    {
        //YOU ARE WORTHY ENOUGH TO BE THE NEXT KING OF THE ISLE, TOGETHER WITH YOUR QUEEN, KAREN
        cout << GoodStoryQueue.front() << endl;
        GoodStoryQueue.pop();
        divider();

        ed.youAreAlive();
    }

    else if (monsterCounter.size() < 2)
    {
        cout << "\nYOU ARE NOT WORTHY TO BE THE NEXT KING OF THE ISLE, YOU SLAUGHTER INSTEAD OF BEFRIENDING WITH US, NOW WYOU WILL PAY THE PRICE OF YOUR WRONG DOINGS.\n";
        ed.youAreDead();
    }

}

