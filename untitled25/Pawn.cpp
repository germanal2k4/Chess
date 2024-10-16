//
// Created by German Albershteyn on 15.10.2024.
//

#include "Pawn.h"

Pawn::Pawn(QString side, QGraphicsItem *parent = 0) {
    if(side == "white"){
        setPixmap(QPixmap(":/Images/pawn1").scaled(60, 60));
    }
    else {
        setPixmap(QPixmap(":/Images/pawn").scaled(60, 60));
    }
}

QList<QPair<int, int>> Pawn::move(const QPair<int, int> &pos) {

}
