#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PointerHeldScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk677aa4;
    ::ll::UntypedStorage<4, 8> mUnkc5cc6b;
    ::ll::UntypedStorage<1, 1> mUnk759fe8;
    // NOLINTEND

public:
    // prevent constructor by default
    PointerHeldScreenEventData& operator=(PointerHeldScreenEventData const&);
    PointerHeldScreenEventData(PointerHeldScreenEventData const&);
    PointerHeldScreenEventData();
};
