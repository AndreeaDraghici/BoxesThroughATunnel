#include <stdio.h>
#include <stdlib.h>
#include"Box.h"
#include"Box.c"

//@author:AndreeaDraghici

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
