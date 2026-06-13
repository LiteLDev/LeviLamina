#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/ResourceDropsCause.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class IBlockSource;
class ILevel;
class ItemStack;
class Random;
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
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockActor const* getBlockActor() const;

    MCAPI ::ILevel& getLevel() const;

    MCAPI int getMiningLootBonusLevel() const;

    MCAPI ::Random& getRandom() const;

    MCAPI bool isUsingSilkTouch() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ResourceDropsContext
    fromExplosion(::IBlockSource const& region, float explosionRadius, ::BlockPos const& position);

    MCAPI static ::ResourceDropsContext
    fromLootResolver(::IBlockSource const& region, ::BlockPos const& position, ::ItemStack const& usedItem);

    MCAPI static ::ResourceDropsContext fromOtherCause(::IBlockSource const& region, ::BlockPos const& position);

    MCAPI static ::ResourceDropsContext
    fromPlayerMining(::IBlockSource const& region, ::BlockPos const& position, ::ItemStack const& usedItem);

    MCAPI static ::ResourceDropsContext fromProjectileHit(::IBlockSource const& region, ::BlockPos const& position);
    // NOLINTEND
};
