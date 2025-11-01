#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct HeightFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk9cfc6f;
    ::ll::UntypedStorage<4, 4> mUnkce1eb2;
    // NOLINTEND

public:
    // prevent constructor by default
    HeightFilter& operator=(HeightFilter const&);
    HeightFilter(HeightFilter const&);
    HeightFilter();

};

}
