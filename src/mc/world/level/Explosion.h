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
    // symbol: ??0Explosion@@QEAA@AEAVBlockSource@@PEAVActor@@AEBVVec3@@M@Z
    MCAPI Explosion(class BlockSource& region, class Actor* optSource, class Vec3 const& pos, float radius);

    // symbol: ?explode@Explosion@@QEAA_NXZ
    MCAPI bool explode();

    // symbol: ?getPosition@Explosion@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getPosition() const;

    // symbol: ?overrideInWater@Explosion@@QEAAX_N@Z
    MCAPI void overrideInWater(bool);

    // symbol: ?setAllowUnderwater@Explosion@@QEAAX_N@Z
    MCAPI void setAllowUnderwater(bool val);

    // symbol: ?setBreaking@Explosion@@QEAAX_N@Z
    MCAPI void setBreaking(bool val);

    // symbol: ?setCanToggleBlocks@Explosion@@QEAAX_N@Z
    MCAPI void setCanToggleBlocks(bool);

    // symbol: ?setCustomKnockbackCalculation@Explosion@@QEAAXP6A?AVVec3@@AEBV1@AEBVActor@@M@Z@Z
    MCAPI void setCustomKnockbackCalculation(class Vec3 (*)(class Explosion const&, class Actor const&, float));

    // symbol: ?setExplosionParticleType@Explosion@@QEAAXW4LevelEvent@@@Z
    MCAPI void setExplosionParticleType(::LevelEvent);

    // symbol: ?setExplosionSound@Explosion@@QEAAXW4LevelSoundEvent@Legacy@Puv@@@Z
    MCAPI void setExplosionSound(::Puv::Legacy::LevelSoundEvent);

    // symbol: ?setFire@Explosion@@QEAAX_N@Z
    MCAPI void setFire(bool val);

    // symbol: ?setIgnoreBlockResistance@Explosion@@QEAAX_N@Z
    MCAPI void setIgnoreBlockResistance(bool);

    // symbol: ?setKnockbackScaling@Explosion@@QEAAXM@Z
    MCAPI void setKnockbackScaling(float);

    // symbol: ?setMaxResistance@Explosion@@QEAAXM@Z
    MCAPI void setMaxResistance(float resistance);

    // symbol: ?setShouldTakeDamage@Explosion@@QEAAX_N@Z
    MCAPI void setShouldTakeDamage(bool);

    // symbol: ??1Explosion@@QEAA@XZ
    MCAPI ~Explosion();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getActorsInRange@Explosion@@AEBA?AV?$vector@V?$not_null@PEAVActor@@@gsl@@V?$allocator@V?$not_null@PEAVActor@@@gsl@@@std@@@std@@PEAVActor@@M@Z
    MCAPI std::vector<gsl::not_null<class Actor*>> _getActorsInRange(class Actor* optSource, float range) const;

    // symbol: ?getEyePos@Explosion@@AEBA?AVVec3@@AEAVActor@@@Z
    MCAPI class Vec3 getEyePos(class Actor&) const;

    // NOLINTEND
};
