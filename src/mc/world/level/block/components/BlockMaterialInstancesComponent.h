#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockMaterialInstancesDescription;
// clang-format on

struct BlockMaterialInstancesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk627ac4;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMaterialInstancesComponent& operator=(BlockMaterialInstancesComponent const&);
    BlockMaterialInstancesComponent(BlockMaterialInstancesComponent const&);
    BlockMaterialInstancesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockMaterialInstancesComponent(
        ::BlockMaterialInstancesDescription const& blockMaterialInstancesDescription
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockMaterialInstancesDescription const& blockMaterialInstancesDescription);
    // NOLINTEND
};
