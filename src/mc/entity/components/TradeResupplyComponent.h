#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TradeResupplyComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADERESUPPLYCOMPONENT
public:
    TradeResupplyComponent& operator=(TradeResupplyComponent const&) = delete;
    TradeResupplyComponent(TradeResupplyComponent const&)            = delete;
#endif

public:
    /**
     * @symbol ??0TradeResupplyComponent\@\@QEAA\@XZ
     */
    MCAPI TradeResupplyComponent();
    /**
     * @symbol ?addAdditionalSaveData\@TradeResupplyComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?initFromDefinition\@TradeResupplyComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor&);
    /**
     * @symbol
     * ?readAdditionalSaveData\@TradeResupplyComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @symbol ?reloadComponent\@TradeResupplyComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor&);
};
