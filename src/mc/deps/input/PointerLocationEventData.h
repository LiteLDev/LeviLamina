#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PointerLocationEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk873fb5;
    ::ll::UntypedStorage<2, 2> mUnkb428b2;
    ::ll::UntypedStorage<2, 2> mUnk4e18ab;
    ::ll::UntypedStorage<1, 1> mUnk461717;
    // NOLINTEND

public:
    // prevent constructor by default
    PointerLocationEventData& operator=(PointerLocationEventData const&);
    PointerLocationEventData(PointerLocationEventData const&);
    PointerLocationEventData();
};
