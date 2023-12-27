//
// Created by Tolga Sanli on 21.12.23.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main(){
    ifstream input_file("secret") ;
    if(!input_file){
        cerr << "error while open file "<< endl;
        return 1;
    }
    string line;
    int sum = 0;

    while(getline(input_file, line)){
        istringstream iss(line);
        char first_digit, last_digit;
        iss >> first_digit;
        if(iss >> last_digit){
            int values = (first_digit - '0')*10+(last_digit - '0');
            sum += values;

        }else{
            int values = (first_digit - '0')*10 + (first_digit - '0');
            sum += values;
        }
    }
    input_file.close();

    cout << "Sum of values: " << sum << endl;
    return 0;
}
