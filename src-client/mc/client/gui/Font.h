#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Font {
public:
    // Font inner types declare
    // clang-format off
    struct GlyphQuad;
    struct TextObject;
    // clang-format on

    // Font inner types define
    struct GlyphQuad {};

    struct TextObject {
    public:
        // TextObject inner types declare
        // clang-format off
        struct Page;
        // clang-format on

        // TextObject inner types define
        struct Page {};
    };
};
