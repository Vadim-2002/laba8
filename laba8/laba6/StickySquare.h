#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

#include "Shapes.h"
#include <iostream>
#include <fstream>

class StickySquare : public Shapes
{
protected:
    int x, y;
    int r = 40;
    bool marked = false;
    std::string name = "StickySquare";

public:
    StickySquare(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void draw_red(Graphics^ g) override
    {
        if (marked == false)
            g->DrawRectangle(Pens::Red, x, y, r * 2, r * 2);
        else
            g->DrawRectangle(Pens::Black, x, y, r * 2, r * 2);
    }

    void draw_green(Graphics^ g) override
    {
        if (marked == false)
            g->DrawRectangle(Pens::Green, x, y, r * 2, r * 2);
        else
            g->DrawRectangle(Pens::Black, x, y, r * 2, r * 2);
    }

    void draw_blue(Graphics^ g) override
    {
        if (marked == false)
            g->DrawRectangle(Pens::Blue, x, y, r * 2, r * 2);
        else
            g->DrawRectangle(Pens::Black, x, y, r * 2, r * 2);
    }

    std::string getName() override
    {
        return name;
    }

    String^ ftostring() override
    {
        String^ s = gcnew String("StickySquare()");
        return s;
    }

    int getSize() override
    {
        return 1;
    }

    Shapes& getObject(int i)
    {
        return StickySquare(0, 0);
    }

    void select() override
    {
        marked = true;
    }

    void unselect() override
    {
        marked = false;
    }

    bool reach(int x, int y) override
    {
        if ((this->x - r <= x - r) && (this->x + r >= x - r) && (this->y - r <= y - r) && (this->y + r >= y - r))
            return true;
        else
            return false;
    }

    bool is_select() override
    {
        return marked;
    }

    void change_the_size(int r) override
    {
        this->r = r;
    }

    void change_the_x(int x) override
    {
        this->x += x;
    }

    void change_the_y(int y) override
    {
        this->y += y;
    }

    int getX() override
    {
        return x + r;
    }

    int getY() override
    {
        return y + r;
    }

    int getR() override
    {
        return r;
    }

    void Save()
    {
        std::ofstream out("C:\\a.txt", std::ios::app);

        if (out.is_open())
        {
            out << name << std::endl;
            out << x << std::endl;
            out << y << std::endl;
            out << r << std::endl;

        }

        out.close();
    }

    void Load(std::ifstream& fin) override
    {
        fin >> x;
        fin >> y;
        fin >> r;
    }
};

