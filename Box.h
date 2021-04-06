#ifndef BOX_H_INCLUDED
#define BOX_H_INCLUDED

//@author:AndreeaDraghici

typedef struct box
{
    int length;
    int width;
    int height;
} _box;
int get_volume(_box v);
int max_height(_box lower);

#endif
