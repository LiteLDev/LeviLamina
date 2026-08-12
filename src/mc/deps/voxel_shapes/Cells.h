#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/platform/brstd/function_ref.h"

namespace VoxelShapes {

class Cells {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkbc4301;
    ::ll::UntypedStorage<1, 1>  mUnk753a0d;
    ::ll::UntypedStorage<1, 1>  mUnke06a37;
    ::ll::UntypedStorage<8, 72> mUnk3ea7f6;
    // NOLINTEND

public:
    // prevent constructor by default
    Cells& operator=(Cells const&);
    Cells(Cells const&);
    Cells();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void forEachBox(
        ::brstd::function_ref<
            void(schar, schar, schar, schar, schar, schar) const,
            void(schar, schar, schar, schar, schar, schar)> consumer,
        bool                                                mergeNeighbors
    ) const;

    MCNAPI ::VoxelShapes::Cells reverseAxes(bool reverseX, bool reverseY, bool reverseZ) const;
    // NOLINTEND
};

} // namespace VoxelShapes
