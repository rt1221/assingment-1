//
//  GameObjects.h
//  NYUCodebase
//
//  Created by Risa Teshigawara on 3/12/15.
//  Copyright (c) 2015 Ivan Safrin. All rights reserved.
//

#ifndef __NYUCodebase__GameObjects__
#define __NYUCodebase__GameObjects__

#include <stdio.h>
#include <SDL.h>
#include <SDL_opengl.h>
#include <SDL_image.h>
#include <math.h>
#include <string>
#include<vector>
#include "SheetSprite.h"

using namespace std;


class GameObjects {
public:
    
    //constructor for entity
    GameObjects(float x_pos = 0.0, float y_pos=0.0, float width=0.0, float height=0.0, float index=0,bool visible=true, GLuint textureID = 0);
    
    
    void DrawSpriteSheetSprite(GLuint textureID, int spriteCountX, int spriteCountY) ;
    
    //void DrawSheet(float scale);
    
    void DrawSprite(GLuint texture, float x, float y, float rotation, float w, float h);
    
   
    void Update(float elapsed);
    void Render();
   // bool collidesWith(Entity *entity);
    void FixedUpdate();
    GLuint LoadTexture(const char *image_path);
   // void Move(float elapsed);
    bool checkCollision();
    float lerp(float v0, float v1, float t);
    
    GLuint textureID;
    SheetSprite sprite;
    float x_pos;
    float y_pos;
    float width;
    float height;
   /* float velocity_x;
    float velocity_y;
    float gravity_x;
    float gravity_y;
    float acceleration_x;
    float acceleration_y;
    float friction_x;
    float friction_y;
    float mass;
    */
    bool isStatic;
    bool enableCollisions;
    
    int index;
    bool visible;
    
    float direction_x;
    float direction_y;
    float speed;
    
    bool collidedTop;
    bool collidedBottom;
    bool collidedLeft;
    bool collidedRight;
    
    
};



#endif /* defined(__NYUCodebase__GameObjects__) */
