#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
struct BlockMaterialInstance;
struct BlockMaterialInstancesDescription;
// clang-format on

struct BlockMaterialInstancesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::BlockMaterialInstance>> mMaterials;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMaterialInstancesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockMaterialInstancesComponent(::BlockMaterialInstancesDescription const& blockMaterialInstancesDescription);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockMaterialInstancesDescription const& blockMaterialInstancesDescription);
    // NOLINTEND

};
