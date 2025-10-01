#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace VoxelShapes {

class AxesPermutation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 3> mUnk57480b;
    ::ll::UntypedStorage<1, 1> mUnk13390c;
    // NOLINTEND

public:
    // prevent constructor by default
    AxesPermutation& operator=(AxesPermutation const&);
    AxesPermutation(AxesPermutation const&);
    AxesPermutation();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::VoxelShapes::AxesPermutation calculateAxesPermutation(::Vec3 rotation);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::VoxelShapes::AxesPermutation const& Identity();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateX180();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateX270();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateX90();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateY180();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateY270();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateY90();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateZ180();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateZ270();

    MCNAPI static ::VoxelShapes::AxesPermutation const& RotateZ90();
    // NOLINTEND
};

} // namespace VoxelShapes
