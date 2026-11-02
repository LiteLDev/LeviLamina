#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

struct DynamicComponentViewData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk66a84b;
    ::ll::UntypedStorage<8, 8> mUnk1f705b;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicComponentViewData& operator=(DynamicComponentViewData const&);
    DynamicComponentViewData(DynamicComponentViewData const&);
    DynamicComponentViewData();
};

} // namespace Social::Events
