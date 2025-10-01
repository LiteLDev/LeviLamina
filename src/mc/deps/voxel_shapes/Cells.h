#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/voxel_shapes/JoinOperation.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace VoxelShapes { class AxesPermutation; }
namespace VoxelShapes { class IndexMerger; }
// clang-format on

namespace VoxelShapes {

class Cells {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3e79bc;
    ::ll::UntypedStorage<1, 1>  mUnkc1f84e;
    ::ll::UntypedStorage<1, 1>  mUnk69d3a4;
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
    MCNAPI Cells(::VoxelShapes::Cells&&);

    MCNAPI void forEachBox(
        ::brstd::function_ref<
            void(schar, schar, schar, schar, schar, schar) const,
            void(schar, schar, schar, schar, schar, schar)> consumer,
        bool                                                mergeNeighbors
    ) const;

    MCNAPI ::VoxelShapes::Cells& operator=(::VoxelShapes::Cells&&);

    MCNAPI ::VoxelShapes::Cells reverseAxes(bool reverseX, bool reverseY, bool reverseZ) const;

    MCNAPI ::VoxelShapes::Cells rotate(::VoxelShapes::AxesPermutation const& rotation) const;

    MCNAPI ~Cells();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::VoxelShapes::Cells join(
        ::VoxelShapes::Cells const&       first,
        ::VoxelShapes::Cells const&       second,
        ::VoxelShapes::IndexMerger const& xMerger,
        ::VoxelShapes::IndexMerger const& yMerger,
        ::VoxelShapes::IndexMerger const& zMerger,
        ::VoxelShapes::JoinOperation      operation
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::VoxelShapes::Cells&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace VoxelShapes
