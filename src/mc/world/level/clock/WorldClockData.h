#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WorldClockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkff71a0;
    ::ll::UntypedStorage<8, 32> mUnk28aabb;
    ::ll::UntypedStorage<4, 4>  mUnk15269b;
    ::ll::UntypedStorage<1, 1>  mUnkfd8fcb;
    ::ll::UntypedStorage<8, 24> mUnk9d68eb;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldClockData(WorldClockData const&);
    WorldClockData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WorldClockData& operator=(::WorldClockData&&);

    MCNAPI ::WorldClockData& operator=(::WorldClockData const&);

    MCNAPI bool operator==(::WorldClockData const&) const;
    // NOLINTEND
};
