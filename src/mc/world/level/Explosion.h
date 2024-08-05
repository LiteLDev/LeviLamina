#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/LevelEvent.h"
#include "mc/events/LevelSoundEvent.h"

class Explosion {
public:
    // prevent constructor by default
    Explosion& operator=(Explosion const&);
    Explosion(Explosion const&);
    Explosion();

public:
    // NOLINTBEGIN
    MCAPI Explosion(class BlockSource& region, class Actor* optSource, class Vec3 const& pos, float radius);

    MCAPI bool explode();

    MCAPI class Vec3 getPosition() const;

    MCAPI void overrideInWater(bool);

    MCAPI void setAllowUnderwater(bool val);

    MCAPI void setBreaking(bool val);

    MCAPI void setCanToggleBlocks(bool);

    MCAPI void setCustomKnockbackCalculation(class Vec3 (*)(class Explosion const&, class Actor const&, float));

    MCAPI void setExplosionParticleType(::LevelEvent);

    MCAPI void setExplosionSound(::Puv::Legacy::LevelSoundEvent);

    MCAPI void setFire(bool val);

    MCAPI void setIgnoreBlockResistance(bool);

    MCAPI void setKnockbackScaling(float);

    MCAPI void setMaxResistance(float resistance);

    MCAPI void setShouldTakeDamage(bool);

    MCAPI ~Explosion();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::vector<gsl::not_null<class Actor*>> _getActorsInRange(class Actor* optSource, float range) const;

    MCAPI class Vec3 getEyePos(class Actor&) const;

    MCAPI static void
    _addOrMergeItemStack(class ItemStack const&, class BlockPos, std::vector<std::pair<class ItemStack, class BlockPos>>&);

    MCAPI static void
    _spawnExtraResourcesAndMergeItemDropsForBlock(class BlockSource&, class BlockPos const&, class Block const&, class Randomize&, struct ResourceDropsContext const&, std::vector<std::pair<class ItemStack, class BlockPos>>&);

    // NOLINTEND
};
