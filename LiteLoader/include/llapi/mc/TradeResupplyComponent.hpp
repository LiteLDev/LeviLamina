/**
 * @file  TradeResupplyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   597998035
     * @symbol  ??0TradeResupplyComponent\@\@QEAA\@XZ
     */
    MCAPI TradeResupplyComponent();
    /**
     * @hash   -909835256
     * @symbol  ?addAdditionalSaveData\@TradeResupplyComponent\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1648999098
     * @symbol  ?initFromDefinition\@TradeResupplyComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void initFromDefinition(class Actor &);
    /**
     * @hash   -1520892040
     * @symbol  ?readAdditionalSaveData\@TradeResupplyComponent\@\@QEAAXAEAVActor\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class Actor &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   805230956
     * @symbol  ?reloadComponent\@TradeResupplyComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void reloadComponent(class Actor &);

};