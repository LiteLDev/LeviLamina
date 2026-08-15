#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

namespace VoxelShapes {

class IndexMerger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9ef562;
    ::ll::UntypedStorage<8, 64> mUnk914bd0;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexMerger& operator=(IndexMerger const&);
    IndexMerger(IndexMerger const&);
    IndexMerger();

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::small_vector<float, 12> const& emptyShapeCoords();
    // NOLINTEND
};

} // namespace VoxelShapes
