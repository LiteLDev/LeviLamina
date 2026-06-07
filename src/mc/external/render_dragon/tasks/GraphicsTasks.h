#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::tasks {

class GraphicsTasks {
public:
    // GraphicsTasks inner types declare
    // clang-format off
    struct InitBegin;
    struct InitBgfx;
    struct InitEnd;
    struct InitFinalize;
    struct InitPending;
    struct InitializationState;
    // clang-format on

    // GraphicsTasks inner types define
    enum class ExecutionMode : int {};

    struct InitBegin {};

    struct InitBgfx {};

    struct InitEnd {};

    struct InitFinalize {};

    struct InitPending {};

    struct InitializationState {};
};

} // namespace dragon::tasks
