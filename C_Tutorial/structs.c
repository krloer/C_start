#include <stdio.h>

struct rectangle //requires struct keyword for each initialization
{
    int length;
    int width;
};

typedef struct {
    int radius;
    int height;
} sylinder;

typedef struct 
{
    int x;
    int y;
} position;

typedef struct
{
    struct rectangle rectangle;
    position position;
    char owner[50];
}roomPlan;

int main()
{
    // char name[] = "Kristoffer"; - doesnt work (*passName in roomPlan)
    // char *passName = &name;
    struct rectangle myRectangle = {5, 10};
    sylinder mySylinder = {3, 10};
    position roomPosition = {14, 38};
    roomPlan myRoom = {myRectangle, roomPosition, "Kristoffer"};
    printf("Length: %d, width: %d\n", myRectangle.length, myRectangle.width);
    printf("Radius: %d, height: %d\n", mySylinder.radius, mySylinder.height);
    printf("%ss room is at (%d,%d), with a width og %d and lenngth of %d\n", 
        myRoom.owner, 
        myRoom.position.x, 
        myRoom.position.y, 
        myRoom.rectangle.width, 
        myRoom.rectangle.length
        );

    position path[] = {{0,1}, {1,2}, {2,3}, {3,4}}; //create array with struct as type, each element is a struct
    int size = 4;
    printf("Path:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d,%d\n", path[i].x, path[i].y);
    }
    
    roomPlan *roomPointer = &myRoom;
    printf("Pointer to the adress of myroom.position.x: %d\n", roomPointer->position.x); //"roomPointer->" tilsvarer "myRoom."
    
    return 0;
}