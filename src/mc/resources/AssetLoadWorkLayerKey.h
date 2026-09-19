#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AssetLoadWorkLayerKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk946abf;
    ::ll::UntypedStorage<4, 4> mUnkf2f174;
    // NOLINTEND

public:
    // prevent constructor by default
    AssetLoadWorkLayerKey& operator=(AssetLoadWorkLayerKey const&);
    AssetLoadWorkLayerKey(AssetLoadWorkLayerKey const&);
    AssetLoadWorkLayerKey();
};
