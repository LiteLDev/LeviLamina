#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct DataTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9116c0;
    ::ll::UntypedStorage<8, 32> mUnk98ccc7;
    ::ll::UntypedStorage<4, 8>  mUnkdad9d6;
    ::ll::UntypedStorage<4, 8>  mUnkf8fef3;
    ::ll::UntypedStorage<4, 20> mUnkd9cab3;
    ::ll::UntypedStorage<4, 20> mUnk37764d;
    ::ll::UntypedStorage<4, 20> mUnk7f78d3;
    ::ll::UntypedStorage<4, 20> mUnka9a388;
    ::ll::UntypedStorage<8, 48> mUnkefa6d1;
    ::ll::UntypedStorage<4, 4>  mUnkba23a5;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTracker& operator=(DataTracker const&);
    DataTracker(DataTracker const&);
    DataTracker();
};

} // namespace OreUI
