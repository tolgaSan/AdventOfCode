//
// Created by Tolga Sanli on 19.12.23.
//

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;

//Maßen

int rechner(int l,int w, int h){
    int surfaceArea = 2*l*w + 2*w*h + 2*h*l;
    int smallestSide = std::min({l*w,w*h,h*l});

    return surfaceArea+smallestSide;
}

int rechnerFürSchleife(int l, int w, int h){

    int side1 = 2*l + 2*w;
    int side2 = 2*w + 2*h;
    int side3 = 2*h + 2*l;

    int smallestSide = min({side1,side2,side3});

    int ribbonForPresent = smallestSide;
    int ribbonForWrap = (l*w*h);
    return ribbonForPresent+ribbonForWrap;
}
int main(){


    ifstream input_file("fullpath/data.txt");
    string line;
    if(!input_file){
        std::cerr << "error while open file "<< endl;
        return 1;
    }

    std::vector<std::vector<int>> vek;
    while(std::getline(input_file, line)){
        std::istringstream iss(line);
        int l = 0, w = 0, h = 0;
        char x;
        if(iss >> l >> x >> w >> x >> h){
            vek.push_back({l,w,h});
        }else{
            std::cerr << "Error while reading the line at: "  << line << endl;
        }

    }
    input_file.close();

    long surfaceAreaAll = 0;
    for(const auto& v : vek){
        cout << "surfaceArea " << rechner(v[0], v[1], v[2]) << " Square" << endl;
        surfaceAreaAll += rechner(v[0], v[1], v[2]);
    }
    cout << "The fullArea is: " << surfaceAreaAll<< " square!" <<endl;
    cout << "in squarefoot it is: " << surfaceAreaAll*10.764  << " !" <<endl;
    long ribbonTotal = 0;
    for(const auto& v : vek){
        cout << "The need of ribbon is " << rechnerFürSchleife(v[0],v[1],v[2]) << " feet" << endl;
        ribbonTotal += rechnerFürSchleife(v[0],v[1],v[2]);
    }
    cout << "Total feet of ribbon needed " << ribbonTotal << endl;
    return 0;
}