#include <iostream>
using namespace std;

//function for the options to choose from
//function for fortunes
//this game needs to provide the next set of options based on the previous choice

    //classes and functions
class OptionsClass{
    private:
    int choice1;
    int choice2;
    int choice3;

    public:
    //opening sequence
    void welcome(){
        cout << "Welcome Traveler, I see you have come seeking fortune." << endl;
        while(true){
            int ready;
            cout << "\e[1m 1. Aye\e[0m" << endl;
            cout << "\e[1m 2. Nay\e[0m" << endl;
            cout << "Your choice: " << endl;
            cin >> ready;
            if (ready == 1){
                void directions();
                break;
            }
            else if (ready == 2){
                cout << "Then be on your way." << endl;
                exit (0);
            }
            else {
                cout << "I'm sorry, I didn't understand that." << endl;
            }
    }
}


    //options
    void directions(){
        while (true){
        cout << "Where are you headed?" << endl;
        cout << "1. North" << endl;
        cout << "2. East" << endl;
        cout << "3. South" << endl;
        cout << "4. West" << endl;
        cout << "Your choice: " << endl;
        cin >> choice1;
        if (choice1 == 1, 2){
            NorthEast();
        }
        else if (choice1 == 3, 4){
            SouthWest();
        }
    }
    }
    //nice options lead to 
    void NorthEast(){
        cout << "I see, and what do you seek there?" << endl;
        cout << "5. Friendship" << endl;
        cout << "6. Safty" << endl;
        cout << "7. Revenge" << endl;
        cout << "8. Adventure" << endl;
        cout << "Your choice: " << endl;
        cin >> choice2;
        if (choice2 == 5, 6){
            DangerMystery();
        }
        else if (choice2 == 7, 8){
            FriendshipRevenge();
        }
        else {
            cout << "I'm sorry, I didn't understand that." << endl;
        }
    }
    void SouthWest(){
        cout << "Interesting, and what awaits you there?" << endl;
        cout << "9. Danger" << endl;
        cout << "10. Home" << endl;
        cout << "11. Mystery" << endl;
        cout << "12. Wisdom" << endl;
        cout << "Your choice: " << endl;
        cin >> choice2;
        if (choice2 == 10, 12){
            FriendshipRevenge();
        }
        else if(choice2 == 9, 11){
            DangerMystery();
        }
        else {
            cout << "I'm sorry, I didn't understand that." << endl;
        }
    }
    void FriendshipRevenge(){
        cout << "Oh? How will you gain what you seek?" << endl;
        cout << "13. " << endl;
        cout << "14. " << endl;
        cout << "15. " << endl;
        cout << "16. " << endl;
        cout << "Your choice: " << endl;
        cin >> choice3;
        if (choice3 == 13, 14, 15, 16){
            getFortune();
        }
        else {
            cout << "I'm sorry, I didn't understand that." << endl;
        }
    }
    void DangerMystery(){
        cout << "How Exciting, What will you do to survive?" << endl;
        cout << "17. Be Quick" << endl;
        cout << "18. Be Cunning" << endl;
        cout << "19. Be Kind" << endl;
        cout << "20. Be " << endl;
        cout << "Your choice: " << endl;
        cin >> choice3;
        if (choice3 == 17, 18, 19, 20){
            getFortune();
        }
        else {
            cout << "I'm sorry, I didn't understand that." << endl;
        }
    }

    //fortunes
    void getFortune(){
        if (choice3 == 13, 14){
            Fortune1();
        }
        else if (choice3 == 15, 16){
            Fortune2();
        }
        else if (choice3 == 17, 20){
            Fortune3();
        }
        else if (choice3 == 18, 19){
            Fortune4();
        }
    }
    void Fortune1(){
        cout << "You will find great fortune." << endl;
    }
    void Fortune2(){
        cout << "You will find great misfortune." << endl;
    }
    void Fortune3(){
        cout << "You will find great wisdom." << endl;
    }
    void Fortune4(){
        cout << "You will find great danger." << endl;
    }
    

    //play game
    void play(){
        welcome();
        directions();
        getFortune();
    }

};



//main game code
int main(){
    //object of the class  
    OptionsClass options;
    //play the game
    options.play();
    return 0;
}