#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct GamepadInput {
public:
    // GamepadInput inner types declare
    // clang-format off
    struct ButtonEvent;
    struct TriggerEvent;
    struct StickEvent;
    // clang-format on

    // GamepadInput inner types define
    struct ButtonEvent {};

    struct TriggerEvent {};

    struct StickEvent {};
};

} // namespace OreUI
