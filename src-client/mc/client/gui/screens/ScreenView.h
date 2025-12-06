#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScreenView {
public:
    // ScreenView inner types declare
    // clang-format off
    struct DelayedCommand;
    struct TouchPadData;
    // clang-format on

    // ScreenView inner types define
    enum class DelayedCommandLocation : uint {};

    struct DelayedCommand {};

    struct TouchPadData {};
};
