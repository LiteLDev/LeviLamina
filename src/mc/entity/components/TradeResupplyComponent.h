#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TradeResupplyComponent {
public:
    // prevent constructor by default
    TradeResupplyComponent& operator=(TradeResupplyComponent const&);
    TradeResupplyComponent(TradeResupplyComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0TradeResupplyComponent@@QEAA@XZ
    MCAPI TradeResupplyComponent();

    // symbol: ?addAdditionalSaveData@TradeResupplyComponent@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag& tag) const;

    // symbol: ?initFromDefinition@TradeResupplyComponent@@QEAAXAEAVActor@@@Z
    MCAPI void initFromDefinition(class Actor& actor);

    // symbol: ?readAdditionalSaveData@TradeResupplyComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCAPI void
    readAdditionalSaveData(class Actor& actor, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // symbol: ?reloadComponent@TradeResupplyComponent@@QEAAXAEAVActor@@@Z
    MCAPI void reloadComponent(class Actor& actor);

    // NOLINTEND
};
