#include <SFML/Graphics.hpp>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;
int randomCharacter(){
    int randomVariable;
    int letterReturnValue;
    srand(time(NULL));
    randomVariable = rand() %26 + 1;
    switch (randomVariable){
case 1:
    letterReturnValue = 97;
    return letterReturnValue;
    break;
case 2:
    letterReturnValue = 98;
    return letterReturnValue;
    break;
case 3:
    letterReturnValue = 99;
    return letterReturnValue;
    break;
case 4:
    letterReturnValue = 100;
    return letterReturnValue;
    break;
case 5:
    letterReturnValue = 101;
    return letterReturnValue;
    break;
case 6:
    letterReturnValue = 102;
    return letterReturnValue;
    break;
case 7:
    letterReturnValue = 103;
    return letterReturnValue;
    break;
case 8:
    letterReturnValue = 104;
    return letterReturnValue;
    break;
case 9:
    letterReturnValue = 105;
    return letterReturnValue;
    break;
case 10:
    letterReturnValue = 106;
    return letterReturnValue;
    break;
case 11:
    letterReturnValue = 107;
    return letterReturnValue;
    break;
case 12:
    letterReturnValue = 108;
    return letterReturnValue;
    break;
case 13:
    letterReturnValue = 109;
    return letterReturnValue;
    break;
case 14:
    letterReturnValue = 110;
    return letterReturnValue;
    break;
case 15:
    letterReturnValue = 111;
    return letterReturnValue;
    break;
case 16:
    letterReturnValue = 112;
    return letterReturnValue;
    break;
case 17:
    letterReturnValue = 113;
    return letterReturnValue;
    break;
case 18:
    letterReturnValue = 114;
    return letterReturnValue;
    break;
case 19:
    letterReturnValue = 115;
    return letterReturnValue;
    break;
case 20:
    letterReturnValue = 116;
    return letterReturnValue;
    break;
case 21:
    letterReturnValue = 117;
    return letterReturnValue;
    break;
case 22:
    letterReturnValue = 118;
    return letterReturnValue;
    break;
case 23:
    letterReturnValue = 119;
    return letterReturnValue;
    break;
case 24:
    letterReturnValue = 120;
    return letterReturnValue;
    break;
case 25:
    letterReturnValue = 121;
    return letterReturnValue;
    break;
case 26:
    letterReturnValue = 122;
    return letterReturnValue;
    break;
    }



}


