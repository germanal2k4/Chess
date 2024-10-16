//
// Created by German Albershteyn on 15.10.2024.
//

#pragma once
#include <string>
#include "QGraphicsItem"
#include "ChessSquare.h"
#include "Game.h"
enum Player { White, Black };

class Figure : public QGraphicsPixmapItem {
private:
    QString side;
protected:
    Game *game;
public:
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    virtual QList<QPair<int, int>> move(const QPair<int, int> &pos) = 0;
    void moveToSquare(ChessSquare* square);
    Player getColor();

};



