#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
namespace VoxelShapes { class RegistryHandle; }
namespace VoxelShapes { class VoxelShape; }
// clang-format on

struct VoxelShapesPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::VoxelShapes::VoxelShape>>                            mShapes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::VoxelShapes::RegistryHandle>> mNameMap;
    ::ll::TypedStorage<2, 2, ushort>                                                               mCustomShapeCount;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelShapesPacketPayload& operator=(VoxelShapesPacketPayload const&);
    VoxelShapesPacketPayload(VoxelShapesPacketPayload const&);
    VoxelShapesPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VoxelShapesPacketPayload(::VoxelShapesPacketPayload&&);

    MCAPI ::VoxelShapesPacketPayload& operator=(::VoxelShapesPacketPayload&&);

    MCAPI ~VoxelShapesPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::VoxelShapesPacketPayload&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
