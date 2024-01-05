#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrustComponent {
public:
    // prevent constructor by default
    TrustComponent& operator=(TrustComponent const&);
    TrustComponent(TrustComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TrustComponent@@QEAA@XZ
    MCAPI TrustComponent();

    // symbol: ??0TrustComponent@@QEAA@$$QEAV0@@Z
    MCAPI TrustComponent(class TrustComponent&&);

    // symbol: ?addAdditionalSaveData@TrustComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?assignTrustedPlayer@TrustComponent@@QEAAXUActorUniqueID@@@Z
    MCAPI void assignTrustedPlayer(struct ActorUniqueID playerID);

    // symbol:
    // ?getTrustedPlayerIDs@TrustComponent@@QEBAAEBV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@XZ
    MCAPI std::unordered_set<struct ActorUniqueID> const& getTrustedPlayerIDs() const;

    // symbol: ?initFromDefinition@TrustComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& owner);

    // symbol: ??4TrustComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class TrustComponent& operator=(class TrustComponent&&);

    // symbol: ?readAdditionalSaveData@TrustComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const& tag, class DataLoadHelper&);

    // NOLINTEND
};
