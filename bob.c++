/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    int tries = 5;
    int answer1, answer2, answer3, answer4;
    int points = 0;
    
    cout << "Before jump in the story, choose the right answer to advanced to the end of the story\n";
    cout << "TITLE: SpongeBob SquarePants\n";
    cout << "Spongebob is a friendly neighbor, he always makes sure to smile at every person he comes across with. Bob has a best friend. \n Who is his best friend?\n";
    cout << "1- Sandy\n";
    cout << "2- Planton\n";
    cout << "3- Patrick\n";
    cout << "4- Mr Krab\n";
    for (int i = tries; points <= 3; tries--){

    if (points == 0){
        cin >> answer1;
        if (answer1 == 3){
            points++;
            
            cout << "You're correct. Lets continue \n";
            
            cout << points << " points" << endl;
            
        } else if (tries == 0){
            
            cout << "Sorry, you have run out of tries\n";
            
            break;
            
            } else {
            
            cout << "Incorrect, please choose another option\n" << " you have " << tries - 1 <<  " tries" << endl;
            
            continue;
        }
    }
    
    if (points == 1){
    

    cout << "\nlevel two";
    
    cout << "\n==================================\n";
    
    cout << "SpongeBob likes to catch jellyfish with Patrick, however they get surprised with his electric shots, SpongeBob and Patrick invite a friend with them, who is it?\n";

    cout << "1- Mr Krab\n";
    
    cout << "2- Squiward Tentacles\n";
    
    cout << "3- Gary The Snail\n";
    
    cout << "4- Ms Puff\n";
    
    cin >> answer2;
    
    if (answer2 == 2){
        
        cout << "You're correct. Lets continue \n";
        
        cout << points << " points" << endl;
        
        points++;
        
    } else if (tries == 0){
        
    cout << "Sorry, you have run out of tries\n";
    
    break;
    
    } else {
    cout << "Incorrect, please choose another option\n" << " you have " << tries - 1 << " tries, " << "points " << points << endl;
    continue;
    }
    }


    if (points == 2){
    

    cout << "\nlevel three";
    
cout << "\n==================================\n";
cout << "Mr. Krabs restaurant is famous for its Krabby Patty burgers. In the bikini bottom, one wants to get the formula for taking Crab clients.\n Who is it?\n";
    cout << "1- Planton \n";
    
    cout << "2- SpongeBob \n";
    
    cout << "3- Sandy\n";
    
    cout << "4- Ms Puff\n";
    
    cin >> answer3;
    
    if (answer3 == 1){
        cout << "You're correct. Lets continue \n";
        
        cout << points << " points" << endl;
        
        points++;
    } else if (tries == 0){
        
    cout << "Sorry, you have run out of tries\n";
    
    break;
    
} else {
    cout << "points " << points << endl; 
    
    cout << "Incorrect, please choose another option\n" << " you have " << tries - 1  << " tries" << endl;
    
    continue;
    }
    
    
    }

if (points == 3){

    

    cout << "\nlevel four";
    
    cout << "\n==================================\n";

    cout << "Bob has a lot of friends, and he loves to be kind and enthusiastic to everyone, but not all of his friends are from the sea.\n Which of his close friends breathes air?\n";
    
    cout << "1- Gary the Snail \n";
    
    cout << "2- Planton \n";
    
    cout << "3- Patrick\n";
    
    cout << "4- Sandy\n";
    
    cin >> answer4;
    if (answer4 == 4){

        cout << "Congratulations!!, you had finish the Q&A  of Spongebob, hope to see you again! \n";
        
        cout << points << " points" << endl; 
        
        points++;
        
        continue;
    } else if (tries == 0){
        
    cout << "Sorry, you have run out of tries\n";

    break;

    } else {
    cout << "Incorrect, please choose another option\n" << " you have " << tries - 1  << " tries" << endl;
    
    continue;
    }
    }
    }
    cout << "Try Again";
return 0;
}
