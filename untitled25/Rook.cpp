//
// Created by German Albershteyn on 16.10.2024.
//

#include "Rook.h"

QList<QPair<int, int>> Rook::move(const QPair<int, int> &pos) {

}

Rook::Rook(QString side, QGraphicsItem *parent = 0) {
    if(side == "white"){
        setPixmap(QPixmap(":/Images/rook1").scaled(60, 60));
    }
    else {
        setPixmap(QPixmap(":/Images/rook").scaled(60, 60));
    }
}
