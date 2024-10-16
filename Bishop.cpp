//
// Created by German Albershteyn on 15.10.2024.
//

#include "Bishop.h"

QList<QPair<int, int>> Bishop::move(const QPair<int, int> &pos) {

}

Bishop::Bishop(QString side, Game *game1, QGraphicsItem *parent = 0) {
    this->game = game1;
    if(side == "white"){
        setPixmap(QPixmap(":/Images/bishop1").scaled(60, 60));
    }
    else {
        setPixmap(QPixmap(":/Images/bishop").scaled(60, 60));
    }
}



