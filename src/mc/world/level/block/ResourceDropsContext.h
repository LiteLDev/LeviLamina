#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class BlockPos;
class IBlockSource;
class ILevel;
class ItemStack;
class Random;
// clang-format on

struct ResourceDropsContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc82270;
    ::ll::UntypedStorage<4, 4>  mUnk441aaa;
    ::ll::UntypedStorage<8, 8>  mUnk8ac033;
    ::ll::UntypedStorage<4, 12> mUnk8b3f60;
    ::ll::UntypedStorage<4, 4>  mUnk46749a;
    ::ll::UntypedStorage<8, 8>  mUnkf0a902;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourceDropsContext& operator=(ResourceDropsContext const&);
    ResourceDropsContext(ResourceDropsContext const&);
    ResourceDropsContext();

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

    MCAPI static ::ResourceDropsContext fromOtherCause(::IBlockSource const& region, ::BlockPos const& position);

    MCAPI static ::ResourceDropsContext
    fromPlayerMining(::IBlockSource const& region, ::BlockPos const& position, ::ItemStack const& usedItem);

    MCAPI static ::ResourceDropsContext fromProjectileHit(::IBlockSource const& region, ::BlockPos const& position);
    // NOLINTEND
};
