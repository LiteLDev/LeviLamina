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
    MCAPI static ::VoxelShapes::AxesPermutation const& Identity();

    MCAPI static ::VoxelShapes::AxesPermutation const& RotateX180();

    MCAPI static ::VoxelShapes::AxesPermutation const& RotateX270();

    MCAPI static ::VoxelShapes::AxesPermutation const& RotateX90();

    MCAPI static ::VoxelShapes::AxesPermutation const& RotateY180();

    MCAPI static ::VoxelShapes::AxesPermutation const& RotateY270();

    MCAPI static ::VoxelShapes::AxesPermutation const& RotateY90();

    MCAPI static ::VoxelShapes::AxesPermutation const& RotateZ180();

    MCAPI static ::VoxelShapes::AxesPermutation const& RotateZ270();

    MCAPI static ::VoxelShapes::AxesPermutation const& RotateZ90();
    // NOLINTEND
};

} // namespace VoxelShapes
