/**
 * @file  LabTableReaction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -613395552
     * @symbol  ?addComponent\@LabTableReaction\@\@QEAAXV?$unique_ptr\@VLabTableReactionComponent\@\@U?$default_delete\@VLabTableReactionComponent\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addComponent(std::unique_ptr<class LabTableReactionComponent>);
    /**
     * @hash   -1641047000
     * @symbol  ?addResultItem\@LabTableReaction\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void addResultItem(class ItemStack const &);
    /**
     * @hash   878821272
     * @symbol  ?getReactionId\@LabTableReaction\@\@QEAAHXZ
     */
    MCAPI int getReactionId();
    /**
     * @hash   1213977692
     * @symbol  ?getType\@LabTableReaction\@\@QEAA?AW4LabTableReactionType\@\@XZ
     */
    MCAPI enum class LabTableReactionType getType();
    /**
     * @hash   -993602347
     * @symbol  ?tick\@LabTableReaction\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool tick(class BlockSource &);
    /**
     * @hash   807876141
     * @symbol  ?createReaction\@LabTableReaction\@\@SA?AV?$unique_ptr\@VLabTableReaction\@\@U?$default_delete\@VLabTableReaction\@\@\@std\@\@\@std\@\@W4LabTableReactionType\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI static std::unique_ptr<class LabTableReaction> createReaction(enum class LabTableReactionType, class BlockPos const &, bool);

};