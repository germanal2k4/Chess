//
// Created by German Albershteyn on 16.10.2024.
//

#pragma once
#include "Figure.h"


class Rook : public Figure{
public:
    QList<QPair<int, int>> move(const QPair<int, int> &pos) override;
    Rook(QString side, QGraphicsItem* parent);
};


