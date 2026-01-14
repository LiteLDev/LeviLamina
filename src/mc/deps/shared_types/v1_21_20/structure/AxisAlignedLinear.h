#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/Axis.h"

namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule {

struct AxisAlignedLinear {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                         mMinChance;
    ::ll::TypedStorage<4, 4, float>                                                         mMaxChance;
    ::ll::TypedStorage<4, 4, int>                                                           mMinDist;
    ::ll::TypedStorage<4, 4, int>                                                           mMaxDist;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::Axis> mAxis;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20::JigsawStructure::ProcessorRule
