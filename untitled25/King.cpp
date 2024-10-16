//
// Created by German Albershteyn on 16.10.2024.
//

#include "King.h"

King::King(QString side, QGraphicsItem *parent = 0) {
    if(side == "white"){
        setPixmap(QPixmap(":/Images/king1").scaled(60, 60));
    }
    else {
        setPixmap(QPixmap(":/Images/king").scaled(60, 60));
    }
}

QList<QPair<int, int>> King::move(const QPair<int, int> &pos) {

}
