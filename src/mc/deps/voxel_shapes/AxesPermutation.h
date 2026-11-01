#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/voxel_shapes/Axis.h"

namespace VoxelShapes {

class AxesPermutation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 3, ::Bedrock::DenseEnumMap<::VoxelShapes::Axis, ::VoxelShapes::Axis, 3>> mAxisPermutation;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::VoxelShapes::Axis, 3>>                           mIsAxisInverted;
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
