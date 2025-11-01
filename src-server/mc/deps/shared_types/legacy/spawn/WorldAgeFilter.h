#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct WorldAgeFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8dda49;
    ::ll::UntypedStorage<8, 8> mUnk33aa42;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldAgeFilter& operator=(WorldAgeFilter const&);
    WorldAgeFilter(WorldAgeFilter const&);
    WorldAgeFilter();

};

}
