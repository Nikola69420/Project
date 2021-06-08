#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <sstream>
using namespace std;
int training()// making a function
{
    string name;//making a players name
    cout<<endl<<endl<<"Enter your name: ";// the player entering his name
    cin>>name;
    int score=0;// this is a variable. This variable represents the amount of points you have in-game
    cout<<endl<<endl<<"You are now entering the training grounds"<<endl;// text line

    for(int i=0; i<4; i++)
    {
        srand(time(0));// between lines 29 and 32 is where we use a loop for and give the letter "i" values which represent the odds of a certain encounter happening. We use the command rand to generate a random number between 1 and 12. Here is how we distributed the odds in the first round: the chance of getting into a regular encounter is 8/12, the chances of loosing a heart is 0/12 and getting the secret encounter is 4/12
        int chance = rand() % 12 + 1;
        cout<<endl<<"You are now fighting a dummy..."<<endl;// text line
        if(chance<9)//these are the odds of getting this encounter
        {
            cout<<"You won! Congratulations!"<<endl;// text line
            score=score+6;//adds 6 points to your score
            Sleep(1000);//stalling the code so it has a dramatic effect!!!
        }
        else
        {
            cout<<"Your power with the dummy is equal! What do you do to win? Choose an option:"<<endl;// text line
            cout<<"Talk about economy?      Pour hydrochloric acid on him?      Run?"<<endl;// text line
            cout<<"          1                            2                      3 "<<endl;// text line
            srand(time(0));
            int secret1 = rand() % 3 + 1;//here we use a command which generates a random number between 1 and 2 to determine the outcome of the encounter which is a 50/50. You can either win and move on or loose a heart but in the training grounds you can't loose a heart
            int secret1choice;// this is a variable
            cin>>secret1choice;
            if(secret1choice==1)//this is an if command which will only activates when you have selected the first option from the secret encounter
            {
                if(name=="BobiK")//easter egg about one of our friends (it was a request)
                {
                    cout<<"You talk for hours and hours on end. Truly magnificent. You won!";// text line
                    score=score+6;
                }
                else
                {

                    srand(time(0));
                    int secret1chance1 = rand() % 2 + 1;
                    if(secret1chance1==1)//if the randomly generated number was 1 than you would have won and the text from the next line would appear in the console
                    {
                        cout<<"The dummy got bored and it left you alone! You won!"<<endl;;// text line
                        score=score+6;//adding 6 points to the score
                    }
                    else if(secret1chance1==2)//if the randomly generated number was 2 than you would have lost and the text from the next line would appear in the console
                    {
                        cout<<"You fall asleep and you get hit!"<<endl;//text line
                    }

                }
            }
            if(secret1choice==2)//this is an if command which will only activates when you have selected the second option from the secret encounter

            {
                srand(time(0));
                int secret1chance2 = rand() % 2 + 1;//here we use a command which generates a random number between 1 and 2 to determine the outcome of the encounter which is a 50/50. You can either win and move on or loose a heart but in the training grounds you can't loose a heart
                if(secret1chance2==1)//if the randomly generated number was 1 than you would have won and the text from the next line would appear in the console
                {
                    cout<<"He desintegrated on the ground! You won!"<<endl;//text line
                    score=score+6;//adding 6 points to the overall score
                }
                else if(secret1chance2==2)//if the randomly generated number was 2 than you would have lost and the text from the next line would appear in the console
                {
                    cout<<"You slipped and you poured the acid on yourself!"<<endl;//text line
                }
            }
            if(secret1choice==3)//this is an if command which will only activates when you have selected the third option from the secret encounter
            {
                srand(time(0));
                int secret1chance3 = rand() % 2 + 1;//here we use a command which generates a random number between 1 and 2 to determine the outcome of the encounter which is a 50/50. You can either win and move on or loose a heart but in the training grounds you can't loose a heart
                if(secret1chance3==1)//if the randomly generated number was 1 than you would have won and the text from the next line would appear in the console
                {
                    cout<<"You outran the dummy! You won!"<<endl;//text time
                    score=score+6;//adding 6 points to the score
                }
                else if(secret1chance3==2)//if the randomly generated number was 2 than you would have lost and the text from the next line would appear in the console
                {
                    cout<<"The dummy somehow has legs, it is coming closer and closer until it catches up to you!"<<endl;//text line
                }
            }
            Sleep(1000);//stalling the code so it has a dramatic effect!!!
        }


    }

    return score;//returning the value of score
}
int main ()
{
    cout<<"Hello dear traveler! Welcome to our game! This is an MMORPG game that is all based on probability.";
    cin.get();
    cout<<endl<<"Here is how it works: At the start of the game you will be given 5 hearts and you will have to make your way across multiple regions and enemies  to reach the end and become victorious! In a battle there will be 3 possible outcomes.";
    cin.get();
    cout<<endl<<endl<<"The first one will be you winning and keeping your current hearts. The second one will be you losing and 1 heart  will be deducted. The third one will be a secret encounter in which you will be given 3 options to approach the battle and every option will have a 50% chance of working in your favor but if you happen to be unfortunate enough your attack will turn against you making you lose 1 heart.";
    cin.get();
    cout<<endl<<endl<<"For every win you will receive 6 points and at the end of the game if they add up to a certain number you will be taken to the secret ending. Good luck and have fun!";
    cin.get();
    cout<<endl<<"Press ENTER to continue."<<endl;
    cin.get();//waiting for the user to press ENTER to continue
    int score = training();//assigning a value to a integer out of the function
    int heart=5;// making the hearts of the player
    int weapon=0;
    cout<<"Congratulations!! You passed the training camp. You have earned yourself a weapon! Chose yours wisely: "<<endl;//choosing a weapon
    cout<<"  sword            pistol          rock            German dictionary"<<endl;
    cout<<"    1                2               3                       4 "<<endl;
    cin>>weapon;// the user chooses their weapon
    //////////////////////////////////////////////////////////////////

    cout<<endl<<endl<<"You are now entering the Guard Mountains"<<endl;// text line

    for(int i=0; i<8; i++)// for lines 119, 121, 122 is where we use a loop for and give the letter "i" values which represent the odds of a certain encounter happening. We use the command rand to generate a random number between 1 and 12. Here is how we distributed the odds in the first round: the chance of getting into a regular encounter is 6/12, the chances of loosing a heart is 3/12 and getting the secret encounter is 3/12 3/12
    {
        srand(time(0));
        int chance1 = rand() % 12 + 1;
        cout<<endl<<"You are now fighting mountain goats..."<<endl;// text line
        Sleep(1000);//stalling the code so it has a dramatic effect!!!
        if(chance1<7&&chance1>0)//these are the odds of getting this encounter
        {
            cout<<"You won! Congratulations!"<<endl;// text line
            score=score+6;//adds 6 points to your score
            Sleep(1000);//stalling the code so it has a dramatic effect!!!
        }
        else if(chance1<10&&chance1>6)//these are the odds of getting this encounter
        {
            cout<<"The goats were stronger than you. HEART LOST!"<<endl;// text line
            heart--;//this deducts one heart from your hearts
            if(heart==0)//this checks if you are out of hearts and displays the followning text if the statement is true and it's game over
            {
                cout<<"You are out of hearts and you could not defeat the evil wizard. His terror is still upon all living things. GAME OVER!"<<endl;;// text line
                cout<<"Score: "<<score;
                break;//if the statement if(heart==0) was correct than break would go out of the cycle and go all the wya to return 0
            }
        }
        else if(chance1<13&&chance1>9)//these are the odds of getting this encounter
        {
            cout<<"Your power with the mountain goats is equal! What do you do to win? Choose an option:"<<endl;// text line
            cout<<"Feed them?      Use weapon?      Hide?"<<endl;
            cout<<"     1               2             3"<<endl;
            srand(time(0));
            int secret2 = rand() % 3 + 1;//here we use a command which generates a random number between 1 and 2 to determine the outcome of the encounter which is a 50/50. You can either win and move on or loose a heart
            int secret2choice;// this is a variable
            cin>>secret2choice;
            if(secret2choice==1)
            {
                srand(time(0));
                int secret2chance1 = rand() % 2 + 1;
                if(secret2chance1==1)//if the randomly generated number was 1 than you would have won and the text from the next line would appear in the console
                {
                    cout<<"You fed the goats and they left you alone! You won!"<<endl;// text line
                    score=score+6;//adds 6 points to your score
                }
                else if(secret2chance1==2)//if the randomly generated number was 2 than you would have lost and the text from the next line would appear in the console
                {
                    cout<<"You tried to feed them but they refused the food and kicked you off the mountain! HEART LOST!"<<endl;// text line
                    heart--;//this didducts one heart from your hearts
                    if(heart==0)//this checkes if you are out of hearts and displays the followning text if the statement is true and it's game over
                    {
                        cout<<"You are out of hearts and you could not defeat the evil wizard. His terror is still upon all living things. GAME OVER!"<<endl;// text line
                        cout<<"Score: "<<score;
                        break;//if the statement if(heart==0) was correct than break would go out of the cycle and go all the wya to return 0
                    }

                }
            }
            if(secret2choice==2)
            {
                srand(time(0));
                int secret2chance2 = rand() % 2 + 1;
                if(secret2chance2==1)//if the randomly generated number was 1 than you would have won and the text from the next line would appear in the console
                {
                    cout<<"You killed them! You won!"<<endl;// text line
                    score=score+6;//adds 6 points to your score
                }
                else if(secret2chance2==2)//if the randomly generated number was 2 than you would have lost and the text from the next line would appear in the console
                {
                    cout<<"You missed and they brutally murdered you! HEART LOST!"<<endl;// text line
                    heart--;//this didducts one heart from your hearts
                    if(heart==0)//this checkes if you are out of hearts and displays the followning text if the statement is true and it's game over
                    {
                        cout<<"You are out of hearts and you could not defeat the evil wizard. His terror is still upon all living things. GAME OVER!"<<endl;// text line
                        cout<<"Score: "<<score;
                        break;//if the statement if(heart==0) was correct than break would go out of the cycle and go all the wya to return 0
                    }
                }
            }
            if(secret2choice==3)
            {
                srand(time(0));
                int secret2chance3 = rand() % 2 + 1;
                if(secret2chance3==1)//if the randomly generated number was 1 than you would have won and the text from the next line would appear in the console
                {
                    cout<<"You hid behind a rock and they left you alone! You won!"<<endl;// text line
                    score=score+6;//adds 6 points to your score
                }
                else if(secret2chance3==2)//if the randomly generated number was 2 than you would have lost and the text from the next line would appear in the console
                {
                    cout<<"The mountain goats found you and they beat you to death! HEART LOST!"<<endl;// text line
                    heart--;//this didducts one heart from your hearts
                    if(heart==0)//this checkes if you are out of hearts and displays the followning text if the statement is true and it's game over
                    {
                        cout<<"You are out of hearts and you could not defeat the evil wizard. His terror is still upon all living things. GAME OVER!"<<endl;// text line
                        cout<<"Score: "<<score;
                        break;//if the statement if(heart==0) was correct than break would go out of the cycle and go all the wya to return 0
                    }
                }
            }
            Sleep(1000);//stalling the code so it has a dramatic effect!!!
        }


    }
    /////////////////////////////////////////////////////////////////////////////////
    if(heart==0)//this checks if you are out of hearts and displays the following text if the statement is true and it's game over. Break here isn't necessary because the if is already out of a loop
    {
        cout<<endl;
        cout<<"You are out of hearts and you could not defeat the evil wizard. His terror is still upon all living things. GAME OVER!"<<endl;// text line
        cout<<"Score: "<<score;
    }
    else if(heart>0)
    {


        cout<<endl<<endl<<"You are now entering the Gandalf the Charcoal's Castle. "<<endl<<"He has 3 lives. You need to defeat him at all costs!"<<endl;// text line

        int heartsBoss =3;
        int playerOption =0;
        for (int n=2; n>1; n++)
        {
            cout<<endl<<"The boss is going to attack! What do you do to survive?"<<endl;// text line
            cout<<"Dodge        block?"<<endl;
            cout<<"  1            2"<<endl;
            cin>>playerOption;
            int playerChoice1 = rand() % 2 + 1;
            if(playerOption==1)
            {
                if(playerChoice1==1)
                {
                    cout<<endl<<"You managed to dodge the attack."<<endl;// text line
                }
                else if(playerChoice1==2)
                {
                    cout<<endl<<"You didn't manage to dodge the attack. HEART LOST!"<<endl;// text line
                    heart--;//this didducts one heart from your hearts
                    if(heart==0)
                    {
                        cout<<"You are out of hearts and you could not defeat the evil wizard. His terror is still upon all living things. GAME OVER!"<<endl;// text line
                        cout<<"Score: "<<score;
                        break;
                    }
                }

            }
            srand(time(0));
            int playerChoice2 = rand() % 2 + 1;
            if(playerOption==2)
            {
                if(playerChoice2==1)
                {
                    cout<<endl<<"You managed to block the attack."<<endl;// text line


                }
                else if(playerChoice2==2)
                {
                    cout<<endl<<"You didn't manage to block the attack. HEART LOST!"<<endl;// text line
                    heart--;//this deducts one heart from your hearts
                    if(heart==0)
                    {
                        cout<<"You are out of hearts and you could not defeat the evil wizard. His terror is still upon all living things. GAME OVER!"<<endl;// text line
                        cout<<"Score: "<<score;
                        break;
                    }
                }

            }
            if(heart==0)//checking if our hearts are zero and if they are we dont continue the game
            {
                cout<<endl;
            }
            else if(heart>0)
            {

                int playerOption2=0;
                cout<<endl<<"It's your time to attack. What do you do?"<<endl;// text line
                cout<<" Use weapon      Use your surroundings"<<endl;// text line
                cout<<"      1                      2"<<endl;
                cin>>playerOption2;
                if(playerOption2==1)
                {
                    srand(time(0));
                    int playerAttack1 = rand() % 2 + 1;
                    if(playerAttack1==1)
                    {
                        cout<<endl<<"You hit the boss. Come on you can do this!"<<endl;// text line
                        heartsBoss--;//this didducts one heart from the bosses' health
                    }
                    else if(playerAttack1==2)
                    {
                        cout<<endl<<"You missed!"<<endl;

                    }
                }
                if(playerOption2==2)
                {
                    srand(time(0));
                    int playerAttack2 = rand() % 3 + 1;
                    if(playerAttack2==1)
                    {
                        cout<<endl<<"You found a torch and you hit him making him lose one life."<<endl;// text line
                        heartsBoss--;
                    }
                    else if(playerAttack2==2)
                    {
                        cout<<endl<<"You found a glass shard and you hit him making him lose one life."<<endl;// text line
                        heartsBoss--;//this didducts one heart from the bosses' health

                    }
                    else if(playerAttack2==3)
                    {
                        cout<<endl<<"You missed!"<<endl;// text line

                    }
                }

                if(heartsBoss==0)
                {
                    score=score+9;
                    if(score==69)
                    {
                        cout<<endl<<"You unlocked the secret ending by achieving the perfect score(69)!";// text line
                        cout<<endl<<"After you defeat the wizard you develop a gambling addiction, you lose all your money and you die alone on the streets.";// text line
                        break;
                    }
                    else
                    {


                        if(weapon==1)
                        {
                            cout<<endl<<"The sword came in handy, didn't it?";// text line
                        }
                        else if(weapon==2)
                        {
                            cout<<endl<<"The pistol came in handy, didn't it?";// text line
                        }
                        else if(weapon==3)
                        {
                            cout<<endl<<"The rock came in handy, didn't it?";// text line
                        }
                        else if(weapon==4)
                        {
                            cout<<endl<<"The German dictionary came in handy, didn't it?";// text line
                        }
                        cout<<endl<<"Upon defeating the boss you have successfully managed to free the world from the evil terror of Gandalf The Charcoal!";// text line
                        cout<<endl<<"He shall no longer rule the world and bring terror in the hearts of every living thing.";// text line
                        cout<<endl<<"Congratulations traveler you have become a hero that will never be forgotten in history." ;// text line
                        cout<<endl<<"You may now rest but who knows what's waiting for us ahead only time will tell. Congratulations you win the game!!!";// text line
                        cout<<endl<<endl<<"Your score is: "<<score;// Text line. This line displays your end score
                        break;
                    }

                }

            }
        }
    }
    return 0;
}
