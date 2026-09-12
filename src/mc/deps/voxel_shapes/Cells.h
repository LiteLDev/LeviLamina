#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/platform/brstd/dynamic_bitset.h"
#include "mc/platform/brstd/function_ref.h"

namespace VoxelShapes {

class Cells {
public:
    // Cells inner types define
    using BitsetContainer = ::Bedrock::small_vector<uchar, 48>;

    using size_type = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar>                                                               mXSize;
    ::ll::TypedStorage<1, 1, schar>                                                               mYSize;
    ::ll::TypedStorage<1, 1, schar>                                                               mZSize;
    ::ll::TypedStorage<8, 72, ::brstd::dynamic_bitset<uchar, ::Bedrock::small_vector<uchar, 48>>> mStorage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void forEachBox(
        ::brstd::function_ref<
            void(schar, schar, schar, schar, schar, schar) const,
            void(schar, schar, schar, schar, schar, schar)> consumer,
        bool                                                mergeNeighbors
    ) const;

    MCAPI ::VoxelShapes::Cells reverseAxes(bool reverseX, bool reverseY, bool reverseZ) const;
    // NOLINTEND
};

} // namespace VoxelShapes
