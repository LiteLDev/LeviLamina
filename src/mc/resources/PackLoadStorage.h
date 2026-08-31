#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackLoadStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk25f19e;
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadStorage& operator=(PackLoadStorage const&);
    PackLoadStorage(PackLoadStorage const&);
    PackLoadStorage();
};
