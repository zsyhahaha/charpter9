//
// Created by »ªË¶ on 13/7/2022.
//

#ifndef CHARPTER9_COORDIN_H
#define CHARPTER9_COORDIN_H

struct polar
{
    double distance;
    double angle;
};

struct rect
{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif //CHARPTER9_COORDIN_H
