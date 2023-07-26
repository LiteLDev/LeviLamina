#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GroupSizeComponent {

public:
    // prevent constructor by default
    GroupSizeComponent& operator=(GroupSizeComponent const&) = delete;
    GroupSizeComponent(GroupSizeComponent const&)            = delete;
    GroupSizeComponent()                                     = delete;
};
