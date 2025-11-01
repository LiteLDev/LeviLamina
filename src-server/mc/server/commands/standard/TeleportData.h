#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TeleportData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk55875d;
    ::ll::UntypedStorage<1, 1>  mUnk1c9ac9;
    ::ll::UntypedStorage<4, 4>  mUnk401fb2;
    ::ll::UntypedStorage<4, 4>  mUnk362e96;
    // NOLINTEND

public:
    // prevent constructor by default
    TeleportData& operator=(TeleportData const&);
    TeleportData(TeleportData const&);
    TeleportData();
};
