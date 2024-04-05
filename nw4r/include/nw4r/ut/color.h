#pragma once

#include <StaticAssert.h>
#include <types.h>

namespace nw4r {
    namespace ut {
        struct Color {
            u8 r;
            u8 g;
            u8 b;
            u8 a;
        };
        static_assert(sizeof(Color) == 0x4, "Class is the wrong size!");
    }
}
