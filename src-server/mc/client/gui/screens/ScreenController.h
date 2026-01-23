#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScreenController {
public:
    // ScreenController inner types declare
    // clang-format off
    struct ButtonEventCallbackKeyHasher;
    // clang-format on

    // ScreenController inner types define
    enum class PreviousButtonStateRequirement : int {};

    enum class SliderChangeType : int {};

    struct ButtonEventCallbackKeyHasher {};
};
