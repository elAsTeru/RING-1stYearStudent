#pragma once

//右移動
void moveRight(int& charaX, int speedX, int& reverse);
//左移動
void moveLeft(int& charaX, int speedX, int& reverse);


//敵機移動方法と移動
void enemyMove(int& x, int& y, int& speedX, int& speedY, const int spownPosi, int& reverse);
