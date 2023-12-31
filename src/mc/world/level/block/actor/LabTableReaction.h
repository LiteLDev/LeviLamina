#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/LabTableReactionType.h"

class LabTableReaction {
public:
    // prevent constructor by default
    LabTableReaction& operator=(LabTableReaction const&);
    LabTableReaction(LabTableReaction const&);
    LabTableReaction();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LabTableReaction@@UEAA@XZ
    virtual ~LabTableReaction() = default;

    // symbol:
    // ?addComponent@LabTableReaction@@QEAAXV?$unique_ptr@VLabTableReactionComponent@@U?$default_delete@VLabTableReactionComponent@@@std@@@std@@@Z
    MCAPI void addComponent(std::unique_ptr<class LabTableReactionComponent> comp);

    // symbol: ?addResultItem@LabTableReaction@@QEAAXAEBVItemStack@@@Z
    MCAPI void addResultItem(class ItemStack const& resultItem);

    // symbol: ?getReactionId@LabTableReaction@@QEAAHXZ
    MCAPI int getReactionId();

    // symbol: ?getType@LabTableReaction@@QEAA?AW4LabTableReactionType@@XZ
    MCAPI ::LabTableReactionType getType();

    // symbol: ?tick@LabTableReaction@@QEAA_NAEAVBlockSource@@@Z
    MCAPI bool tick(class BlockSource& region);

    // symbol:
    // ?createReaction@LabTableReaction@@SA?AV?$unique_ptr@VLabTableReaction@@U?$default_delete@VLabTableReaction@@@std@@@std@@W4LabTableReactionType@@AEBVBlockPos@@_N@Z
    MCAPI static std::unique_ptr<class LabTableReaction>
    createReaction(::LabTableReactionType type, class BlockPos const& pos, bool isClientSide);

    // NOLINTEND
};
