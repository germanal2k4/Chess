//
// Created by German Albershteyn on 15.10.2024.
//

#include "ChessSquare.h"

void ChessSquare::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    game->handleSquareClick(this);
}
