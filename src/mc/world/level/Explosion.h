#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/level/block/LevelEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class ItemStack;
class Vec3;
struct ActorUniqueID;
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
    ::ll::TypedStorage<2, 2, ::LevelEvent>                           mParticleType;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mSoundExplosionType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                        mSourceID;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                         mRegion;
    ::ll::TypedStorage<4, 4, float>                                  mMaxResistance;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                  mInWaterOverride;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                   mTotalDamageOverride;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackScaling;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Explosion(::BlockSource& region, ::Actor* optSource, ::Vec3 const& pos, float radius);

    MCAPI ::std::vector<::gsl::not_null<::Actor*>> _getActorsInRange(::Actor* optSource, float range) const;

    MCAPI bool explode();

    MCAPI void overrideInWater(bool inWater);

    MCAPI void setAllowUnderwater(bool val);

    MCAPI void setBreaking(bool val);

    MCAPI void setCanToggleBlocks(bool toggleBlocks);

    MCAPI void setDamageScaling(float damageScaling);

    MCAPI void setExplosionParticleType(::LevelEvent particlesExplosionType);

    MCAPI void setExplosionSound(::SharedTypes::Legacy::LevelSoundEvent soundExplosionType);

    MCFOLD void setFire(bool val);

    MCFOLD void setIgnoreBlockResistance(bool shouldIgnore);

    MCAPI void setKnockbackScaling(float scaling);

    MCAPI void setMaxResistance(float resistance);

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
