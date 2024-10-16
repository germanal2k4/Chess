//
// Created by German Albershteyn on 15.10.2024.
//


#pragma once
#include <QGraphicsRectItem>
#include <QBrush>
#include <QColor>
#include <QSoundEffect>
#include "QDebug"
#include <iostream>
#include "Game.h"
class Figure;


class ChessSquare : public QGraphicsRectItem {
public:
    ChessSquare(int row, int col, int squareSize, Game* game1, Figure* figure = nullptr) : row(row), col(col), figure(figure){
        setRect(col * squareSize, row * squareSize, squareSize, squareSize);
        this->game = game1;
        if ((row + col) % 2 == 0) {
            setBrush(QBrush(Qt::white));
        } else {
            setBrush(QBrush(Qt::gray));
        }
    }
    void setFigure(Figure* f){
        figure = f;
    }
    bool hasFigure(){
        return figure != nullptr;
    }
    QPair<int,int> getPosition() const { return {row, col}; }

    void highlightMoves(const QList<QPair<int, int>>& moves) {
        for (const QPair<int, int> &move: moves) {
            int targetRow = move.first;
            int targetCol = move.second;

        }
    }
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void highlight(Qt::GlobalColor color) {
        setBrush(QBrush(Qt::red));
    }

    void resetColor() {
        if ((row + col) % 2 == 0) {
            setBrush(QBrush(Qt::white));
        } else {
            setBrush(QBrush(Qt::gray));
        }
    }

    void removeFigure() {
        figure = nullptr;
    }
    Figure* getFigure(){
        return figure;
    }

private:
    Game * game;
    Figure* figure;
    int row;
    int col;
};


