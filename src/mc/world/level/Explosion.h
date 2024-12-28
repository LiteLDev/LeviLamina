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
// clang-format on

class Explosion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkcbb3c1;
    ::ll::UntypedStorage<4, 4>  mUnk304b6b;
    ::ll::UntypedStorage<8, 64> mUnke94031;
    ::ll::UntypedStorage<1, 1>  mUnk501acf;
    ::ll::UntypedStorage<1, 1>  mUnke8bdf7;
    ::ll::UntypedStorage<1, 1>  mUnkd3b11b;
    ::ll::UntypedStorage<1, 1>  mUnkf21933;
    ::ll::UntypedStorage<4, 4>  mUnk733610;
    ::ll::UntypedStorage<1, 1>  mUnk5d2a11;
    ::ll::UntypedStorage<2, 2>  mUnk62b5bd;
    ::ll::UntypedStorage<4, 4>  mUnk8e52e6;
    ::ll::UntypedStorage<8, 8>  mUnka79c6e;
    ::ll::UntypedStorage<8, 8>  mUnk2a21f8;
    ::ll::UntypedStorage<4, 4>  mUnk62d2a5;
    ::ll::UntypedStorage<1, 2>  mUnk9a0603;
    ::ll::UntypedStorage<4, 8>  mUnk93a3ad;
    ::ll::UntypedStorage<4, 4>  mUnk2b977a;
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

    MCAPI bool explode();

    MCAPI void overrideInWater(bool inWater);

    MCAPI void setAllowUnderwater(bool val);

    MCAPI void setBreaking(bool val);

    MCAPI void setCanToggleBlocks(bool toggleBlocks);

    MCAPI void setDamageScaling(float damageScaling);

    MCAPI void setExplosionParticleType(::LevelEvent particlesExplosionType);

    MCAPI void setExplosionSound(::SharedTypes::Legacy::LevelSoundEvent soundExplosionType);

    MCAPI void setFire(bool val);

    MCAPI void setIgnoreBlockResistance(bool shouldIgnore);

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
    MCAPI void $dtor();
    // NOLINTEND
};
