//
// Created by German Albershteyn on 16.10.2024.
//

#pragma once
#include "Figure.h"


class Queen : public Figure{
public:
    QList<QPair<int, int>> move(const QPair<int, int> &pos) override;
    Queen(QString side, QGraphicsItem* parent);
};


