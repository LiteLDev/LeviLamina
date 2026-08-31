#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BiomeWeightedData;
// clang-format on

struct BiomeConditionalTransformationData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeWeightedData>> mTransformsInto;
    ::ll::TypedStorage<2, 2, ushort>                              mConditionJson;
    ::ll::TypedStorage<4, 4, uint>                                mMinPassingNeighbors;
    // NOLINTEND
};
