//
// Created by German Albershteyn on 15.10.2024.
//
#pragma once

#include <QGridLayout>
#include <QPushButton>
#include <QWidget>
#include <QGraphicsView>
#include "ChessSquare.h"
#include "Figure.h"
#include "Bishop.h"
#include "Pawn.h"
#include "King.h"
#include "Queen.h"
#include "Horse.h"
#include "Rook.h"
#include <QList>
#include "Game.h"

class ChessBoard : public QGraphicsView {
    Q_OBJECT

public:
    ChessSquare *getSquareAt(int i, int i1);
    ChessSquare *findSquareWithPiece(Figure *pFigure);
    ChessBoard(QWidget *parent = nullptr);
    template <typename T>
    void setFigure(QPair<int, int> pos, T* figure);

    void initFigures();

private:
    Game* game;
    QGraphicsScene *scene;
    QList<QList<ChessSquare *>> squares;
};

template<typename T>
void ChessBoard::setFigure(QPair<int, int> pos, T *figure) {
        scene->addItem((figure));
        figure->moveToSquare(squares[pos.first][pos.second]);
        squares[pos.first][pos.second]->setFigure(figure);
}


