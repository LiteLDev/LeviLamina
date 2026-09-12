#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace VoxelShapes { struct MergerIndexPair; }
// clang-format on

namespace VoxelShapes {

class IndexMerger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::Bedrock::small_vector<float, 12>>                          mCoords;
    ::ll::TypedStorage<8, 64, ::Bedrock::small_vector<::VoxelShapes::MergerIndexPair, 24>> mIndices;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexMerger();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IndexMerger(
        ::Bedrock::small_vector<float, 12> const& first,
        ::Bedrock::small_vector<float, 12> const& second,
        bool                                      canTrimExcessOfFirst,
        bool                                      canTrimExcessOfSecond
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Bedrock::small_vector<float, 12> const& emptyShapeCoords();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::small_vector<float, 12> const& first,
        ::Bedrock::small_vector<float, 12> const& second,
        bool                                      canTrimExcessOfFirst,
        bool                                      canTrimExcessOfSecond
    );
    // NOLINTEND
};

} // namespace VoxelShapes
