#pragma once

#include <types.h>
#include <mt/mt_vector.h>

struct soAreaData {
    char m_0x0;
    char m_0x1;
    short m_0x2;
    int m_0x4;
    int m_0x8;
    int m_0xc;
    Vec2f m_pos;
    Vec2f m_range;
};

struct soAreaInit {
    soAreaData* m_data;
    int m_0x4;
};
