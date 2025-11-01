#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct DistanceFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7e16d2;
    ::ll::UntypedStorage<4, 4> mUnkec59b4;
    // NOLINTEND

public:
    // prevent constructor by default
    DistanceFilter& operator=(DistanceFilter const&);
    DistanceFilter(DistanceFilter const&);
    DistanceFilter();

};

}
