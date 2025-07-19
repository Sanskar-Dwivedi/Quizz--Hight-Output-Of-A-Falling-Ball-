#include <iostream>

//I'll fix this code later, i know it is terrible, cheers!

double heightInput(){

    std::cout<<"Enter the Height of the Tower in Meters:    ";
    double height{};
    std::cin>>height;
    return height;
}

double heightOfBall(int x){

    double ball= 0.5 * 9.81 * x *x;
    return ball;
}


int main(){

    double tower{heightInput()};

    if (tower-heightOfBall(0)>=0)
        std::cout<<"At 0 seconds, the ball is at height: "<<tower-heightOfBall(0)<<"\n";
    else 
        std::cout<<"Ball is at Ground";
    if (tower-heightOfBall(1)>=0)
        std::cout<<"At 1 seconds, the ball is at height: "<<tower-heightOfBall(1)<<"\n";
    else 
        std::cout<<"Ball is at Ground";
    if (tower-heightOfBall(2)>=0)
        std::cout<<"At 2 seconds, the ball is at height: "<<tower-heightOfBall(2)<<"\n";
    else 
        std::cout<<"Ball is at Ground";
    if (tower-heightOfBall(3)>=0)
        std::cout<<"At 3 seconds, the ball is at height: "<<tower-heightOfBall(3)<<"\n";
    else 
        std::cout<<"Ball is at Ground";
    if (tower-heightOfBall(4)>=0)
        std::cout<<"At 4 seconds, the ball is at height: "<<tower-heightOfBall(4)<<"\n";
    else 
        std::cout<<"Ball is at Ground";
    if (tower-heightOfBall(5)>=0)
        std::cout<<"At 5 seconds, the ball is at height: "<<tower-heightOfBall(5)<<"\n";
    else 
        std::cout<<"Ball is at Ground";
    return 0;
}
