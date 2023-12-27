//
// Created by Tolga Sanli on 21.12.23.
//
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>

#include <set>
using namespace std;
/*
void visitedHouses(const std::string& directions, std::set<std::pair<int, int> >& visited_houses){
    //santas und robosanta(x2,y2) position
    int x = 0, y = 0;
    int x2 = 0, y2 = 0;
    //toggle for santas and robosanta
    bool santas_turn = true;
    //gh copilot is dangerous!!!!!!!!!
    visited_houses.insert(std::make_pair(x, y));
    for(char direction : directions){
        int& current_x = santas_turn ? x : x2;
        int& current_y = santas_turn ? y : y2;

        switch(direction){
            case '^':
                current_y++;
                break;
            case 'v':
                current_y--;
                break;
            case '>':
                current_x++;
                break;
            case '<':
                current_x--;
                break;
            default:
                std::cerr << "Error while reading the direction: " << direction << endl;
                break;
        }
        visited_houses.insert(std::make_pair(current_x, current_y));
        santas_turn = !santas_turn;
    }
}*/

int main(){
/*
    ifstream input_file("illegalpath/data.txt");
    string line;
    if(!input_file){
        std::cerr << "error while open file "<< endl;
        return 1;
    }
    string direction;
    while(std::getline(input_file, line)){
        std::istringstream iss(line);
        direction += line;
    }
    input_file.close();
   /* int deliveredToHouses = 0;

    for(int i = 0; i < direction.length(); i++){
        deliveredToHouses++;

    }
*//*
    std::set<std::pair<int, int> > visited_houses;
    visitedHouses(line, visited_houses);

    cout << "visited houses: " << visited_houses.size() << endl;*/
    return 0;
}