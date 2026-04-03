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
    SerializableVoxelShape& operator=(SerializableVoxelShape const&);
    SerializableVoxelShape(SerializableVoxelShape const&);
    SerializableVoxelShape();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::VoxelShapes::SerializableVoxelShape& operator=(::VoxelShapes::SerializableVoxelShape&&);

    MCNAPI ~SerializableVoxelShape();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace VoxelShapes
