#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct Bounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkdd5a60;
    ::ll::UntypedStorage<4, 4> mUnk199ba1;
    // NOLINTEND

public:
    // prevent constructor by default
    Bounds& operator=(Bounds const&);
    Bounds(Bounds const&);
    Bounds();
};

} // namespace SharedTypes::v1_21_60::DimensionDefinition
