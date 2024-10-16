#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <QGraphicsItem>

class Game;
class ChessSquare;

enum Player { White, Black };

class Figure : public QGraphicsPixmapItem {
private:
    QString side;
protected:
    Game *game;
public:
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    virtual QList<QPair<int, int>> move(const QPair<int, int> &pos) = 0;
    void moveToSquare(ChessSquare* square);
    Player getColor();

};

#endif

