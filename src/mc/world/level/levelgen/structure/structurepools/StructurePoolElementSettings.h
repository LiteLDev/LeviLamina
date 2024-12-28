#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StructurePoolElementSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk210338;
    ::ll::UntypedStorage<8, 8> mUnkaa8a6e;
    ::ll::UntypedStorage<8, 8> mUnk2550a8;
    ::ll::UntypedStorage<1, 1> mUnkcd222d;
    ::ll::UntypedStorage<1, 1> mUnk536b76;
    ::ll::UntypedStorage<1, 1> mUnke3a3ed;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolElementSettings& operator=(StructurePoolElementSettings const&);
    StructurePoolElementSettings(StructurePoolElementSettings const&);
    StructurePoolElementSettings();
};
