#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace VoxelShapes { class RegistryHandle; }
namespace VoxelShapes { class VoxelShape; }
// clang-format on

namespace VoxelShapes {

class VoxelShapeRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3a4b31;
    ::ll::UntypedStorage<2, 2>  mUnk937122;
    ::ll::UntypedStorage<2, 2>  mUnk11cf12;
    ::ll::UntypedStorage<8, 8>  mUnk903343;
    ::ll::UntypedStorage<8, 8>  mUnka5e922;
    ::ll::UntypedStorage<8, 24> mUnk92b9be;
    ::ll::UntypedStorage<8, 64> mUnka8a263;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelShapeRegistry& operator=(VoxelShapeRegistry const&);
    VoxelShapeRegistry(VoxelShapeRegistry const&);
    VoxelShapeRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::VoxelShapes::RegistryHandle _addNonBuiltIn(::VoxelShapes::VoxelShape&& shape, bool isVanillaShape);

    MCNAPI ::VoxelShapes::RegistryHandle _insertOrFindDuplicate(::VoxelShapes::VoxelShape&& shape, bool isVanillaShape);

    MCNAPI void initialize();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& EMPTY_ID();

    MCNAPI static uint64 const& UNIQUE_SHAPES_MAX();

    MCNAPI static ::HashedString const& UNIT_CUBE_ID();
    // NOLINTEND
};

} // namespace VoxelShapes
