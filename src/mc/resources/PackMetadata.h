#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PackMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb81398;
    // NOLINTEND

public:
    // prevent constructor by default
    PackMetadata& operator=(PackMetadata const&);
    PackMetadata(PackMetadata const&);
    PackMetadata();
};
