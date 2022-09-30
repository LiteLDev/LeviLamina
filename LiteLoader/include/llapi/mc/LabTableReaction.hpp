/**
 * @file  LabTableReaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LabTableReaction.
 *
 */
class LabTableReaction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LABTABLEREACTION
public:
    class LabTableReaction& operator=(class LabTableReaction const &) = delete;
    LabTableReaction(class LabTableReaction const &) = delete;
    LabTableReaction() = delete;
#endif

public:
    /**
     * @hash   -1295736304
     * @symbol ?addComponent@LabTableReaction@@QEAAXV?$unique_ptr@VLabTableReactionComponent@@U?$default_delete@VLabTableReactionComponent@@@std@@@std@@@Z
     */
    MCAPI void addComponent(std::unique_ptr<class LabTableReactionComponent>);
    /**
     * @hash   1971564168
     * @symbol ?addResultItem@LabTableReaction@@QEAAXAEBVItemStack@@@Z
     */
    MCAPI void addResultItem(class ItemStack const &);
    /**
     * @hash   1613240536
     * @symbol ?getReactionId@LabTableReaction@@QEAAHXZ
     */
    MCAPI int getReactionId();
    /**
     * @hash   1948396956
     * @symbol ?getType@LabTableReaction@@QEAA?AW4LabTableReactionType@@XZ
     */
    MCAPI enum class LabTableReactionType getType();
    /**
     * @hash   -1675973851
     * @symbol ?tick@LabTableReaction@@QEAA_NAEAVBlockSource@@@Z
     */
    MCAPI bool tick(class BlockSource &);
    /**
     * @hash   125520013
     * @symbol ?createReaction@LabTableReaction@@SA?AV?$unique_ptr@VLabTableReaction@@U?$default_delete@VLabTableReaction@@@std@@@std@@W4LabTableReactionType@@AEBVBlockPos@@_N@Z
     */
    MCAPI static std::unique_ptr<class LabTableReaction> createReaction(enum class LabTableReactionType, class BlockPos const &, bool);

};