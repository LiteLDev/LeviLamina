#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct ScreenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk919466;
    ::ll::UntypedStorage<4, 4> mUnkbf2b53;
    ::ll::UntypedStorage<4, 4> mUnk1c672b;
    ::ll::UntypedStorage<4, 4> mUnkdd2ed8;
    ::ll::UntypedStorage<4, 4> mUnkf27215;
    ::ll::UntypedStorage<4, 4> mUnk106a33;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenInfo& operator=(ScreenInfo const&);
    ScreenInfo(ScreenInfo const&);
    ScreenInfo();
};

} // namespace cohtml
