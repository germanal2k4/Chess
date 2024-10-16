//
// Created by German Albershteyn on 16.10.2024.
//

#pragma once
#include "Figure.h"

class Horse : public Figure{
public:
    QList<QPair<int, int>> move(const QPair<int, int> &pos) override;
    Horse(QString side,  QGraphicsItem* parent);
};


