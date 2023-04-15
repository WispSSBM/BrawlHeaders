#pragma once

#include <StaticAssert.h>
#include <gr/gr_collision.h>
#include <gr/gr_collision_shape_circle.h>
#include <gr/gr_collision_shape_rhombus.h>
#include <types.h>

class grCollStatus {
public:
    // 0
    grCollStatus* m_next;
    // 4
    grCollStatus* m_prev;
    // 8
    char _spacer[6];
    // 14
    short m_exclusiveLineAttr;
    // 16
    int m_taskId;
    // 20
    char _spacer2[65];
    // 85
    char m_cliffTeam;
    // 86
    char _spacer3[6];
    // 92
    grCollShape* m_prevCollShape;
    // 96
    grCollShape* m_currentCollShape;
    // 100
    char _spacer4[10];
    // 110
    char m_targetLineCategory;
    // 111
    char _spacer5[6];
    // 117
    char m_touchFlags;
    // 118
    char _spacer6[10];
    // 128
    grCollision* m_collision;
    // 132
    Vec2f m_unk;
    // 140
    Vec2f m_touchLineSpeed;
    // 148
    char _spacer7[32];
    // 180
    Vec2f m_180[3];
    // 204
    char _spacer8[8];
    // 212
    grCollisionLineWork m_collLineWorkArray[19];
    // 516
    grCollShape m_collShape;
    // 520
    char _spacer9[116];
    // TOTAL SIZE == 636
};
static_assert(sizeof(grCollStatus) == 636, "Class is wrong size!");

class grCollStatusEventReceiver {
public:
    virtual void receive(int, bool);
};