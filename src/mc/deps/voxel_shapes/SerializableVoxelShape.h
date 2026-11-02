#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/voxel_shapes/SerializableCells.h"

namespace VoxelShapes {

struct SerializableVoxelShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::VoxelShapes::SerializableCells> mCells;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>             mXCoords;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>             mYCoords;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>             mZCoords;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableVoxelShape();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SerializableVoxelShape(::VoxelShapes::SerializableVoxelShape const&);

    MCNAPI ::VoxelShapes::SerializableVoxelShape& operator=(::VoxelShapes::SerializableVoxelShape&&);

    MCNAPI ::VoxelShapes::SerializableVoxelShape& operator=(::VoxelShapes::SerializableVoxelShape const&);

    MCNAPI ~SerializableVoxelShape();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::VoxelShapes::SerializableVoxelShape const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace VoxelShapes
