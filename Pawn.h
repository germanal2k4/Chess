//
// Created by German Albershteyn on 15.10.2024.
//
#pragma once
#include "Figure.h"
#include <QString>

class Pawn : public Figure{
public:
    QList<QPair<int, int>> move(const QPair<int, int> &pos) override;
    Pawn(QString side,  QGraphicsItem* parent);
};


