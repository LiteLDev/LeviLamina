#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct GestureRecognizerBase {
public:
    // GestureRecognizerBase inner types declare
    // clang-format off
    struct TouchEventDataWithCurrentPos;
    // clang-format on

    // GestureRecognizerBase inner types define
    enum class GestureRecognizerState : uint {};

    struct TouchEventDataWithCurrentPos {};
};

} // namespace OreUI
