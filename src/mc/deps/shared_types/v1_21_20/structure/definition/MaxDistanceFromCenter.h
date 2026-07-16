#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20::JigsawStructureDefinition {

struct MaxDistanceFromCenter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mHorizontal;
    ::ll::TypedStorage<4, 4, int> mVertical;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructureDefinition
