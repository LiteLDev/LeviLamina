#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureDefinition {

struct MaxDistanceFromCenter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7aa8a8;
    ::ll::UntypedStorage<4, 4> mUnk809899;
    // NOLINTEND

public:
    // prevent constructor by default
    MaxDistanceFromCenter& operator=(MaxDistanceFromCenter const&);
    MaxDistanceFromCenter(MaxDistanceFromCenter const&);
    MaxDistanceFromCenter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fromHorizontal(int horizontal);
    // NOLINTEND

};

}
