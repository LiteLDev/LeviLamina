#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/ResourceDropsCause.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class IBlockSource;
class ItemStack;
// clang-format on

struct ResourceDropsContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ResourceDropsCause>  mCause;
    ::ll::TypedStorage<4, 4, float>                 mExplosionRadius;
    ::ll::TypedStorage<8, 8, ::ItemStack const&>    mUsedItem;
    ::ll::TypedStorage<4, 12, ::BlockPos const>     mBlockPos;
    ::ll::TypedStorage<4, 4, ::DimensionType const> mDimensionType;
    ::ll::TypedStorage<8, 8, ::IBlockSource const&> mBlockSource;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceDropsContext& operator=(ResourceDropsContext const&);
    ResourceDropsContext(ResourceDropsContext const&);
    ResourceDropsContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int getMiningLootBonusLevel() const;

    MCAPI bool isUsingSilkTouch() const;
    // NOLINTEND
};
