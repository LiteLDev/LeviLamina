#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

class SkinPackCollectorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8ab54c;
    ::ll::UntypedStorage<8, 16> mUnkba3c65;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinPackCollectorInfo& operator=(SkinPackCollectorInfo const&);
    SkinPackCollectorInfo(SkinPackCollectorInfo const&);
    SkinPackCollectorInfo();
};

} // namespace persona
