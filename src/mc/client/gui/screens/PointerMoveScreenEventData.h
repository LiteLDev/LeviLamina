#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PointerMoveScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk8f8e11;
    ::ll::UntypedStorage<4, 8> mUnkbe0d29;
    // NOLINTEND

public:
    // prevent constructor by default
    PointerMoveScreenEventData& operator=(PointerMoveScreenEventData const&);
    PointerMoveScreenEventData(PointerMoveScreenEventData const&);
    PointerMoveScreenEventData();
};
