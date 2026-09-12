#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/voxel_shapes/VoxelShape.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/voxel_shapes/RegistryHandle.h"

// auto generated forward declare list
// clang-format off
namespace VoxelShapes { class VoxelShape; }
// clang-format on

namespace VoxelShapes {

class VoxelShapeRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                                 mInitialized;
    ::ll::TypedStorage<2, 2, ::VoxelShapes::RegistryHandle>                                        mEmptyShapeHandle;
    ::ll::TypedStorage<2, 2, ::VoxelShapes::RegistryHandle>                                        mUnitCubeShapeHandle;
    ::ll::TypedStorage<8, 8, uint64>                                                               mVanillaShapes;
    ::ll::TypedStorage<8, 8, uint64>                                                               mCustomShapes;
    ::ll::TypedStorage<8, 24, ::std::vector<::VoxelShapes::VoxelShape>>                            mVoxelShapes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::VoxelShapes::RegistryHandle>> mNameMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::VoxelShapes::RegistryHandle _insertOrFindDuplicate(::VoxelShapes::VoxelShape&& shape, bool isVanillaShape);

    MCAPI ::VoxelShapes::RegistryHandle getHandleByName(::HashedString const& name) const;

    MCAPI bool hasName(::HashedString const& name) const;

    MCAPI void initialize();

#ifdef LL_PLAT_C
    MCAPI void initializeFromNetwork(
        ::std::vector<::VoxelShapes::VoxelShape> const&                            shapes,
        ::std::unordered_map<::HashedString, ::VoxelShapes::RegistryHandle> const& nameMap,
        ushort                                                                     customShapeCount
    );
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _computeIsCubeShapeEquivalent(::VoxelShapes::VoxelShape const& shape);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& EMPTY_ID();

    MCAPI static ::HashedString const& UNIT_CUBE_ID();
    // NOLINTEND
};

} // namespace VoxelShapes
