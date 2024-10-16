//
// Created by German Albershteyn on 16.10.2024.
//

#pragma once
#include "QObject"
#include "ChessSquare.h"
#include "ChessBoard.h"
#include "Figure.h"
#include "QSoundEffect"


class Game : public QObject {
    Q_OBJECT
public:
    Game(ChessBoard* board, QObject* parent = nullptr)
            : QObject(parent), chessBoard(board), selectedPiece(nullptr), currentPlayer(White) {
        chessBoard->initFigures();
        chessBoard->show();
    }

    void handleSquareClick(ChessSquare* clickedSquare) {
        if (selectedPiece) {
            if (selectedPiece->move(chessBoard->findSquareWithPiece(selectedPiece)->getPosition())
            .contains(clickedSquare->getPosition()) && isValidMove()) {
                moveSelectedPieceTo(clickedSquare);
                switchPlayer();
            } else {

            }
        } else {

        }
    }

    void handlePieceClick(Figure* piece) {
        if (piece->getColor() != currentPlayer) {

            return;
        }

        if (selectedPiece) {
            deselectPiece();
        }

        ChessSquare* currentSquare = chessBoard->findSquareWithPiece(piece);
        if (currentSquare) {
            selectPiece(piece, currentSquare);
        }
    }

private:
    ChessBoard* chessBoard;
    Figure* selectedPiece;
    ChessSquare* selectedSquare{};
    Player currentPlayer;

    void selectPiece(Figure* piece, ChessSquare* square) {
        selectedPiece = piece;
        selectedSquare = square;

        QList<QPair<int, int>> possibleMoves = piece->move(square->getPosition());
        for (const auto& move : possibleMoves) {
            ChessSquare* targetSquare = chessBoard->getSquareAt(move.first, move.second);
            if (targetSquare) {
                targetSquare->highlight(Qt::red);
            }
        }
    }

    void deselectPiece() {
        if (selectedPiece) {
            QList<QPair<int, int>> possibleMoves = selectedPiece->move(chessBoard->findSquareWithPiece(selectedPiece)->getPosition());
            for (const auto& move : possibleMoves) {
                ChessSquare* targetSquare = chessBoard->getSquareAt(move.first, move.second);
                if (targetSquare) {
                    targetSquare->resetColor();
                }
            }
        }
        selectedPiece = nullptr;
        selectedSquare = nullptr;
    }


    void moveSelectedPieceTo(ChessSquare* targetSquare) {
        targetSquare->setFigure(selectedPiece);
        selectedSquare->removeFigure();
        deselectPiece();
    }

    void switchPlayer() {
        currentPlayer = (currentPlayer == White) ? Black : White;
    }

    bool isValidMove() {
        return selectedPiece->getColor() == currentPlayer;  // Проверяем, что фигура принадлежит текущему игроку
    }
};



