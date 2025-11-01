#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VoxelShapes { class RegistryHandle; }
namespace VoxelShapes { class VoxelShape; }
// clang-format on

namespace VoxelShapes {

class VoxelShapeRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd2e60a;
    ::ll::UntypedStorage<8, 64> mUnk5c0ed1;
    ::ll::UntypedStorage<2, 2> mUnk937122;
    ::ll::UntypedStorage<2, 2> mUnk11cf12;
    // NOLINTEND

public:
    // prevent constructor by default
    VoxelShapeRegistry& operator=(VoxelShapeRegistry const&);
    VoxelShapeRegistry(VoxelShapeRegistry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VoxelShapeRegistry();

    MCNAPI ::VoxelShapes::RegistryHandle _addNonBuiltIn(::VoxelShapes::VoxelShape&& shape);

    MCNAPI ::VoxelShapes::RegistryHandle _findExistingShapeIndex(::VoxelShapes::VoxelShape const& shape) const;

    MCNAPI ::VoxelShapes::RegistryHandle _insertOrFindDuplicate(::VoxelShapes::VoxelShape&& shape);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& EMPTY_ID();

    MCNAPI static ::std::string const& UNIT_CUBE_ID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

};

}
