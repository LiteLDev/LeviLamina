#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

struct SerializableVoxelShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkff7530;
    ::ll::UntypedStorage<8, 24> mUnk541aaf;
    ::ll::UntypedStorage<8, 24> mUnkd144ae;
    ::ll::UntypedStorage<8, 24> mUnk213941;
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
