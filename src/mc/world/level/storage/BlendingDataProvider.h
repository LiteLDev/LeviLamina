#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlendingDataProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnkf05c12;
    ::ll::UntypedStorage<8, 64> mUnk63bbcf;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendingDataProvider& operator=(BlendingDataProvider const&);
    BlendingDataProvider(BlendingDataProvider const&);
    BlendingDataProvider();
};
