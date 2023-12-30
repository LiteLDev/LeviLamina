#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookControlComponent {
public:
    // prevent constructor by default
    LookControlComponent& operator=(LookControlComponent const&);
    LookControlComponent(LookControlComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0LookControlComponent@@QEAA@XZ
    MCAPI LookControlComponent();

    // symbol: ?getHasWantedPosition@LookControlComponent@@QEBA_NXZ
    MCAPI bool getHasWantedPosition() const;

    // symbol: ?getHasWantedRotation@LookControlComponent@@QEBA_NXZ
    MCAPI bool getHasWantedRotation() const;

    // symbol: ?getWantedPosition@LookControlComponent@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getWantedPosition() const;

    // symbol: ?getWantedRotation@LookControlComponent@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 getWantedRotation() const;

    // symbol: ?getXMax@LookControlComponent@@QEBAMXZ
    MCAPI float getXMax() const;

    // symbol: ?getYMax@LookControlComponent@@QEBAMXZ
    MCAPI float getYMax() const;

    // symbol: ?initialize@LookControlComponent@@QEAAXAEAVMob@@@Z
    MCAPI void initialize(class Mob& owner);

    // symbol: ??4LookControlComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class LookControlComponent& operator=(class LookControlComponent&&);

    // symbol: ?setHasWantedPosition@LookControlComponent@@QEAAX_N@Z
    MCAPI void setHasWantedPosition(bool hasWantedPosition);

    // symbol: ?setHasWantedRotation@LookControlComponent@@QEAAX_N@Z
    MCAPI void setHasWantedRotation(bool hasWantedRotation);

    // symbol:
    // ?setInternalType@LookControlComponent@@QEAAXV?$unique_ptr@VLookControl@@U?$default_delete@VLookControl@@@std@@@std@@@Z
    MCAPI void setInternalType(std::unique_ptr<class LookControl> type);

    // symbol: ?setLookAtPosition@LookControlComponent@@QEAAXPEBVActor@@MM@Z
    MCAPI void setLookAtPosition(class Actor const* target, float yMax, float xMax);

    // symbol: ?setLookAtPosition@LookControlComponent@@QEAAXAEBVVec3@@MM@Z
    MCAPI void setLookAtPosition(class Vec3 const& position, float yMax, float xMax);

    // symbol: ?setLookAtRotation@LookControlComponent@@QEAAXAEBVVec3@@MM@Z
    MCAPI void setLookAtRotation(class Vec3 const& rotation, float yMax, float xMax);

    // symbol: ?setYMax@LookControlComponent@@QEAAXM@Z
    MCAPI void setYMax(float yMax);

    // symbol: ?update@LookControlComponent@@QEAAXAEAVMob@@@Z
    MCAPI void update(class Mob& owner);

    // NOLINTEND
};
