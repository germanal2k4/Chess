//
// Created by German Albershteyn on 16.10.2024.
//

#include "Horse.h"

Horse::Horse(QString side, QGraphicsItem *parent = 0) {
    if(side == "white"){
        setPixmap(QPixmap(":/Images/horse1").scaled(60, 60));
    }
    else {
        setPixmap(QPixmap(":/Images/horse").scaled(60, 60));
    }
}

QList<QPair<int, int>> Horse::move(const QPair<int, int> &pos) {

}
