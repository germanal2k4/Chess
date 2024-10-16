#include <QApplication>
#include <QPushButton>
#include "ChessBoard.h"
#include "Game.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    auto board = new ChessBoard();

    return QApplication::exec();
}
