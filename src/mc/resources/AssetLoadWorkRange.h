#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AssetLoadWorkRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd23b05;
    ::ll::UntypedStorage<4, 8> mUnkdb488d;
    // NOLINTEND

public:
    // prevent constructor by default
    AssetLoadWorkRange& operator=(AssetLoadWorkRange const&);
    AssetLoadWorkRange(AssetLoadWorkRange const&);
    AssetLoadWorkRange();
};
