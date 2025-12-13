#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HudScreenController {
public:
    // HudScreenController inner types declare
    // clang-format off
    struct ButtonLists;
    struct Tooltip;
    // clang-format on

    // HudScreenController inner types define
    enum class Tooltips : uchar {};

    struct ButtonLists {};

    struct Tooltip {
    public:
        // Tooltip inner types define
        enum class Type : uchar {};
    };
};
