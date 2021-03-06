#include "gamelevel.h"
#include <boxposition.h>

vector<BoxPosition*> fits;
vector<BoxPosition*> boxs;
BoxPosition *player1;

void GameLevel::map0(){
    map = {
        {0,1,1,1,1,1,0,0,0},
        {0,1,0,0,0,1,1,1,1},
        {0,1,0,0,0,1,0,0,1},
        {0,1,1,0,0,0,0,0,1},
        {1,1,1,0,1,1,1,0,1},
        {1,0,0,0,1,0,1,0,1},
        {1,0,0,0,1,0,1,1,1},
        {1,0,0,0,1,0,0,0,0},
        {1,1,1,1,1,0,0,0,0}};

    floor = {
        {0,1,1,1,1,1,0,0,0},
        {0,1,1,1,1,1,1,1,1},
        {0,1,1,1,1,1,1,1,1},
        {0,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,0,1,1,1},
        {1,1,1,1,1,0,1,1,1},
        {1,1,1,1,1,0,0,0,0},
        {1,1,1,1,1,0,0,0,0}};


    cameraX = map[0].size()/2.0;
    cameraY = map.size()/2.0;
    cameraZ = 0;

    translateX = -3;
    translateZ = -25;

    fits.push_back(new BoxPosition(7,3));
    fits.push_back(new BoxPosition(7,4));
    fits.push_back(new BoxPosition(7,5));


    boxs.push_back(new BoxPosition(2,5));
    boxs.push_back(new BoxPosition(2,6));
    boxs.push_back(new BoxPosition(3,6));

    player1 = new BoxPosition(2,7);
}

void GameLevel::map1(){
    map = {
        {1,1,1,1,1,0,0,0,0},
        {1,0,0,0,1,1,1,1,1},
        {1,0,0,0,1,0,0,0,1},
        {1,0,0,0,1,0,1,0,1},
        {1,1,1,0,0,0,0,0,1},
        {0,1,0,0,0,1,1,1,1},
        {0,1,0,0,0,0,0,1,0},
        {0,1,1,1,1,1,1,1,0}};

    floor = {
        {1,1,1,1,1,0,0,0,0},
        {1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1},
        {0,1,1,1,1,1,1,1,1},
        {0,1,1,1,1,1,1,1,0},
        {0,1,1,1,1,1,1,1,0}};

    cameraX = map[0].size()/2.0;
    cameraY = map.size()/2.0;
    cameraZ = 0;

    translateX = -3;
    translateZ = -25;

    fits.push_back(new BoxPosition(4,6));
    fits.push_back(new BoxPosition(5,6));
    fits.push_back(new BoxPosition(6,6));

    boxs.push_back(new BoxPosition(3,4));
    boxs.push_back(new BoxPosition(2,2));
    boxs.push_back(new BoxPosition(5,3));

    player1 = new BoxPosition(3,6);
}

void GameLevel::map2(){
    map = {
        {0,0,1,1,1,1,1,1,1,0},
        {0,0,1,0,0,0,0,0,1,0},
        {0,0,1,0,0,0,0,0,1,0},
        {1,1,1,1,1,0,1,0,1,0},
        {1,0,0,0,0,0,0,0,1,0},
        {1,0,0,1,0,1,1,0,1,1},
        {1,0,0,0,0,0,1,0,0,1},
        {1,0,0,0,0,0,0,0,0,1},
        {1,1,1,1,1,1,1,1,1,1}};

    floor = {
        {0,0,1,1,1,1,1,1,1,0},
        {0,0,1,1,1,1,1,1,1,0},
        {0,0,1,1,1,1,1,1,1,0},
        {1,1,1,1,1,1,1,1,1,0},
        {1,1,1,1,1,1,1,1,1,0},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1}};

    cameraX = map[0].size()/2.0;
    cameraY = map.size()/2.0;
    cameraZ = 0;

    translateX = -3;
    translateZ = -25;

    fits.push_back(new BoxPosition(1,6));
    fits.push_back(new BoxPosition(1,7));
    fits.push_back(new BoxPosition(2,6));
    fits.push_back(new BoxPosition(2,7));

    boxs.push_back(new BoxPosition(4,2));
    boxs.push_back(new BoxPosition(2,4));
    boxs.push_back(new BoxPosition(4,5));
    boxs.push_back(new BoxPosition(3,6));

    player1 = new BoxPosition(6,2);
}

void GameLevel::map3(){
    map = {
        {1,1,1,1,1,1,1,1},
        {1,0,0,0,1,0,0,1},
        {1,0,1,0,1,0,0,1},
        {1,0,0,0,0,0,0,1},
        {1,0,1,0,1,0,0,1},
        {1,0,0,0,1,0,0,1},
        {1,1,1,1,1,0,0,1},
        {0,0,0,0,1,1,1,1}};

    floor = {
        {1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1},
        {0,0,0,0,1,1,1,1}};

    cameraX = map[0].size()/2.0;
    cameraY = map.size()/2.0;
    cameraZ = 0;

    translateX = -3;
    translateZ = -25;

    fits.push_back(new BoxPosition(6,2));
    fits.push_back(new BoxPosition(6,3));
    fits.push_back(new BoxPosition(6,4));

    boxs.push_back(new BoxPosition(5,2));
    boxs.push_back(new BoxPosition(5,3));
    boxs.push_back(new BoxPosition(5,4));

    player1 = new BoxPosition(5,6);
}

void GameLevel::map4(){
    map = {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1},
        {1,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,1},
        {1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,1},
        {1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};

    floor = {
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
        {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};

    cameraX = map[0].size()/2.0;
    cameraY = map.size()/2.0;
    cameraZ = 3;

    translateX = -8;
    translateZ = -22;

    fits.push_back(new BoxPosition(1,2));
    fits.push_back(new BoxPosition(4,3));
    fits.push_back(new BoxPosition(7,3));
    fits.push_back(new BoxPosition(10,2));

    boxs.push_back(new BoxPosition(2,2));
    boxs.push_back(new BoxPosition(5,3));
    boxs.push_back(new BoxPosition(8,3));
    boxs.push_back(new BoxPosition(11,2));

    player1 = new BoxPosition(2,4);
}

GameLevel::GameLevel(int level){
    map.clear();
    floor.clear();
    fits.clear();
    boxs.clear();
    if (level == 0){
        map0();
    } else if (level == 1){
        map1();
    } else if (level == 2) {
        map2();
    } else if (level == 3){
        map3();
    } else if (level == 4){
        map4();
    }
}

vector<vector<int>> GameLevel::getMap(){
    return map;
}

vector<vector<int>> GameLevel::getFloor(){
    return floor;
}

vector<BoxPosition*> GameLevel::getFits(){
    return fits;
}

vector<BoxPosition*> GameLevel::getBoxes(){
    return boxs;
}

BoxPosition* GameLevel::getPlayer(){
    return player1;
}

float GameLevel::getCameraX(){
    return cameraX;
}

float GameLevel::getCameraY(){
    return cameraY;
}

float GameLevel::getCameraZ(){
    return cameraZ;
}


float GameLevel::getTranslateX(){
    return translateX;
}


float GameLevel::getTranslateZ(){
    return translateZ;
}
