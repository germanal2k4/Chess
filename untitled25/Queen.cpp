//
// Created by German Albershteyn on 16.10.2024.
//

#include "Queen.h"

QList<QPair<int, int>> Queen::move(const QPair<int, int> &pos) {

}

Queen::Queen(QString side, QGraphicsItem *parent = 0) {
    if(side == "white"){
        setPixmap(QPixmap(":/Images/queen1").scaled(60, 60));
    }
    else {
        setPixmap(QPixmap(":/Images/queen").scaled(60, 60));
    }
}
