//
// Created by German Albershteyn on 16.10.2024.
//


#pragma once
#include "Figure.h"

class King : public Figure{
public:
    QList<QPair<int, int>> move(const QPair<int, int> &pos) override;
    King(QString side,  QGraphicsItem* parent);
};


