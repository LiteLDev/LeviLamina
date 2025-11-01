#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RelocEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk90947b;
    ::ll::UntypedStorage<4, 4> mUnk874ce2;
    ::ll::UntypedStorage<4, 4> mUnka31308;
    // NOLINTEND

public:
    // prevent constructor by default
    RelocEntry& operator=(RelocEntry const&);
    RelocEntry(RelocEntry const&);
    RelocEntry();

};
