#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/level/block/LevelEvent.h"

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

    MCAPI void overrideInWater(bool inWater);

    MCAPI void setAllowUnderwater(bool val);

    MCAPI void setBreaking(bool val);

    MCAPI void setCanToggleBlocks(bool toggleBlocks);

    MCAPI void setCustomKnockbackCalculation(
        class Vec3 (*customKnockbackCalculation)(class Explosion const&, class Actor const&, float)
    );

    MCAPI void setExplosionParticleType(::LevelEvent particlesExplosionType);

    MCAPI void setExplosionSound(::Puv::Legacy::LevelSoundEvent soundExplosionType);

    MCAPI void setFire(bool val);

    MCAPI void setIgnoreBlockResistance(bool shouldIgnore);

    MCAPI void setKnockbackScaling(float scaling);

    MCAPI void setMaxResistance(float resistance);

    MCAPI void setShouldTakeDamage(bool takeDamage);

    MCAPI ~Explosion();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::vector<gsl::not_null<class Actor*>> _getActorsInRange(class Actor* optSource, float range) const;

    MCAPI class Vec3 getEyePos(class Actor& actor) const;

    MCAPI static void _addOrMergeItemStack(
        class ItemStack const&                                   newItemStack,
        class BlockPos                                           pos,
        std::vector<std::pair<class ItemStack, class BlockPos>>& itemStacks
    );

    MCAPI static void _spawnExtraResourcesAndMergeItemDropsForBlock(
        class BlockSource&                                       region,
        class BlockPos const&                                    blockPos,
        class Block const&                                       block,
        class Randomize&                                         randomize,
        struct ResourceDropsContext const&                       resourceDropsContext,
        std::vector<std::pair<class ItemStack, class BlockPos>>& itemStacks
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