int main()
{
    sf::RenderWindow gameWindow(sf::VideoMode(1024, 1024), "Ghost Killer");

    int letterCheck;
    int yourScore;

    bool is1k;

    string gameOver = "You win!";

    sf::Font textFont;
    textFont.loadFromFile("OpenSans-ExtraBold.ttf");

    sf::Text letterToTypeText;
    letterToTypeText.setFont(textFont);
    letterToTypeText.setCharacterSize(128);

    sf::Text scoreText;
    string scoreString;
    scoreString = "Score: ";
    scoreText.setFont(textFont);
    scoreText.setCharacterSize(128);
    scoreText.setString(scoreString);

    sf::Text displayYourScore;
    displayYourScore.setFont(textFont);
    displayYourScore.setCharacterSize(128);

    sf::Text gameOverText;
    gameOverText.setFont(textFont);
    gameOverText.setString(gameOver);
    gameOverText.setCharacterSize(128);

    sf::Texture backgroundTexture;
    backgroundTexture.loadFromFile("background.png");
    sf::Sprite backgroundSprite;
    backgroundSprite.setTexture(backgroundTexture);

    sf::Texture graveTexture;
    graveTexture.loadFromFile("grave.png");
    sf::Sprite graveSprite;
    graveSprite.setTexture(graveTexture);

    sf::Texture ghostTexture;
    ghostTexture.loadFromFile("ghost.png");
    sf::Sprite ghostSprite;
    ghostSprite.setTexture(ghostTexture);

    int leftOrRight;
    char letterToDisplay;
        yourScore = 0;
        is1k = false;
    while (gameWindow.isOpen())
    {
        sf::Event event;
        while (gameWindow.pollEvent(event))
{
    switch (event.type)
    {
         case sf::Event::Closed:
            gameWindow.close();
            break;
         case sf::Event::KeyPressed:
     if(event.key.code == sf::Keyboard::A){
    letterCheck = 97;
    break;}
     if(event.key.code == sf::Keyboard::B){
    letterCheck = 98;
    break;}
     if(event.key.code == sf::Keyboard::C){
    letterCheck = 99;
    break;}
     if(event.key.code == sf::Keyboard::D){
    letterCheck = 100;
    break;}
     if(event.key.code == sf::Keyboard::E){
    letterCheck = 101;
    break;}
     if(event.key.code == sf::Keyboard::F){
    letterCheck = 102;
    break;}
     if(event.key.code == sf::Keyboard::G){
    letterCheck = 103;
    break;}
     if(event.key.code == sf::Keyboard::H){
    letterCheck = 104;
    break;}
     if(event.key.code == sf::Keyboard::I){
    letterCheck = 105;
    break;}
     if(event.key.code == sf::Keyboard::J){
    letterCheck = 106;
    break;}
     if(event.key.code == sf::Keyboard::K){
    letterCheck = 107;
    break;}
     if(event.key.code == sf::Keyboard::L){
    letterCheck = 108;
    break;}
     if(event.key.code == sf::Keyboard::M){
    letterCheck = 109;
    break;}
     if(event.key.code == sf::Keyboard::N){
    letterCheck = 110;
    break;}
     if(event.key.code == sf::Keyboard::O){
    letterCheck = 111;
    break;}
     if(event.key.code == sf::Keyboard::P){
    letterCheck = 112;
    break;}
     if(event.key.code == sf::Keyboard::Q){
    letterCheck = 113;
    break;}
     if(event.key.code == sf::Keyboard::R){
    letterCheck = 114;
    break;}
     if(event.key.code == sf::Keyboard::S){
    letterCheck = 115;
    break;}
     if(event.key.code == sf::Keyboard::T){
    letterCheck = 116;
    break;}
     if(event.key.code == sf::Keyboard::U){
    letterCheck = 117;
    break;}
     if(event.key.code == sf::Keyboard::V){
    letterCheck = 118;
    break;}
     if(event.key.code == sf::Keyboard::W){
    letterCheck = 119;
    break;}
     if(event.key.code == sf::Keyboard::X){
    letterCheck = 120;
    break;}
     if(event.key.code == sf::Keyboard::Y){
    letterCheck = 121;
    break;}
     if(event.key.code == sf::Keyboard::Z){
    letterCheck = 122;
    break;}

         default:
            break;
    }
}
        leftOrRight = rand() % 2 + 1;
        letterToDisplay = randomCharacter();
        letterToTypeText.setString(letterToDisplay);
        int isLetterGood = letterToDisplay;
        if(letterCheck == isLetterGood){ yourScore++; cout << "Your Score is: " << yourScore << endl;}

        gameWindow.clear();

            string scoreStr = to_string(yourScore);
            displayYourScore.setString(scoreStr);

        switch(leftOrRight){
    case 1:
            letterToTypeText.setPosition(225, 475);
            ghostSprite.setPosition(135, 595);
        break;
    case 2:
            letterToTypeText.setPosition(735, 475);
            ghostSprite.setPosition(645, 595);
        break;
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) gameWindow.close();

        if(yourScore >= 1000) is1k = true;
        else is1k = false;

        if(is1k == false){

        gameWindow.draw(backgroundSprite);

        graveSprite.setPosition(135, 625);
        gameWindow.draw(graveSprite);
        graveSprite.setPosition(645, 625);
        gameWindow.draw(graveSprite);


        scoreText.setPosition(0, 0);
        gameWindow.draw(scoreText);
        displayYourScore.setPosition(595, 0);
        gameWindow.draw(displayYourScore);


        gameWindow.draw(letterToTypeText);
        gameWindow.draw(ghostSprite);

        }

        else{

        gameWindow.draw(backgroundSprite);

        gameOverText.setPosition(32, 512);
        gameWindow.draw(gameOverText);

        scoreText.setPosition(0, 0);
        gameWindow.draw(scoreText);
        displayYourScore.setPosition(595, 0);
        gameWindow.draw(displayYourScore);


        }

        gameWindow.display();
    }

    return 0;
}
