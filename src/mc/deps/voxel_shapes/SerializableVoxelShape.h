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
    MCAPI SerializableVoxelShape(::VoxelShapes::SerializableVoxelShape const&);

    MCAPI ::VoxelShapes::SerializableVoxelShape& operator=(::VoxelShapes::SerializableVoxelShape&&);

    MCAPI ::VoxelShapes::SerializableVoxelShape& operator=(::VoxelShapes::SerializableVoxelShape const&);

    MCAPI ~SerializableVoxelShape();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::VoxelShapes::SerializableVoxelShape const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace VoxelShapes
