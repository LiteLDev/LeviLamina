#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExplodeComponent {
public:
    // prevent constructor by default
    ExplodeComponent& operator=(ExplodeComponent const&);
    ExplodeComponent(ExplodeComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0ExplodeComponent@@QEAA@XZ
    MCAPI ExplodeComponent();

    // symbol: ?addAdditionalSaveData@ExplodeComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?explode@ExplodeComponent@@QEAAXAEAVActor@@AEBVVec3@@@Z
    MCAPI void explode(class Actor& actor, class Vec3 const& explosionPosition);

    // symbol: ?getFuseLength@ExplodeComponent@@QEBAHXZ
    MCAPI int getFuseLength() const;

    // symbol: ?getInitialFuseLength@ExplodeComponent@@QEBAHXZ
    MCAPI int getInitialFuseLength() const;

    // symbol: ?getIsFuseLit@ExplodeComponent@@QEBA_NXZ
    MCAPI bool getIsFuseLit() const;

    // symbol: ?isFuseLit@ExplodeComponent@@QEBA_NXZ
    MCAPI bool isFuseLit() const;

    // symbol: ?readAdditionalSaveData@ExplodeComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?requiresTntExplodeGameRuleEnabled@ExplodeComponent@@QEBA_NXZ
    MCAPI bool requiresTntExplodeGameRuleEnabled() const;

    // symbol: ?setAllowUnderwater@ExplodeComponent@@QEAAX_N@Z
    MCAPI void setAllowUnderwater(bool allow);

    // symbol: ?setFuseLength@ExplodeComponent@@QEAAXH@Z
    MCAPI void setFuseLength(int fuseLength);

    // symbol: ?setTntExpodeGameRuleRequired@ExplodeComponent@@QEAAXXZ
    MCAPI void setTntExpodeGameRuleRequired();

    // NOLINTEND
};
