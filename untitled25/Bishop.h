//
// Created by German Albershteyn on 15.10.2024.
//

#pragma once

#include <string>
#include <QObject>
#include "Figure.h"
class Game;

class Bishop : public Figure{
public:
    QList<QPair<int, int>> move(const QPair<int, int> &pos) override;
    Bishop(QString side, Game * game1, QGraphicsItem* parent);
};


