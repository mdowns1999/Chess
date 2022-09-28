#pragma once
#include "position.h"
#include "board.h"
#include "uiDraw.h"

class Piece
{
protected:
   Position position;
   bool fWhite;
   int nMove;
   int lastMove;


public:
   // Constructor
   Piece(int r, int c, bool white);

   void assign(Position);
   void assign(Piece);
   bool isWhite();
   bool isMove();
   int getNMoves();
   Position getPosition();
   bool justMoved();

   //Virtual Functions for Inheritance
   virtual char getLetter() {}
   virtual void display(ogstream gout) {};
   virtual void getMoves(Board board) {};
};

