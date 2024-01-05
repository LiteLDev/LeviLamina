#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AreaAttackComponent {
public:
    // prevent constructor by default
    AreaAttackComponent& operator=(AreaAttackComponent const&);
    AreaAttackComponent(AreaAttackComponent const&);
    AreaAttackComponent();

public:
    // NOLINTBEGIN
    // symbol: ??0AreaAttackComponent@@QEAA@$$QEAV0@@Z
    MCAPI AreaAttackComponent(class AreaAttackComponent&&);

    // symbol: ?addAdditionalSaveData@AreaAttackComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?findCooldownEntry@AreaAttackComponent@@QEAAPEAU?$pair@UActorUniqueID@@UTick@@@std@@AEBUActorUniqueID@@@Z
    MCAPI std::pair<struct ActorUniqueID, struct Tick>* findCooldownEntry(struct ActorUniqueID const& actorID);

    // symbol: ?isEntryOnAttackCooldown@AreaAttackComponent@@QEBA_NPEBU?$pair@UActorUniqueID@@UTick@@@std@@AEBUTick@@@Z
    MCAPI bool
    isEntryOnAttackCooldown(std::pair<struct ActorUniqueID, struct Tick> const*, struct Tick const& currentTick) const;

    // symbol: ??4AreaAttackComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class AreaAttackComponent& operator=(class AreaAttackComponent&&);

    // symbol: ?readAdditionalSaveData@AreaAttackComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    // symbol: ??1AreaAttackComponent@@QEAA@XZ
    MCAPI ~AreaAttackComponent();

    // NOLINTEND
};
