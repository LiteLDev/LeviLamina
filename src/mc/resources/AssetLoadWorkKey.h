#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AssetLoadWorkKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4d0f94;
    ::ll::UntypedStorage<4, 8> mUnk1b9ab1;
    // NOLINTEND

public:
    // prevent constructor by default
    AssetLoadWorkKey& operator=(AssetLoadWorkKey const&);
    AssetLoadWorkKey(AssetLoadWorkKey const&);
    AssetLoadWorkKey();
};
