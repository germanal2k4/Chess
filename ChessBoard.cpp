//
// Created by German Albershteyn on 15.10.2024.
//

#include "ChessBoard.h"

void ChessBoard::initFigures() {
    for(int i = 0; i < 8; i++){
        auto pawnWhite = new Pawn("white",  squares[1][i]);
        auto pawnBlack = new Pawn("black",  squares[6][i]);
        setFigure({1, i}, pawnWhite);
        setFigure({6, i}, pawnBlack);
        if(i == 0 || i == 7){
            auto rookWhite = new Rook("white",  squares[1][i]);
            auto rookBlack = new Rook("black",  squares[6][i]);
            setFigure({0, i}, rookWhite);
            setFigure({7, i}, rookBlack);
        }
        else if(i == 1 || i == 6){
            auto horseWhite = new Horse("white",  squares[1][i]);
            auto horseBlack = new Horse("black",  squares[6][i]);
            setFigure({0, i}, horseWhite);
            setFigure({7, i}, horseBlack);
        }
        else if(i == 2 || i == 5){
            auto bishopWhite = new Bishop("white", game,  squares[1][i]);
            auto bishopBlack = new Bishop("black",game,  squares[6][i]);
            setFigure({0, i}, bishopWhite);
            setFigure({7, i}, bishopBlack);
        }
        else{
            if(i == 3){
                auto kingWhite = new King("white",  squares[1][i]);
                auto kingBlack = new King("black",  squares[6][i]);
                setFigure({0, i}, kingWhite);
                setFigure({7, i + 1}, kingBlack);
            }
            else if(i == 4){
                auto queenWhite = new Queen("white",  squares[1][i]);
                auto queenBlack = new Queen("black",  squares[6][i]);
                setFigure({0, i}, queenWhite);
                setFigure({7, i - 1}, queenBlack);
            }
        }
    }
}

ChessBoard::ChessBoard(QWidget *parent) {
    this->setParent(parent);
    scene = new QGraphicsScene(this);
    setScene(scene);
    squares.resize(8);
    for(int i = 0; i < 8; i++){
        squares[i].resize(8);
    }
}

ChessSquare *ChessBoard::findSquareWithPiece(Figure *pFigure) {
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(squares[i][j]->getFigure() == pFigure && squares[i][j]->getFigure()->getColor() == pFigure->getColor()){
                return squares[i][j];
            }
        }
    }
}

ChessSquare *ChessBoard::getSquareAt(int i, int i1) {
    return squares[i][i1];
}

