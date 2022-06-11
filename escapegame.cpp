#include <bits/stdc++.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void bedroom1(){
	
    void house();

	cout << "1. Piece of paper in bed" << endl;
	cout << "2. A dead body in bed" << endl;
    cout << "3. Laptop" << endl;
    cout << "4. Go back" << endl;

    int choice;
    cout << ">> "; cin >> choice;

    system("cls");

    if(choice == 1)
    {
        cout << "What the fuck? A random crazy guy just kidnapped me! I need to get out of here!" << endl;
        cout << "Pretty sure the last digit for the door is 3 when I saw that crazy fucker went out, but I can't see the rest. I have to find out." << endl;
        system("pause");
        system("cls");
        bedroom1();
    }

    else if(choice == 2)
    {
        cout << "Man.. Poor guy." << endl;
        system("pause");
        system("cls");
        bedroom1();
	}
    
	else if(choice == 3)
	{
        cout << "It's a broken laptop, but there's a number 7 in this thing. A clue for the code perhaps?" << endl;
        system("pause");
        system("cls");
        bedroom1();
    }
	else if(choice == 4)
        house();
}

void bedroom2(){
        
        void house();
    
        cout << "Nothing here." << endl;
        cout << "1. Go back" << endl;
        
        int choice;
        cout << ">> "; cin >> choice;

        if(choice == 1)
		{
			system("cls");
            house();
        }
}

void deadbody(){
        
    void house();
    cout << "1. Look at the body" << endl;
    cout << "2. Go back" << endl;

    int choice;
        cout << ">> "; cin >> choice;
        
        system("cls");

        if(choice == 1)
        {
            cout << "It's a dead body. I don't know what happened to him, but I'm sure he was a good person." << endl;
            system("pause");
            system("cls");

            cout << "Wait, there's a piece of paper in the body. It says: What is the seven to the second power?" << endl;
            system("pause");
            system("cls");

            cout << "It's 49, but what does that mean? A clue perhaps?" << endl;
            system("pause");
            system("cls");

            deadbody();
        }
        else if(choice == 2)
        {
            system("cls");
            house();
        }
}

void paper(){
        
    void house();
    
    cout << "Although they're in the same room, they are not close to each other." << endl;
    system("pause");
    system("cls");
    
    cout << "What the hell does that even mean?" << endl;
    system("pause");
    system("cls");
    house();
}

void door(){
	
	void house();
	
	cout << "It's locked." << endl;
    system("pause");
    system("cls");

    cout << "There is a 4 digit code on the door." << endl;
    system("pause");
    system("cls");

    string code;
    cout << "Enter the code: ";
    cin >> code;

    if(code == "9743")
    {
        cout << "Finally! I have to get out from here ASAP!" << endl;
        system("pause");
        system("cls");
        cout << "Congratulations! You Finished the game!";
    }
    
    else
    {
        cout << "It's a wrong code." << endl;
        system("pause");
        system("cls");
        house();
    }
}



void house(){
    
    int main();

	cout << "1. Bedroom 1" << endl;
    cout << "2. Bedroom 2" << endl;
    cout << "3. A dead body" << endl;
    cout << "4. Door to escape" << endl;
    cout << "5. Piece of paper" << endl;
    cout << "6. Game Main Menu" << endl;

    int choice;
    cout << ">> " ;
    cin >> choice;

    system("cls");
	
	switch(choice)
    {
        case 1:
            bedroom1();
            break;

        case 2:
            bedroom2();
            break;

        case 3:
            deadbody();
            break;

        case 4:
            door();
            break;

        case 5:
            paper();
            break;

        case 6:
            main();
            break;
		
		default:
			cout << "There's nothing." << endl;
			system("pause");
			system("cls");
			house();
	}
}

void intro(){
    
	cout << "Where am I?" << endl;
    system("pause");
    system("cls");
    
    cout << "Someone just kidnapped me I think.." << endl;
    system("pause");
    system("cls");
    
    cout << "I have to check the other rooms." << endl;
    system("pause");
    system("cls");
}


int main(){

    cout << "===========GTFO From There!===========" << endl;
    cout << endl;

    cout << "1. Start Game" << endl;
    cout << "2. Exit" << endl;

    int choice;
    cin >> choice;

    if(choice == 1)
    {
        system("cls");
		intro();
        house();
    }
	else
    {
        return 0;
    }

}
