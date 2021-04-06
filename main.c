#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

//@author:AndreeaDraghici

typedef struct box
{
    int length;
    int width;
    int height;
} _box;

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
int main()
{
    int n;
    FILE *f, *g;
    f=fopen("input","r");
    fscanf(f,"%d",&n);

    _box *boxes=malloc(n*sizeof(_box));
    for(int i=0; i<n; i++)
    {
        fscanf(f,"%d",&boxes[i].length);
        fscanf(f,"%d",&boxes[i].width);
        fscanf(f,"%d",&boxes[i].height);
    }

    g=fopen("output","w");
    for(int i=0; i<n; i++)
    {
        if(max_height(boxes[i]))
        {
            fprintf(g,"%d\n",get_volume(boxes[i]));
        }

    }
    fclose(f);
    fclose(g);
}
