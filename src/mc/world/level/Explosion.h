#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

    // symbol: ?explode@Explosion@@QEAAXXZ
    MCAPI void explode();

    // symbol: ?overrideInWater@Explosion@@QEAAX_N@Z
    MCAPI void overrideInWater(bool);

    // symbol: ?setAllowUnderwater@Explosion@@QEAAX_N@Z
    MCAPI void setAllowUnderwater(bool val);

    // symbol: ?setBreaking@Explosion@@QEAAX_N@Z
    MCAPI void setBreaking(bool val);

    // symbol: ?setFire@Explosion@@QEAAX_N@Z
    MCAPI void setFire(bool val);

    // symbol: ?setMaxResistance@Explosion@@QEAAXM@Z
    MCAPI void setMaxResistance(float resistance);

    // symbol: ??1Explosion@@QEAA@XZ
    MCAPI ~Explosion();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getActorsInRange@Explosion@@AEBA?AV?$vector@V?$not_null@PEAVActor@@@gsl@@V?$allocator@V?$not_null@PEAVActor@@@gsl@@@std@@@std@@PEAVActor@@M@Z
    MCAPI std::vector<gsl::not_null<class Actor*>> _getActorsInRange(class Actor*, float) const;

    // NOLINTEND
};
