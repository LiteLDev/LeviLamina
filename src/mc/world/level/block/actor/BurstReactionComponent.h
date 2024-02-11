#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/LabTableReactionComponent.h"

class BurstReactionComponent : public ::LabTableReactionComponent {
public:
    // prevent constructor by default
    BurstReactionComponent& operator=(BurstReactionComponent const&);
    BurstReactionComponent(BurstReactionComponent const&);
    BurstReactionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BurstReactionComponent@@UEAA@XZ
    virtual ~BurstReactionComponent() = default;

    // vIndex: 3, symbol: ?_onEnd@BurstReactionComponent@@UEAAXAEAVLabTableReaction@@AEAVBlockSource@@@Z
    virtual void _onEnd(class LabTableReaction& owner, class BlockSource& region);

    // NOLINTEND
};
