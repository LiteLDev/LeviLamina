#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/shared_types/legacy/Facing.h"
#include "mc/deps/voxel_shapes/RegistryHandle.h"

struct BlockVoxelShapesCullingComponent {
public:
    // BlockVoxelShapesCullingComponent inner types define
    using FaceShapeHandles = ::Bedrock::DenseEnumMap<::SharedTypes::Facing, ::VoxelShapes::RegistryHandle, 6>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mOcclusionShapeName;
    ::ll::TypedStorage<2, 2, ::VoxelShapes::RegistryHandle> mOcclusionShapeHandle;
    ::ll::TypedStorage<2, 12, ::Bedrock::DenseEnumMap<::SharedTypes::Facing, ::VoxelShapes::RegistryHandle, 6>> mOcclusionShapeHandlesByFace;
    // NOLINTEND

};
