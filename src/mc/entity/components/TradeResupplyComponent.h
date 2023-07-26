#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TradeResupplyComponent {

public:
    // prevent constructor by default
    TradeResupplyComponent& operator=(TradeResupplyComponent const&) = delete;
    TradeResupplyComponent(TradeResupplyComponent const&)            = delete;

public:
    /**
     * @symbol ??0TradeResupplyComponent\@\@QEAA\@XZ
     */
    MCAPI TradeResupplyComponent(); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@TradeResupplyComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?initFromDefinition\@TradeResupplyComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol
     * ?readAdditionalSaveData\@TradeResupplyComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?reloadComponent\@TradeResupplyComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor&); // NOLINT
};
