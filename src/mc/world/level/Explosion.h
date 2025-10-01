#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class IRandom;
class ItemStack;
class Randomize;
struct ResourceDropsContext;
// clang-format on

class Explosion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                                mPos;
    ::ll::TypedStorage<4, 4, float>                                  mRadius;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockPos>>      mAffectedBlocks;
    ::ll::TypedStorage<1, 1, bool>                                   mFire;
    ::ll::TypedStorage<1, 1, bool>                                   mBreaking;
    ::ll::TypedStorage<1, 1, bool>                                   mAllowUnderwater;
    ::ll::TypedStorage<1, 1, bool>                                   mCanToggleBlocks;
    ::ll::TypedStorage<4, 4, float>                                  mDamageScaling;
    ::ll::TypedStorage<1, 1, bool>                                   mIgnoreBlockExplosionResistance;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::LevelEvent>      mParticleType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundExplosionType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mSourceID;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                         mRegion;
    ::ll::TypedStorage<4, 4, float>                                  mMaxResistance;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                  mInWaterOverride;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                   mTotalDamageOverride;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackScaling;
    // NOLINTEND

public:
    // prevent constructor by default
    Explosion& operator=(Explosion const&);
    Explosion(Explosion const&);
    Explosion();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Explosion(::BlockSource& region, ::Actor* optSource, ::Vec3 const& pos, float radius);

    MCAPI ::std::vector<::gsl::not_null<::Actor*>> _getActorsInRange(::Actor* optSource, float range) const;

    MCAPI bool explode(::IRandom& random);

    MCAPI ::Vec3 getEyePos(::Actor& actor) const;

    MCAPI ~Explosion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addOrMergeItemStack(
        ::ItemStack const&                                   newItemStack,
        ::BlockPos                                           pos,
        ::std::vector<::std::pair<::ItemStack, ::BlockPos>>& itemStacks
    );

    MCAPI static void _spawnExtraResourcesAndMergeItemDropsForBlock(
        ::BlockSource&                                       region,
        ::BlockPos const&                                    blockPos,
        ::Block const&                                       block,
        ::Randomize&                                         randomize,
        ::ResourceDropsContext const&                        resourceDropsContext,
        ::std::vector<::std::pair<::ItemStack, ::BlockPos>>& itemStacks
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource& region, ::Actor* optSource, ::Vec3 const& pos, float radius);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
