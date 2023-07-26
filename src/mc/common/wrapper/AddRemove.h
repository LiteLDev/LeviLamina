#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct AddRemove {

public:
    // prevent constructor by default
    AddRemove& operator=(AddRemove const&) = delete;
    AddRemove(AddRemove const&)            = delete;
    AddRemove()                            = delete;
};
