#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct InsideBlockWithPosAndBlockComponent {

public:
    // prevent constructor by default
    InsideBlockWithPosAndBlockComponent& operator=(InsideBlockWithPosAndBlockComponent const&) = delete;
    InsideBlockWithPosAndBlockComponent(InsideBlockWithPosAndBlockComponent const&)            = delete;
    InsideBlockWithPosAndBlockComponent()                                                      = delete;
};
