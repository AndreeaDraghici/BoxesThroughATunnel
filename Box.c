#include"Box.h"
#define MAX_HEIGHT 41

//@author:AndreeaDraghici

int get_volume(_box v)
{
    return v.length*v.width*v.height;
}

//return 1 if the box's height is lower than MAX_HEIGHT
//else return 0
int max_height(_box lower)
{

    if(lower.height<MAX_HEIGHT)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


