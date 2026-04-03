#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

struct SerializableCells {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk20f6d8;
    ::ll::UntypedStorage<1, 1>  mUnka53906;
    ::ll::UntypedStorage<1, 1>  mUnkf63ad1;
    ::ll::UntypedStorage<8, 24> mUnk3df10b;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializableCells(SerializableCells const&);
    SerializableCells();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::VoxelShapes::SerializableCells& operator=(::VoxelShapes::SerializableCells&&);

    MCNAPI ::VoxelShapes::SerializableCells& operator=(::VoxelShapes::SerializableCells const&);

    MCNAPI ~SerializableCells();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace VoxelShapes
