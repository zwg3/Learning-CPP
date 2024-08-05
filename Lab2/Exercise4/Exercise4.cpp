#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int main()
{
    srand(time(NULL));
    int shotX;
    int shotY;
    int hindranceScore = 0;
    int highScoreMargin = 2;
    int lowScoreMargin = 5;
    int highScoreAward = 10;
    int lowScoreAward = 5;
    double result;
    int currentScore = 0;
    int goalScore = 50;
    int shotsTaken = 0;
    cout << "Welcome to the marksman game! In this game you have to take shots on an x/y axis using console input" << endl;
    cout << "Close shots are awarded " << highScoreAward << " points" << endl;
    cout << "Wide shots are awarded " << lowScoreAward << " points" << endl;
    cout << "The game will continue untill you reach the score of " << goalScore << " points" << endl;
    while (goalScore > currentScore)
    {

        int targetX = rand() % 21 + (-10);
        int targetY = rand() % 21 + (-10);
        hindranceScore = rand() % 6 + (-3);
        cout << "Your current score: " << currentScore << endl;
        cout << "The windy weather is affecting your shots tragectory by: " << hindranceScore << " points" << endl;
        cout << "Take your shot (X axis) ";
        cin >> shotX;
        shotX += hindranceScore;
        cout << "Take your shot (Y axis) ";
        cin >> shotY;
        shotY += hindranceScore;
        cout << "Resulted shot : " << shotX << ", " << shotY << endl;
        result = sqrt(pow(targetX - shotX, 2) + pow(targetY - shotY, 2));

        if (result <= highScoreMargin)
        {
            cout << "HIGH SCORE!" << endl;
            currentScore += highScoreAward;
        }

        else if (result <= lowScoreMargin)
        {
            cout << "LOW SCORE" << endl;
            currentScore += lowScoreAward;
        }
        else
        {
            cout << "MISS" << endl;
        }
        shotsTaken += 1;
        cout << "The target was located at: " << targetX << ", " << targetY << endl;
    }
    cout << "Shots taken: " << shotsTaken << endl;
    if (goalScore / shotsTaken >= 8)
    {
        cout << "You are an expert marksman!";
    }
    else if (goalScore / shotsTaken >= 3)
    {
        cout << "You are a regular shooter";
    }
    else
    {
        cout << "You are a rookie shooter";
    }
}