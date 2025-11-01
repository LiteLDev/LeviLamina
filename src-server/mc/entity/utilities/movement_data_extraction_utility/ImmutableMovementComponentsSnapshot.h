#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MovementDataExtractionUtility {

struct ImmutableMovementComponentsSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkc72ed1;
    ::ll::UntypedStorage<4, 4> mUnk3dd121;
    ::ll::UntypedStorage<8, 8> mUnkd784a3;
    ::ll::UntypedStorage<8, 8> mUnkd1aba8;
    // NOLINTEND

public:
    // prevent constructor by default
    ImmutableMovementComponentsSnapshot& operator=(ImmutableMovementComponentsSnapshot const&);
    ImmutableMovementComponentsSnapshot(ImmutableMovementComponentsSnapshot const&);
    ImmutableMovementComponentsSnapshot();

};

}
