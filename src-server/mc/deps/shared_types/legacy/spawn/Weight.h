#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct Weight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf7dcc0;
    ::ll::UntypedStorage<4, 4> mUnk178dc4;
    // NOLINTEND

public:
    // prevent constructor by default
    Weight& operator=(Weight const&);
    Weight(Weight const&);
    Weight();
};

} // namespace SharedTypes::Legacy::Spawn
