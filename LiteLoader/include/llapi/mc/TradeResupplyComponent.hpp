/**
 * @file  MC/TradeResupplyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TradeResupplyComponent.
 *
 */
class TradeResupplyComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRADERESUPPLYCOMPONENT
public:
    class TradeResupplyComponent& operator=(class TradeResupplyComponent const &) = delete;
    TradeResupplyComponent(class TradeResupplyComponent const &) = delete;
#endif

public:
    /**
     * @hash   1223263075
     * @symbol ??0TradeResupplyComponent@@QEAA@XZ
     */
    MCAPI TradeResupplyComponent();
    /**
     * @hash   -1740185384
     * @symbol ?addAdditionalSaveData@TradeResupplyComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1557112122
     * @symbol ?initFromDefinition@TradeResupplyComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   1943725128
     * @symbol ?readAdditionalSaveData@TradeResupplyComponent@@QEAAXAEAVActor@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -25119172
     * @symbol ?reloadComponent@TradeResupplyComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void reloadComponent(class Actor &);

};