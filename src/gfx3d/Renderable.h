#pragma once

#include <types.h>

namespace gfx3d {
    class Renderable {
        u8 unk_0x4;
        u8 unk_0x5;
        u8 unk_0x6;
        u8 unk_0x7;
        u32 unk_0x8;

    public:
        Renderable(void);
        virtual ~Renderable(); // assumed
    };
} // namespace gfx3d
