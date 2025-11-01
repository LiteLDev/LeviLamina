#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CraftableCountingData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk47c4e4;
    ::ll::UntypedStorage<4, 4> mUnkfa031f;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftableCountingData& operator=(CraftableCountingData const&);
    CraftableCountingData(CraftableCountingData const&);
    CraftableCountingData();

};
