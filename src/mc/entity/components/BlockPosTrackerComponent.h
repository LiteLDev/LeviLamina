#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
// clang-format on

struct BlockPosTrackerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3cda05;
    ::ll::UntypedStorage<4, 12> mUnk2f8bc4;
    ::ll::UntypedStorage<8, 8>  mUnk2d0026;
    ::ll::UntypedStorage<4, 12> mUnk916095;
    ::ll::UntypedStorage<1, 1>  mUnk169778;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPosTrackerComponent& operator=(BlockPosTrackerComponent const&);
    BlockPosTrackerComponent(BlockPosTrackerComponent const&);
    BlockPosTrackerComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockPosTrackerComponent(bool onGround, ::BlockPos const& pos);

    MCAPI void onRemove(::Actor& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool onGround, ::BlockPos const& pos);
    // NOLINTEND
};
