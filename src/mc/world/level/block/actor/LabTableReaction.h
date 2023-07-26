#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LabTableReaction {

public:
    // prevent constructor by default
    LabTableReaction& operator=(LabTableReaction const&) = delete;
    LabTableReaction(LabTableReaction const&)            = delete;
    LabTableReaction()                                   = delete;

public:
    /**
     * @symbol
     * ?addComponent\@LabTableReaction\@\@QEAAXV?$unique_ptr\@VLabTableReactionComponent\@\@U?$default_delete\@VLabTableReactionComponent\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void addComponent(std::unique_ptr<class LabTableReactionComponent>); // NOLINT
    /**
     * @symbol ?addResultItem\@LabTableReaction\@\@QEAAXAEBVItemStack\@\@\@Z
     */
    MCAPI void addResultItem(class ItemStack const&); // NOLINT
    /**
     * @symbol ?getReactionId\@LabTableReaction\@\@QEAAHXZ
     */
    MCAPI int getReactionId(); // NOLINT
    /**
     * @symbol ?getType\@LabTableReaction\@\@QEAA?AW4LabTableReactionType\@\@XZ
     */
    MCAPI enum class LabTableReactionType getType(); // NOLINT
    /**
     * @symbol ?tick\@LabTableReaction\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool tick(class BlockSource&); // NOLINT
    /**
     * @symbol
     * ?createReaction\@LabTableReaction\@\@SA?AV?$unique_ptr\@VLabTableReaction\@\@U?$default_delete\@VLabTableReaction\@\@\@std\@\@\@std\@\@W4LabTableReactionType\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI static std::unique_ptr<class LabTableReaction>
    createReaction(enum class LabTableReactionType, class BlockPos const&, bool); // NOLINT
};
