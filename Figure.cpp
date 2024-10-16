//
// Created by German Albershteyn on 15.10.2024.
//

#include "Figure.h"



void Figure::moveToSquare(ChessSquare *square) {
    setPos(square->rect().x(), square->rect().y());
}

void Figure::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    game->handlePieceClick(this);
}

Player Figure::getColor() {
    if(side == "white"){
        return White;
    } return Black;
}






