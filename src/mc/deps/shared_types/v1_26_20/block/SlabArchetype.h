#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct SlabArchetype {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDoubleSlabBlock;
    ::ll::TypedStorage<1, 1, bool>           mIsDouble;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
